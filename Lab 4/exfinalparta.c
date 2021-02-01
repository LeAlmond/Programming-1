#include <stdio.h>
#include<string>

int main()
{
        struct names { guest_name[999];}
        int guest_number[999], length_of_stay[999], credit_card_number[999], room_number[999], room = 1, cnt = 0, total_reservations = 0, totalstay = 0;
        float cost[999], total_cost = 0,total_tax = 0, total_cost_s = 0, total_cost_n = 0, average_los, tax[999], costtax[999];
        char room_type[999];



                printf("\nEnter Guest Number ");
                scanf("%d", &guest_number[cnt]);

                while (guest_number[cnt] < -1 || guest_number[cnt] == 0) {
                        printf("Enter Guest Number ");
                        scanf("%d", &guest_number[cnt]);
                }

                while (guest_number[cnt] != -1) {

                        printf("Enter Guest Name ");
                        scanf("%s",&guest_name[cnt]);

                        printf("Enter Credit Card Number ");
                        scanf("%d",&credit_card_number[cnt]);

                        printf("Enter length of stay ");
                        scanf("%d",&length_of_stay[cnt]);

                        while (length_of_stay[cnt] < 1 or length_of_stay[cnt] > 7) {
                                printf("max length of stay is 7 days, please re-enter ");
                                scanf("%d",&length_of_stay[cnt]);
                        }

                        printf("Enter Room Type ");
                        scanf("%s",&room_type[cnt]);

                        while (room_type[cnt] != 'S' or room_type[cnt] != 'N') {
                                printf("Enter Room Type, n for non smoking s for smoking ");
                                scanf("%s",&room_type[cnt]);
                        }

                        switch(room_type[cnt]) {
                        case 's':
                                room_number[cnt] = room;
                                cost[cnt] = 4000 * length_of_stay[cnt];
                                tax[cnt] = cost[cnt] * 0.15;
                                costtax[cnt] = cost[cnt] + tax[cnt];
                                room++;
                                break;

                        case 'n':
                                room_number[cnt] = room;
                                cost[cnt] = 3000 * length_of_stay[cnt];
                                tax[cnt] = cost[cnt] * 0.15;
                                costtax[cnt] = cost[cnt] + tax[cnt];
                                room++;
                                break;

                        default:
                                printf("Invalid Input \n");
                                room_number[cnt] = room;
                                cost[cnt] = 4000 * length_of_stay[cnt];
                                tax[cnt] = cost[cnt] * 0.15;
                                costtax[cnt] = cost[cnt] + tax[cnt];
                                room++;
                                break;
                        }

                        if (cnt > 10) {
                          printf("All rooms currently reserved guest %d has been put on a waiting list\n",guest_number[cnt]);
                        }

                        printf("\nThe guest number is %d\n",guest_number[cnt]);
                        printf("The name of the guest is %c\n",guest_name[cnt]);
                        if (room_type[cnt] == 's') {
                                printf("The room is a Smoking room \nRoom Number %d\n",room_number[cnt]);
                                total_cost_s = total_cost_s + costtax[cnt];

                        }
                        else if (room_type[cnt] == 'n') {
                                printf("The room is non-Smoking \nRoom Number %d\n",room_number[cnt]);
                                total_cost_n = total_cost_n + costtax[cnt];
                        }
                        printf("The length of stay is %d day's\n",length_of_stay[cnt]);
                        printf("The sub total cost of the stay is $%.2f \n", cost[cnt]);
                        printf("Tax of the stay is $%.2f \n", tax[cnt]);
                        printf("The total cost of the stay is $%.2f \n", costtax[cnt]);

                        total_cost = total_cost + costtax[cnt];
                        total_tax = total_tax + tax[cnt];
                        totalstay = totalstay + length_of_stay[cnt];

                        total_reservations++;
                        cnt++;

                        printf("\nEnter Guest Number ");
                        scanf("%d", &guest_number[cnt]);

                        while (guest_number[cnt] < -1 || guest_number[cnt] == 0) {
                                printf("Enter Guest Number ");
                                scanf("%d", &guest_number[cnt]);
                        }

                }

                if (total_reservations > 0) {
                        average_los = totalstay / total_reservations;
                }

                printf("\nTotal number of reservations is %d\n",total_reservations );
                printf("The total cost of the all guest stay is $%.2f\n",total_cost);
                printf("The total tax of the all guest stay is $%.2f\n",total_tax);
                printf("The total cost of the all smoking guest is $%.2f\n",total_cost_s);
                printf("The total cost of the all non smoking guest is $%.2f\n",total_cost_n);
                printf("The average length of stay is %.2f days\n",average_los);

        return 0;
}
