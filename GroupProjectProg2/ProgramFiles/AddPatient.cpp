#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

const char* patient_ex = "%-8d%-13s%-13s%-10s%-5d%-12s\n";

struct pstruct {
        int id;
        char fname[13];
        char lname[12];
        int birth;
        char condition[9];
        char status[10];
} pstruct;

int errorcheck();
void addpatientID(struct pstruct *s);
void addpatientname(struct pstruct *s);
void addpatientbirth(struct pstruct *s);
void addpatientcond(struct pstruct *s);
void addpatientstat(struct pstruct *s);
void addpatient(FILE *patient,struct pstruct s, struct pstruct *p);

int main()
{
        system("color 4f");
        int selection = 0;
        struct pstruct s,*p;
        p = &s;

        s.id = 0;
        s.birth = 0;

        p = &s;

        FILE *patient;

        if (patient = fopen ("./patient.txt", "r")) {
                fclose(patient);
                patient = fopen ("./patient.txt", "a");
        } else {
                fclose(patient);
                printf("File Does not exist\nCreating File\n");
                patient = fopen ("./patient.txt", "a");
                fprintf(patient,"\nPatient ID\tPatient Name\tCondition   Birth Status\n");
        }

        printf("Add a Patient \t\t 1\nEdit Patient Status \t 2\nAdd a Room \t\t 3\nAutomatic Room\t\t 4\n");
        printf("--------------------------------\n");

        while (selection == 0) {

                printf("Please Select an Option: ");
                selection = errorcheck();

                switch (selection) {
                case 1:

                        addpatientID(p);
                        if (s.id == -1) {
                                break;
                        }
                        while(s.id != -1) {

                                addpatientname(p);
                                addpatientcond(p);
                                addpatientbirth(p);
                                addpatientstat(p);
                                fprintf(patient,patient_ex,s.id,s.fname,s.lname,s.condition,s.birth,s.status);
                                addpatientID(p);
                                if (p->id == -1) {
                                        break;
                                }
                        }
                        break;
                default:
                        selection = 0;
                        printf("Invalid input entered\n");
                        break;
                }
        }

        return 0;
}

int errorcheck(){

        int input;
        int args = scanf("%d", &input);
        if (args < 1)
        {
                // Display an error message
                char clear;
                scanf("%c", &clear); // eats a character off the buffer
                input = 0;
        }

        return input;

}

void addpatientID(struct pstruct *s){

        s->id = 0;

        srand(time(0));

        int selection = 0;

        printf("Would you Like to Enter or generate ID:\n");
        printf("1 to Generate ID\n2 to Input ID\n-1 to Exit\n");
        fflush(stdin);
        scanf("%d", &selection);

        switch (selection) {
        case 1:
                s->id = 999999+rand() % 9000000;
                printf("%d",s->id);
                break;
        case 2:

                while (s->id < 999999) {

                        printf("\nPlease Enter Patient ID: ");

                        //Check to ensure that Input is Integer

                        s->id = errorcheck();

                        if (s->id == -1) {
                                break;
                        }
                        if (s->id > 9999999) {
                                printf("Invalid ID\n");
                                s->id = 0;
                        }

                }
                break;
        case -1:
                s->id = selection;
                break;
        }

        return;
}

void addpatientname(struct pstruct *s){

        strcpy (s->fname, "");

        char firstname[25], lastname[20];

        printf("\nPlease Enter Patient First Name: ");
        fflush(stdin);
        scanf("%s",firstname);
        printf("\nPlease Enter Patient Last Name: ");
        fflush(stdin);
        scanf("%s",lastname);

        /*printf("\nPlease Enter Patient First Name: ");
           scanf("%s",firstname);

           printf("\nPlease Enter Patient Middle Name: ");
           scanf("%s",middlename);

           printf("\nPlease Enter Patient Last Name: ");
           scanf("%s",lastname);

           firstname[0]=toupper(firstname[0]);
           middlename[0]=toupper(middlename[0]);
           lastname[0]=toupper(lastname[0]);*/

        strcpy (s->fname, firstname);
        strcpy (s->lname, lastname);
        /*strcat (s->name, " ");
           strcat (s->name, middlename);
           strcat (s->name, " ");
           strcat (s->name, lastname);
           strcat (s->name, " ");*/

        return;

}

void addpatientbirth(struct pstruct *s){

        s->birth = 0;

        int year;

        time_t seconds=time(NULL);
        struct tm* current_time=localtime(&seconds);

        year = current_time->tm_year + 1900;

        while (s->birth < 999) {
                printf("\nPlease Enter Patient birth year: ");

                //Check to ensure that Input is Integer
                fflush(stdin);
                s->birth = errorcheck();

                if (s->birth == -1) {
                        break;
                }
                if (s->birth > year || s->birth < 999) {
                        printf("Invalid Birth Year\n");
                        s->birth = 0;
                }
        }
        return;

}

void addpatientcond(struct pstruct *s){

        strcpy (s->condition, "");

        int selection = 0;

        printf("--------------------------------\n");
        printf("status: None\t\t 1\nstatus: Mild \t\t 2\nstatus: Average \t 3\n");
        printf("status: Severe\t\t 4\nstatus: Critical\t 5\n");
        printf("--------------------------------\n");

        while (selection == 0) {
                printf("\nPlease Enter Patient covid condition: ");

                fflush(stdin);
                selection = errorcheck();

                switch (selection) {
                case 1:
                        strcpy(s->condition, "None");
                        break;
                case 2:
                        strcpy(s->condition, "Mild");
                        break;
                case 3:
                        strcpy(s->condition, "Average");
                        break;
                case 4:
                        strcpy(s->condition, "Severe");
                        break;
                case 5:
                        strcpy(s->condition, "Critical");
                        break;
                default:
                        selection = 0;
                        printf("Invalid input entered\n");
                        break;
                }
        }

        return;

}

void addpatientstat(struct pstruct *s){

        strcpy (s->status, "");

        int selection = 0;

        printf("--------------------------------\n");
        printf("status: Admitted\t 1\nstatus: Discharged\t 2\n");
        printf("--------------------------------\n");

        while (selection == 0) {
                printf("\nPlease Enter Patient Admission Status: ");

                fflush(stdin);
                selection = errorcheck();

                switch (selection) {
                case 1:
                        strcpy(s->status, "admitted");
                        break;
                case 2:
                        strcpy(s->status, "Discharged");
                        break;
                default:
                        selection = 0;
                        printf("Invalid input entered\n");
                        break;
                }
        }

        return;

}

void addpatient(FILE *patient,struct pstruct s,struct pstruct *p){

        p = &s;

        if (s.id != -1) {
                fprintf(patient,"\n%-18d",s.id);
        }
        while(s.id != -1) {
                addpatientID(p);
                if (s.id == -1) {
                        break;
                }
                printf("\n");
                addpatientname(p);
                printf("\n");
                addpatientbirth(p);
                printf("\n");
                addpatientcond(p);
                printf("\n");

                fprintf(patient,patient_ex,s.id,s.fname,s.lname,s.birth,s.condition);

                if (s.id != -1) {
                        fprintf(patient,"\n%-18d",s.id);
                }
        }
        return;

   }
