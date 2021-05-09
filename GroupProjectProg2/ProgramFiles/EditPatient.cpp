#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>



typedef struct pstruc {
        int id;
        char fname[25];
        char lname[25];
        int birth;
        char condition[9];
        char status[11];
} pstruc;

void delay(unsigned int mseconds)// time delay function
{
    clock_t goal = mseconds + clock();
    while (goal>clock());
}


void main(int argc, char* argv[])
{
    FILE* read;
    FILE* update;

    int count;

    pstruc person[35];// stores patients to print to a temporary file
    fopen_s(&read, "patient.txt", "r");
    fopen_s(&update, "temp.txt", "w+");

    fprintf(update,"\nPatient ID\tPatient Name\tCondition   Birth Status");


    if (read == NULL)
    {
        perror("\aCritical File Error");
        return;
    }

    char getline[128];
    int id, done=0, choice, size;

    printf("\n==================================================================================");
    printf("\n1.View Patients \t2.Update Patient \t3.Return to Main Menu \t4.Clear Screen\n: ");
    scanf("%d", &choice);

    while (choice!=0)//the value of zero will cancel the operation of the loop.
    {
    switch (choice)
        {

        case 1:
            fseek(read, 0, SEEK_SET);
             // while (!feof(read))
             while (fgets(getline, sizeof(getline),read) != NULL)
             {
                    fputs(getline, stdout);
                    //fgets(getline, sizeof(getline), read);
                    //printf("%s", getline);

             }
            break;
        case 2:
                fseek(read, 50, SEEK_SET);
                count=0;
                printf("\nEnter ID number of Patient: ");
                fflush(stdin);
                scanf("%d", &id);

                //while (!feof(read))
                while (fgets(getline, sizeof(getline),read) != NULL)
                {
                            if (feof(read)==1)
                                break;
                            fscanf(read,"%d %s %s %s %d %s", &person[count].id, person[count].fname, person[count].lname, person[count].condition, &person[count].birth, person[count].status);//reads data from the existing patient file
                            strcat(person[count].fname, " ");
                            strcat(person[count].fname, person[count].lname);

                           if (person[count].id == id)//if statement to find the record
                            {
                                printf("\nRecord Found!\a");
                                printf("\n==============================================");
                                //displays to the user the matching record
                                printf("\nName: %s %s, Condition: %s",person[count].fname, person[count].lname, person[count].condition);
                                printf("\nEnter new condition: ");
                                fflush(stdin);
                                scanf("%s", person[count].condition);

                                done=1;//indicator if a change was made
                               //printf("\n%d", done);
                            }

                            size=strlen(person[count].fname);//gets the size of the persons name
                            if (size==0)//if the name of the person is missing, the program will not print it to the file
                            {
                                break;
                            }
                            fprintf(update, "\n%-8d %-26s %-10s %-5d %-12s", person[count].id, person[count].fname, person[count].condition, person[count].birth, person[count].status);//prints data to the new file
                            count++;
                }
                    if (done==0)
                        printf("\n\aRecord not found... Update Aborted");
                break;
        case 3:
            fclose(update);
            fclose(read);

               if (done==1)
                    {
                       remove ("patient.txt");// deletes the patient file
                       rename("temp.txt", "patient.txt");// renames the temporary file to patient.txt
                       printf("\nRecord Successfully updated!\nPress any key to return to main menu...");//print statemnet to notify user
                       getch();
                    }
            return;
        case 4:
            system("cls");
            break;
        default:
            printf("\a\nInvalid Argument. Try again: ");
            break;
        }
        printf("\n=======================================================================================");
        printf("\n1.View Patients \t2.Update Patient \t3.Return to Main Menu \t4.Clear Screen\n: ");
        fflush(stdin);
        scanf("%d", &choice);
    }
    return;
}
