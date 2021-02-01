#include <stdio.h>

int main()
{
        float total_fine, fine, max_fine, min_fine,fph = 25, mph;
        int parish_no, ticket_no = 0, totalCAF = 0, totalCBF = 0, totalCCF = 0;
        char fine_class;

        printf("Enter Ticket Number ");
        scanf("%d", &ticket_no);

        while (ticket_no != -1) {
                printf("Enter Parish Number ");
                scanf("%d",&parish_no);

                while (parish_no < 1 or parish_no > 13) {
                  printf("Enter Parish Number ");
                  scanf("%d",&parish_no);
                }

                printf("Enter MPH ");
                scanf("%f",&mph);

                while (mph < 60 or mph > 150) {
                  printf("Enter MPH ");
                  scanf("%f",&mph);
                }

                printf("Enter Fine Class ");
                scanf("%s",&fine_class);

                switch(fine_class) {
                case 'a':
                        max_fine = 3000;

                        min_fine = 1600;
                        totalCAF++;
                        break;

                case 'b':
                        max_fine = 35000;
                        min_fine = 1800;
                        totalCBF++;
                        break;
                case 'c':
                        max_fine = 3400;
                        min_fine = 1850;
                        totalCCF++;
                        break;

                default:
                        max_fine = 3200;
                        min_fine = 1865;
                        break;
                }

                fine = mph * fph;

                if (fine > max_fine) {
                        fine = max_fine;
                }
                else if (fine < min_fine) {
                        fine = min_fine;
                }

                total_fine = fine + total_fine;

                printf("The Total Fine For Ticket %d Is $%.2f\n",ticket_no, fine);

                printf("Enter Ticket Number ");
                scanf("%d", &ticket_no);

        }

        printf("The Total Fine Overall Is $%.2f\n",total_fine);
        printf("The Total Fine's In Class A is %d\n",totalCAF);
        printf("The Total Fine's In Class B is %d\n",totalCBF);
        printf("The Total Fine's In Class C is %d\n",totalCCF);


        return 0;
}
