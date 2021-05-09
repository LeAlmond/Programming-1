#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>

const char* patient_ex = "\n%-8d%-13s%-13s%-10s%-5d%-12s";

typedef struct pstruct {
        int id;
        char fname[25];
        char lname[25];
        int birth;
        char condition[9];
        char status[10];
} pstruct;

int errorcheck();

void editpatient();

int main()
{
    FILE* read;
    FILE* update;

    int count;
    pstruct person[sizeof(count)];// gets how many patients were entered into the file previously
    int patient;
    char k[9];
    read = fopen("patient.txt", "r");
    update = fopen("temp.txt", "w+");


    if (read == NULL)
    {
        perror("\aCritical File Error");
    }

    char getline[256];
    int id, done=0;

    printf("\nEnter ID number of Patient: "); //scanf("%d", &id);
    id = errorcheck(); //checks if the entered id was valid.

    fseek(read,50, SEEK_SET);

    count=0;
    fprintf(update,"Patient ID\tPatient Name\tCondition   Birth Status");
    while (fgets(getline, sizeof(getline),read))
    {

        fscanf(read,"%d %s %s %s %d %s", &person[count].id, person[count].fname, person[count].lname, person[count].condition, &person[count].birth, person[count].status);//reads data from the existing patient file
        if (person[count].id == id)//if statement to find the record
        {
            printf("\nRecord Found!");
            printf("\n==============================================");
            //displays to the user the matching record
            printf(patient_ex, person[count].id, person[count].fname, person[count].lname, person[count].condition, person[count].birth, person[count].status);

            int selection = 0;

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

            strcpy(person[count].condition, k);//replaces the user input with the structure variable
            done=1;//indicator if a change was made
        }
        else
        {
            //perror("Record Could not be found");//print statemnet to notify user
            //break;//leaves the loop
        }
        fprintf(update, patient_ex, person[count].id, person[count].fname, person[count].lname, person[count].condition, person[count].birth, person[count].status);//prints data to the new file
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
