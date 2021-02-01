#include <stdio.h>

int main()
{
        int guest_number[10], length_of_stay[10], credit_card_number[10], room_number[10], room = 1, room_type[10], cnt = 0, total_reservations = 0, totalstay = 0,password;
        float cost[10], total_cost = 0,total_tax = 0, total_cost_s = 0, total_cost_n = 0, average_los, tax[10], costtax[10];
        char guest_name[10];

        do {
                printf("please enter pin ");
                scanf("%d", &password);
                cnt++;
        } while(password != 1234 and cnt < 3);

        if (password == 1234) {

                cnt = 0;

                printf("\nEnter Guest Number ");
                scanf("%d", &guest_number[cnt]);

                while (guest_number[cnt] < -1 || guest_number[cnt] == 0) {
                        printf("Enter Guest Number ");
                        scanf("%d", &guest_number[cnt]);
                }

                while (guest_number[cnt] != -1 and cnt < 10) {

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
                        scanf("%d",&room_type[cnt]);

                        while (room_type[cnt] > 1 or room_type[cnt] < 0) {
                                printf("Enter Room Type, 0 for non smoking 1 for smoking ");
                                scanf("%d",&room_type[cnt]);
                        }

                        switch(room_type[cnt]) {
                        case 1:
                                room_number[cnt] = room;
                                cost[cnt] = 4000 * length_of_stay[cnt];
                                tax[cnt] = cost[cnt] * 0.15;
                                costtax[cnt] = cost[cnt] + tax[cnt];
                                room++;
                                break;

                        case 0:
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

                        total_reservations++;

                        printf("\nEnter Guess Number ");
                        scanf("%d", &guest_number[cnt]);

                        while (guest_number[cnt] < -1 || guest_number[cnt] == 0) {
                                printf("Enter Guest Number ");
                                scanf("%d", &guest_number[cnt]);
                        }

                        cnt++;

                }

                cnt--;

                while (cnt != -1) {

                        printf("\nThe guest number is %d\n",guest_number[cnt]);
                        printf("The name of the guest is %c\n",guest_name[cnt]);
                        if (room_type[cnt] == 1) {
                                printf("The room is a Smoking room \nRoom Number %d\n",room_number[cnt]);
                                total_cost_s = total_cost_s + costtax[cnt];

                        }
                        else if (room_type[cnt] == 0) {
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

                        cnt--;

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
        }

        else {
                printf("too many failed attempts\n");
        }


        return 0;
}
