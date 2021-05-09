/*
   NAMES:GABRIEL TICKLE GARCIA, LEONDRE BROMFIELD, JASON HENRY
   ID NUMBERS: 2007394,2000070 ,
   COURSE CODE: CMP 1025
   COURSE NAME:Programming 2
   OCCURANCE: UE3
   Tutor: Oneil Charles
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAXPATIENT 35
#define MAXROOM 21

#define PATIENT_EX "%-8d%-13s%-13s%-10s%-5d%-12s\n"
#define PATIENT_IN "%d %s %s %s %d %s"

#define ROOM_EX "\n%-4d%-11s%-5d%-7s%"
#define ROOM_IN "%d% s% d% s%"

//Patient Structure

struct pstruct {
        int id;
        char fname[12];
        char lname[12];
        int birth;
        char condition[9];
        char status[10];
} pstruct;

//Room Structure

struct rstruct {
        int id;
        char respirator[12];
        int patients;
        char staff[12];
        int patientid[5];
} rstruct;

//ErrorCheck Function

int errorcheck();

//Add Patient Function's

void addpatientID(struct pstruct *s);
void addpatientname(struct pstruct *s);
void addpatientbirth(struct pstruct *s);
void addpatientcond(struct pstruct *s);
void addpatientstat(struct pstruct *s);

//Add Room Function's

void addroomid(struct rstruct *s);
void addroomres(struct rstruct *s);
void addroombed(struct rstruct *s);
void addroomstaff(struct rstruct *s);
void addroompatient(struct rstruct *s,int i);
void addroom();

//Ai Room Assignment Function's

void airoom();

//Full Function Call

void addpatient();
void addroom();
void editpatient();
void airoom();

void patientreport();
void statusreport();
void agereport();

//Main Function

int main()
{
        //code to spruceup the look of the command line
        system("color 1f");

        int selection = 0;

        printf("Add a Patient \t\t 1\nAdd a Room \t\t 2\nEdit Patient Status  \t 3\nAi Room Assignment \t 4\n");
        printf("Admitted Patient Report\t 5\nAge Report \t\t 6\nCOVID-19 Report: \t 7\n");
        printf("--------------------------------\n");

        //Print Options for the use to select

        while (selection == 0) {

                printf("Please Select an Option: ");
                selection = errorcheck();

                //Switch to call functions to execute the respective aspect of the code

                switch (selection) {
                case 1:
                        printf("--------------------------------\n");
                        addpatient();
                        break;
                case 2:
                        printf("--------------------------------\n");
                        addroom();
                        break;
                case 3:
                        printf("--------------------------------\n");
                        editpatient();
                        break;
                case 4:
                        airoom();
                        break;
                case 5:
                        patientreport();
                        break;
                case 7:
                        statusreport();
                        break;
                case 6:
                        agereport();
                        break;
                default:
                        selection = 0;
                        printf("Invalid input entered\n");
                        break;
                        //default incase of invalid input
                }
        }

        return 0;
}

//ErrorCheck Function

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

//Add Patient Function's

void addpatientID(struct pstruct *s){

        s->id = 0;

        srand(time(0));

        int selection = 0;

        printf("Would you Like to Enter or generate ID:\n");
        printf("1 to Generate ID\n2 to Input ID\n-1 to Exit\n");
        fflush(stdin);
        scanf("%d", &selection);

        //Allows user to generate an id number or manually input an id

        switch (selection) {
        case 1:
                s->id = 999999+rand() % 9000000;
                printf("%d",s->id);
                break;
        //generates random id from  999999 to 9999999
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
                //allows user to enter id from  999999 to 9999999
                break;
        case -1:
                s->id = selection;
                break;
        }

        return;
}

void addpatientname(struct pstruct *s){

        strcpy (s->fname, "");
        strcpy (s->lname, "");

        char firstname[12], lastname[13];

        printf("\nPlease Enter Patient First Name: ");
        fflush(stdin);
        scanf("%s",firstname);
        //accepts firstname from user

        printf("\nPlease Enter Patient Last Name: ");
        fflush(stdin);
        scanf("%s",lastname);
        //accepts lastname from user



        firstname[0]=toupper(firstname[0]);
        lastname[0]=toupper(lastname[0]);
        //capitalizes first letter of each name for visual reasons

        strcpy (s->fname, firstname);
        strcpy (s->lname, lastname);

        return;

}

void addpatientbirth(struct pstruct *s){

        s->birth = 0;

        int year;

        time_t seconds=time(NULL);
        struct tm* current_time=localtime(&seconds);

        year = current_time->tm_year + 1900;
        //sets the current date according to system time

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
                //error checks and ensure user enters a valid date of birth within the current millenia
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

        //Switch to call assign condition to patients

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

        //Switch to assign a status to a patient

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

void addpatient(){


        struct pstruct s,*p;
        p = &s;

        s.id = 0;
        s.birth = 0;

        int count = 0,c;

        p = &s;

        FILE *patient;

        if (patient = fopen ("./patient.txt", "r")) {
                //checks if patient file opens Successfully

                for (c = getc(patient); c != EOF; c = getc(patient))
                        if (c == '\n')           // Increment count if this character is newline
                                count = count + 1;
                count = count-1;
                printf("Current Patient Count : %d\n", count);
                //counts the amount of lines in the file to calculate the amount of patients present

                fclose(patient);
                patient = fopen ("./patient.txt", "a");
                //reopens the file to be appended to
        } else {
                //creates file and adds header aswell as prints error message
                fclose(patient);
                printf("File Does not exist\nCreating File\n");
                patient = fopen ("./patient.txt", "a");
                fprintf(patient,"Patient ID\tPatient Name\tCondition   Birth Status\n");
        }



        while(s.id != -1) {

                //checks if max patient has been reached before executing the rest of the functions
                if (count > MAXPATIENT) {
                        printf("Maximum Number of patients added\n");
                        break;
                }
                addpatientID(p);
                if (p->id == -1) {
                        break;
                }
                addpatientname(p);
                addpatientcond(p);
                addpatientbirth(p);
                addpatientstat(p);
                //prints the patient info to the patient file
                fprintf(patient,PATIENT_EX,s.id,s.fname,s.lname,s.condition,s.birth,s.status);
                count++;

        }

        fclose(patient);

        return;
}

//Add Room Function's

void addroomid(struct rstruct *s){

        s->id = 0;

        srand(time(0));

        int selection = 0;

        printf("Would you Like to Enter or generate ID:\n");
        printf("1 to Generate ID\n2 to Input ID\n-1 to Exit\n");
        fflush(stdin);
        scanf("%d", &selection);

        switch (selection) {
        case 1:
                s->id = 99+rand() % 900;
                printf("%d\n",s->id);
                break;
        case 2:
                while (s->id < 99) {

                        printf("\nPlease Enter Room ID: ");

                        //Check to ensure that Input is Integer

                        s->id = errorcheck();

                        if (s->id == -1) {
                                break;
                        }
                        if (s->id > 999) {
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

void addroomres(struct rstruct *s){

        strcpy (s->respirator, "");

        int selection = 0;

        printf("--------------------------------\n");
        printf("equipmet: None\t\t 1\nequipmet: Respirator \t 2\n");
        printf("--------------------------------\n");

        while (selection == 0) {
                printf("\nPlease Enter Patient covid condition: ");

                fflush(stdin);
                selection = errorcheck();

                switch (selection) {
                case 1:
                        strcpy(s->respirator, "None");
                        break;
                case 2:
                        strcpy(s->respirator, "Respirator");
                        break;

                default:
                        selection = 0;
                        printf("Invalid input entered\n");
                        break;
                }
        }

        return;

}

void addroombed(struct rstruct *s){

        s->patients = 0;

        printf("How Many Beds are in The Room:\n");
        fflush(stdin);

        while (s->patients < 1) {

                s->patients = errorcheck();

                if (s->patients > 5) {
                        printf("Invalid Amount\n");
                        s->patients = 0;
                }
        }

        return;
}

void addroomstaff(struct rstruct *s){

        strcpy (s->staff, "");

        int selection = 0;

        printf("\n--------------------------------\n");
        printf("Staff: None\t\t 1\nStaff: Nurse \t\t 2\nStaff: Doctor \t\t 3\n");
        printf("--------------------------------\n");

        while (selection == 0) {
                printf("\nPlease Select Staff: ");

                fflush(stdin);
                selection = errorcheck();

                switch (selection) {
                case 1:
                        strcpy(s->staff, "None");
                        break;
                case 2:
                        strcpy(s->staff, "Nurse");
                        break;
                case 3:
                        strcpy(s->staff, "Doctor");
                        break;

                default:
                        selection = 0;
                        printf("Invalid input entered\n");
                        break;
                }
        }

        return;

}

void addroompatient(struct rstruct *s,int i){

        s->patientid[i] = 0;

        fflush(stdin);

        while (s->patientid[i] < 999999) {

                printf("\nPlease Enter Patient ID[%d]: ",i+1);

                //Check to ensure that Input is Integer

                s->patientid[i] = errorcheck();

                if (s->patientid[i] == -1) {
                        break;
                }
                if (s->patientid[i] > 9999999) {
                        printf("Invalid ID\n");
                        s->patientid[i] = 0;
                }

        }

        return;
}

void addroom(){


        struct rstruct s,*p;
        p = &s;

        s.id = 0;
        s.patients = 0;

        p = &s;

        int count = 0, c = 0;

        FILE *room;

        if (room = fopen ("./room.txt", "r")) {
                //opens the file and checks how many rooms are present by checking the amount of lines used
                for (c = getc(room); c != EOF; c = getc(room))
                        if (c == '\n') // Increment count if this character is newline
                                count = count + 1;
                count = count-1;
                printf("Current Room Count : %d\n", count);

                fclose(room);

                room = fopen ("./room.txt", "a");
        } else {
                fclose(room);
                printf("File Does not exist\nCreating File\n");
                room = fopen ("./room.txt", "a");
                fprintf(room,"ID  Respirator Beds Staff\tPatients\n");
        }

        while(s.id != -1) {

                if (count > MAXROOM) {
                        printf("Maximum Number of rooms added\n");
                        break;
                }

                addroomid(p);
                if (p->id == -1) {
                        break;
                }

                addroomres(p);
                addroombed(p);
                addroomstaff(p);
                printf("How many Patients: ");
                int num = 0;
                scanf("%d",&num);
                for (int i = 0; i < num; i++) {
                        addroompatient(p, i);
                }
                fprintf(room,ROOM_EX,s.id,s.respirator,s.patients,s.staff);
                for (int i = 0; i < num; i++) {
                        fprintf(room,"%d,",s.patientid[i]);
                }

        }

        fclose(room);

        return;
}

//Edit Patient Function's

void editpatient()
{
        FILE* read;
        FILE* update;

        int count,recordfound = -1,selection = 0;
        char k[9];

        struct pstruct person[MAXPATIENT];// gets how many patients were entered into the file previously


        do {

                count = 0,recordfound = -1,selection = 0;

                read = fopen("patient.txt", "r");
                update = fopen("temp.txt", "w+");

                fprintf(update,"Patient ID\tPatient Name\tCondition   Birth Status");

                if (read == NULL)
                {
                        perror("\aCritical File Error");

                }

                char getline[256];
                int id, done=0,fileend = 0;


                fseek(read, 0, SEEK_SET);
                // while (!feof(read))
                while (fgets(getline, sizeof(getline),read) != NULL)
                {
                        fputs(getline, stdout);

                }

                fseek(read,0, SEEK_SET);

                count=0;

                while (fgets(getline, sizeof(getline),read) != NULL)

                {
                        fscanf(read,PATIENT_IN, &person[count].id, person[count].fname, person[count].lname, person[count].condition, &person[count].birth, person[count].status);//reads data from the existing patient file
                        //reads all patients from the patient file into an array
                        count++;

                }

                fileend = count;

                printf("\nEnter ID number of Patient: "); //scanf("%d", &id);
                id = 0;
                id = errorcheck(); //checks if the entered id was valid.

                count = 0;
                while (recordfound == -1) {
                        if (person[count].id == id)//if statement to find the record
                        {
                                printf("\nRecord Found!");
                                recordfound = count;
                                printf("\nFound At line %d",recordfound+1 );

                                printf("\n==============================================\n");
                        }
                        count++;
                }

                printf(PATIENT_EX, person[recordfound].id, person[recordfound].fname, person[recordfound].lname, person[recordfound].condition, person[recordfound].birth, person[recordfound].status);

                selection = 0;

                printf("\n--------------------------------\n");
                printf("status: None\t\t 1\nstatus: Mild \t\t 2\nstatus: Average \t 3\n");
                printf("status: Severe\t\t 4\nstatus: Critical\t 5\n");
                printf("--------------------------------\n");

                while (selection == 0) {
                        printf("\nPlease Enter Patient covid condition: ");

                        fflush(stdin);
                        selection = errorcheck();

                        switch (selection) {
                        case 1:
                                strcpy(k, "None");
                                break;
                        case 2:
                                strcpy(k, "Mild");
                                break;
                        case 3:
                                strcpy(k, "Average");
                                break;
                        case 4:
                                strcpy(k, "Severe");
                                break;
                        case 5:
                                strcpy(k, "Critical");
                                break;
                        default:
                                selection = 0;
                                printf("Invalid input entered\n");
                                break;
                        }
                }

                strcpy(person[recordfound].condition, k); //replaces the user input with the structure variable
                done=1; //indicator if a change was made

                fseek(read, 0, SEEK_SET);
                count = 0;

                //prints updated patient file to the temp file

                while (count < fileend-1) {
                        fprintf(update, "\n%-8d%-13s%-13s%-10s%-5d%-12s", person[count].id, person[count].fname, person[count].lname, person[count].condition, person[count].birth, person[count].status);//prints data to the new file
                        count++;
                }

                fclose(update);
                fclose(read);

                if (done==1)
                {
                        remove ("patient.txt");// deletes the patient file
                        rename("temp.txt", "patient.txt");// renames the temporary file to patient.txt
                        printf("\nRecord Successfully updated!");//print statemnet to notify user
                }

                printf("\nDo you want to Edit Patient File again");
                printf("\nContinue: \t\t 1\nExit: \t\t\t 0");
                printf("\n--------------------------------\n");
                selection = 0;
                selection = errorcheck();
                fflush(stdin);

        } while(selection != 0);
}

//AI room Function's

void airoom() {
        FILE* pread;
        FILE* pupdate;
        FILE* rread;
        FILE* rupdate;

        int count,year,age[MAXPATIENT],fileend;
        char getline[256];

        time_t seconds=time(NULL);
        struct tm* current_time=localtime(&seconds);

        year = current_time->tm_year + 1900;

        struct pstruct person[MAXPATIENT];// gets how many patients were entered into the file previously
        struct rstruct room[MAXROOM];// gets how many rooms were entered into the file previously

        count = 0;

        pread = fopen("patient.txt", "r");
        pupdate = fopen("ptemp.txt", "w+");
        rread = fopen("room.txt", "r");
        rupdate = fopen("rtemp.txt", "w+");

        fprintf(pupdate,"Patient ID\tPatient Name\tCondition   Birth Status");

        if (pread == NULL)
        {
                perror("\aCritical File Error");

        }
        if (rread == NULL)
        {
                perror("\aCritical File Error");

        }

        fseek(pread, 0, SEEK_SET);

        while (fgets(getline, sizeof(getline),pread) != NULL)
        {
                fscanf(pread,PATIENT_IN, &person[count].id, person[count].fname, person[count].lname, person[count].condition, &person[count].birth, person[count].status);//reads data from the existing patient file
                age[count] = year - person[count].birth;
                count++;

        }
        fileend = count;

        count = 0;

        fseek(rread, 0, SEEK_SET);
        while (fgets(getline, sizeof(getline),rread) != NULL)
        {
                fscanf(rread,ROOM_IN, &room[count].id, room[count].respirator, &room[count].patients, room[count].staff,&room[count].patientid[0],&room[count].patientid[1],&room[count].patientid[2],&room[count].patientid[3],&room[count].patientid[4]); //reads data from the existing patient file;
                count++;
                printf("%d %s %d %s", room[count].id, room[count].respirator, room[count].patients, room[count].staff);
        }

        for (count = 0; count <= fileend; count++) {
                if (strcmp(person[count].condition, "Critical") == 0) {
                        printf("%s ",person[count].condition);
                        printf("put patient in Room with bed, respirator and doctor\n");
                        strcpy(person[count].status, "admitted");
                        //put patient in Room with bed, respirator and doctor
                }
                if (strcmp(person[count].condition, "Severe") == 0) {
                        if (age[count] > 60) {
                                printf("%s ",person[count].condition);
                                printf("put patient in Room with bed, respirator and/or nurse\n");
                                strcpy(person[count].status, "admitted");
                                //put patient in Room with bed, respirator and/or nurse
                        }
                }
                if (strcmp(person[count].condition, "Severe") == 0) {
                        if (age[count] >= 40) {
                                printf("%s ",person[count].condition);
                                printf("put patient in Room with bed and/or nurse\n");
                                strcpy(person[count].status, "admitted");
                                //put patient in Room with bed and/or nurse
                        }
                }
                else if (strcmp(person[count].condition, "Mild") == 0) {
                        if (age[count] >= 40) {
                                printf("%s ",person[count].condition);
                                printf("put patient in Room with bed\n");
                                strcpy(person[count].status, "admitted");
                                //put patient in Room with bed
                        }
                }
                if (strcmp(person[count].condition, "Average") == 0) {
                        if (age[count] >= 40) {
                                printf("%s ",person[count].condition);
                                printf("put patient in Room with bed\n");
                                strcpy(person[count].status, "admitted");
                                //put patient in Room with bed
                        }
                }
                if (strcmp(person[count].condition, "Severe") == 0) {
                        if (age[count] >= 20) {
                                printf("%s ",person[count].condition);
                                printf("put patient in Room with bed and doctor\n");
                                strcpy(person[count].status, "admitted");
                                //put patient in Room with bed and doctor
                        }
                }
                if (strcmp(person[count].condition, "Mild") == 0) {
                        if (age[count] >= 20) {
                                printf("%s ",person[count].condition);
                                printf("put patient in Room with bed\n");
                                strcpy(person[count].status, "admitted");
                                //put patient in Room with bed
                        }
                }
                if (strcmp(person[count].condition, "Average") == 0) {
                        if (age[count] >= 20) {
                                printf("%s ",person[count].condition);
                                printf("put patient in Room with bed\n");
                                strcpy(person[count].status, "admitted");
                                //put patient in Room with bed
                        }
                }
                if (strcmp(person[count].condition, "Severe") == 0) {
                        if (age[count] < 20) {
                                printf("%s ",person[count].condition);
                                printf("put patient in Room with bed and nurse\n");
                                strcpy(person[count].status, "admitted");
                                //put patient in Room with bed and nurse
                        }
                }
                if (strcmp(person[count].condition, "Average") == 0) {
                        if (age[count] < 20) {
                                printf("%s ",person[count].condition);
                                printf("put patient in Room with bed and nurse\n");
                                strcpy(person[count].status, "admitted");
                                //put patient in Room with bed and nurse
                        }
                }
                if (strcmp(person[count].condition, "Mild") == 0) {
                        if (age[count] < 20) {
                                printf("%s ",person[count].condition);
                                printf("put patient in Room with bed\n");
                                strcpy(person[count].status, "admitted");
                                //put patient in Room with bed
                        }
                }

                if (strcmp(person[count].condition, "None") == 0) {
                        printf("%s \n",person[count].condition);
                        strcpy(person[count].status, "Discharged");
                }

        }

        fseek(pread, 0, SEEK_SET);
        count = 0;
        printf("%d\n",fileend);

        while (count < fileend-1) {
                fprintf(pupdate, "\n%-8d%-13s%-13s%-10s%-5d%-12s", person[count].id, person[count].fname, person[count].lname, person[count].condition, person[count].birth, person[count].status);//prints data to the new file
                printf("\n%-8d%-13s%-13s%-10s%-5d%-12s", person[count].id, person[count].fname, person[count].lname, person[count].condition, person[count].birth, person[count].status);//prints data to the new file
                count++;
        }

        while (fgets(getline, sizeof(getline),rread) != NULL)
        {
                fputs(getline, stdout);
        }

        fclose(pupdate);
        fclose(pread);
        fclose(rupdate);
        fclose(rread);

        remove ("patient.txt");// deletes the patient file
        rename("ptemp.txt", "patient.txt");// renames the temporary file to patient.txt
        printf("\nRecord Successfully updated!");//print statemnet to notify user


}

void patientreport() {
        FILE* pread;
        FILE* report;

        int count,fileend, selection;
        char getline[256],filename[25];

        struct pstruct person[MAXPATIENT];// gets how many patients were entered into the file previously

        count = 0;

        pread = fopen("patient.txt", "r");

        if (pread == NULL)
        {
                perror("\aCritical File Error");

        }

        fseek(pread, 0, SEEK_SET);

        while (fgets(getline, sizeof(getline),pread) != NULL)
        {
                fscanf(pread,PATIENT_IN, &person[count].id, person[count].fname, person[count].lname, person[count].condition, &person[count].birth, person[count].status);//reads data from the existing patient file
                count++;

        }
        fileend = count;

        count = 0;

        fseek(pread, 0, SEEK_SET);
        count = 0;
        printf("%d\n",fileend);

        printf("\nWould you like to save a report showing patient status: ");
        selection = errorcheck();

        count = 0;

        if (selection) {
                printf("\nWhat would you like to name the file: ");
                scanf("%s",filename);
                strcat(filename, ".txt");
                report = fopen(filename, "w+");
                while (count < fileend-1) {
                        if (strcmp(person[count].status, "Discharged") == 1) {
                                printf("\n%-8d%-13s%-13s%-10s%", person[count].id, person[count].fname, person[count].lname, person[count].condition);//prints data to the new file
                                fprintf(report, "\n%-8d%-13s%-13s%-10s%", person[count].id, person[count].fname, person[count].lname, person[count].condition);//prints data to the new file
                        }
                        count++;
                }
        }
        fclose(report);


}

void statusreport() {
        FILE* pread;
        FILE* report;

        int count, selection;
        int none = 0, mild = 0, average = 0, severe = 0, critical = 0;
        char getline[256],filename[25];

        struct pstruct person[MAXPATIENT];// gets how many patients were entered into the file previously

        count = 0;

        pread = fopen("patient.txt", "r");

        if (pread == NULL)
        {
                perror("\aCritical File Error");

        }

        fseek(pread, 0, SEEK_SET);

        while (fgets(getline, sizeof(getline),pread) != NULL)
        {
                fscanf(pread,PATIENT_IN, &person[count].id, person[count].fname, person[count].lname, person[count].condition, &person[count].birth, person[count].status);//reads data from the existing patient file

                if (strcmp(person[count].condition, "Critical") == 0) {
                        critical++;
                }
                if (strcmp(person[count].condition, "Severe") == 0) {
                        severe++;
                }
                if (strcmp(person[count].condition, "Average") == 0) {
                        average++;
                }
                if (strcmp(person[count].condition, "Mild") == 0) {
                        mild++;
                }
                if (strcmp(person[count].condition, "None") == 0) {
                        none++;
                }

                count++;

        }

        count = 0;

        fflush(stdin);

        printf("\nWould you like to save a report showing patient status: ");
        selection = errorcheck();

        if (selection) {
                printf("\nWhat would you like to name the file: ");
                scanf("%s",filename);
                strcat(filename, ".txt");
                report = fopen(filename, "w+");

                int arr[5] = {none,mild,average,severe,critical},max=35;
                char a,b,c,d,e;

                for(int i=1; i<=max; i++) {

                        a=' ';

                        b=' ';

                        c=' ';

                        d=' ';

                        e=' ';

                        if(arr[0]+i >max) {a='*';}

                        if(arr[1]+i >max) {b='*';}

                        if(arr[2]+i >max) {c='*';}

                        if(arr[3]+i >max) {d='*';}

                        if(arr[4]+i >max) {e='*';}

                        printf("\n%5c %5c %5c %5c %5c",a,b,c,d,e);
                        fprintf(report,"\n%5c %5c %5c %5c %5c",a,b,c,d,e);

                }

                printf("\n%5s %5s %5s %5s %5s","none","mild","average","severe","critical");
                fprintf(report,"\n%5s %5s %5s %5s %5s","none","mild","average","severe","critical");

        }

        fclose(report);
        fclose(pread);

}

void agereport() {
        FILE* pread;
        FILE* report;

        int count,year,age[MAXPATIENT],fileend, selection;
        int young= 0,oldyoung = 0,youngold= 0, old= 0;
        char getline[256],filename[25];

        time_t seconds=time(NULL);
        struct tm* current_time=localtime(&seconds);

        year = current_time->tm_year + 1900;

        struct pstruct person[MAXPATIENT];// gets how many patients were entered into the file previously

        count = 0;

        pread = fopen("patient.txt", "r");

        if (pread == NULL)
        {
                perror("\aCritical File Error");

        }

        fseek(pread, 0, SEEK_SET);

        while (fgets(getline, sizeof(getline),pread) != NULL)
        {
                fscanf(pread,PATIENT_IN, &person[count].id, person[count].fname, person[count].lname, person[count].condition, &person[count].birth, person[count].status);//reads data from the existing patient file
                age[count] = year - person[count].birth;
                count++;
        }
        fileend = count;

        for (count = 0; count < fileend-1; count++) {
                if (age[count] > 20) {
                        if (age[count] > 39) {
                                if (age[count] > 60) {
                                        old++;
                                }
                                else{
                                        youngold++;
                                }
                        }
                        else{
                                oldyoung++;
                        }
                }
                else{
                        young++;
                }
        }

        count = 0;

        fseek(pread, 0, SEEK_SET);
        count = 0;
        printf("%d\n",fileend);

        printf("\nWould you like to save a report showing patient status: ");
        selection = errorcheck();

        count = 0;

        if (selection) {
                printf("\nWhat would you like to name the file: ");
                scanf("%s",filename);
                strcat(filename, ".txt");
                report = fopen(filename, "w+");

                int arr[4] = {young,oldyoung,youngold,old},max=35;
                char a,b,c,d;

                for(int i=1; i<=max; i++) {

                        a=' ';

                        b=' ';

                        c=' ';

                        d=' ';


                        if(arr[0]+i >max) {a='*';}

                        if(arr[1]+i >max) {b='*';}

                        if(arr[2]+i >max) {c='*';}

                        if(arr[3]+i >max) {d='*';}


                        printf("\n%5c %9c %9c %5c",a,b,c,d);
                        fprintf(report,"\n%5c %9c %9c %5c",a,b,c,d);

                }

                printf("\n%6s %9s %9s %5s",">20","20 to 39 ","40 to 60","<60");
                fprintf(report,"\n%6s %9s %9s %5s",">20","20 to 39","40 to 60","<60");

        }

        fclose(report);
        fclose(pread);
}
