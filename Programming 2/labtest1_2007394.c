
// Name:      Gabriel Tickle Garcia
// ID#:       2007394
// Date:      February 15, 2021
// Tutorial:  UE3

#include <stdio.h>

int main(){

        float grades[20], hchem = 0;
        int subject, cnt, math = 0,bio = 10,chem = 15,english = 5;

        printf("Please enter a valid Subject variable\n");
        printf("1 for Math\t 2 for English \t 3 for Bio\t 4 for Chemistry\n");

        //for loop used to ensure to ensure the array can only recieve 20 Grades
        //secondary counters used for each subject to keep track of the index per segment of the array
        //secondary counters used to track how many grades have been entered per subject
        //main counter/index only incremented on when a valid grade is entered in the switch
        //default in the switch used to ensure that the subject choices are obvious


        for (cnt = 0;cnt < 20;) {

                printf("Please enter subject: ");
                scanf("%d", &subject);
                if (subject == -1) {
                  break;
                }
                switch (subject) {
                case 1:
                        if (math >= 5) {
                                printf("Max amount of math grades have been entered\n");
                                break;
                        }
                        printf("Please Enter Math grade: ");
                        scanf("%f", &grades[math]);
                        //if statement used to round up grades that are within the pass margin below 50
                        if (grades[0 + math] < 50.00 && grades[0 + math] >= 45) {
                          grades[0 + math] = 50;
                        }
                        //addittional if statements to ensure grades above 100 are limited to 100
                        if (grades[math] > 100) {
                          grades[math] = 100;
                        }
                        cnt++;
                        math++;
                        break;
                case 2:
                        if (english >= 10) {
                                printf("Max amount of english grades have been entered\n");
                                break;
                        }
                        printf("Please Enter English grade: ");
                        scanf("%f", &grades[english]);
                        if (grades[english] < 50 && grades[english] >= 45) {
                          grades[english] = 50;
                        }
                        if (grades[english]> 100) {
                          grades[english] = 100;
                        }
                        cnt++;
                        english++;
                        break;
                case 3:
                        if (bio >= 15) {
                                printf("Max amount of bio grades have been entered\n");
                                break;
                        }
                        printf("Please Enter Bio grade: ");
                        scanf("%f", &grades[bio]);
                        if (grades[bio] < 50 && grades[bio] >= 45) {
                          grades[bio] = 50;
                        }
                        if (grades[bio] > 100) {
                          grades[bio] = 100;
                        }
                        cnt++;
                        bio++;
                        break;
                case 4:
                        if (chem >= 20) {
                                printf("Max amount of Chem grades have been entered\n");
                                break;
                        }
                        printf("Please Enter Chem grade: ");
                        scanf("%f", &grades[chem]);
                        if (grades[chem] < 50 && grades[chem] >= 45) {
                          grades[chem] = 50;
                        }
                        if (grades[chem] > 100) {
                          grades[chem] = 100;
                        }
                        cnt++;
                        chem++;
                        break;
                default:
                        printf("Please enter a valid Subject variable\n");
                        printf("1 for Math\t 2 for English \t 3 for Bio\t 4 for Chemistry\n");
                        break;
                }
        }

        //loop to search for highest chemistry grade

        for (cnt = 15; cnt <(chem); cnt++) {
          if (grades[cnt] > hchem) {
            hchem = grades[cnt];
          }
        }
        //Print statements for the highest chemistry Grade
        printf("The Highest Chemistry Grade is %.2f\n", hchem);

        //Print statements for the various Grade

        // for loop for each subject starts at the respective partition of the subject array

        //for loop is limited to the amount of grades entered by subject via the counter plus array segment start

        printf("\nMath Grades = ");
        for (cnt = 0; cnt < math; cnt++) {
          printf("%.2f\t", grades[cnt]);
        }
        printf("\nEnglish Grades = ");
        for (cnt = 5; cnt < (english); cnt++) {
          printf("%.2f\t", grades[cnt]);
        }
        printf("\nBio Grades = ");
        for (cnt = 10; cnt < (bio); cnt++) {
          printf("%.2f\t", grades[cnt]);
        }
        printf("\nChem Grades = ");
        for (cnt = 15; cnt <(chem); cnt++) {
          printf("%.2f\t", grades[cnt]);
        }
        return 0;
}
