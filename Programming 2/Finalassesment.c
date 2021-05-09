
// Name:      Gabriel Tickle Garcia
// ID#:       2007394
// Date:      March 29, 2021
// Tutorial:  UE3

#include <stdio.h>
#include <stdlib.h>

// constant to define which variable types and the spacing for output to file
#define OUTPUT "%-10s%-10s%-15s%-15d%-15s$%-15.2f%-15s$%-15.2f%-15s$%-15.2f%-15s$%-15.2f\n"


#define MAX_RECORDS 5

//Customer Structure
typedef struct Customer {

        char name[60];
        int acc_no;
        float s_Balances;//starting baLance
        float deposit;
        float withdraw;
        float cbalance;// closing balance
}Cust;

// prototype for coLduating dosing &dance for Customers
float closingBalance( Cust x[]);

// prototype for writing records to sequential fiLe

void writeF(Cust c1[]);

int main()
{
        Cust c1[5];

        for (int i = 0; i < MAX_RECORDS; i++) {
                printf("%-20s","Name: ");
                scanf("%s", c1[i].name);

                printf("%-20s","Account number: ");
                scanf("%d", &c1[i].acc_no);

                printf("%-20s","Starting Balance: ");
                scanf("%f", &c1[i].s_Balances);

                printf("%-20s","Amount to deposit: ");
                scanf("%f", &c1[i].deposit);

                printf("%-20s","Amount to withdraw: ");
                scanf("%f", &c1[i].withdraw);

                while(c1[i].withdraw > (c1[i].s_Balances + c1[i].deposit)) {
                        printf("Amount exceeds limit. Try Again\n");
                        scanf("%f", &c1[i].withdraw);
                }


                printf("calculating closing balance for customer %d.\n", i+1);
                closingBalance(c1+i);
        }

        writeF(c1);

        return 0;
}

float closingBalance( Cust x[]){

// Closing balance calculations
        x[0].cbalance = x[0].s_Balances + x[0].deposit - x[0].withdraw;

// statement to show that current user and their closing balance
        printf("%d  Account Balance is: $%.2f\n",x[0].acc_no, x[0].cbalance);

        return x[0].cbalance;

}

void writeF(Cust c1[]) {

        FILE *records;

        // sOpens record to be written to
        records = fopen ("./customer.txt", "w");

        for (int i = 0; i < MAX_RECORDS; i++) {

                fprintf(records,OUTPUT,"Name: ",c1[i].name,"Account number: ",c1[i].acc_no,"Starting Balance: ",c1[i].s_Balances,"Closing Balance: ",c1[i].cbalance,"Amount Deposited: ",c1[i].deposit,"Amount Withdrawn: ",c1[i].withdraw);

        }

}
