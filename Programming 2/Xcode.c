#include <stdio.h>

typedef struct books {
								int id;
								char *name[50];
								char status;
								char location;
}books;

const char* bookoutput = ("%-16d%-16s%-16c%-16c\n");

void addbooks(int i);
void loanbooks(int i);
void viewbooks(int index);

struct books lib[50];

int main(){
								int i = 0, index = 0;
								int choice;

								while(choice!=5) {

																printf("-----------------\n");
																printf("Choice 1: Add a book\n");
																printf("Choice 2:Loan a Book\n");
																printf("Choice 3:Views Books in Library\n");
																printf("Choice 4:Exit\n");
																printf("-----------------\n");
																scanf("%d",&choice);

																switch(choice) {
																case 1:
																								addbooks(i);
																								index++;
																								break;
																case 2:
																								loanbooks(i);
																								index++;
																								break;
																case 3:
																								viewbooks(index);
																								break;
																case 4:
																								break;

																}
								}
								return 0;
}

void addbooks(int i){

								printf("Your book id is %d\n",i+1);
								lib[i].id=i+1;
								printf("Please enter book name:");
								scanf("%s",lib[i].name);
								fflush(stdin);
								printf("Please enter location to store book, Shelf:");
								scanf("%c",&lib[i].location);
								lib[i].status='A';
								return;
}
void loanbooks(int i){
								printf("Please Id# of book you wish to loan:");
								scanf("%d",&lib[i].id);
								if(lib[i].location=='C') {
																printf("You cant borrow books from this shelf\n");
								}
								else{
																printf("Your loan is sucessful");
								}
								lib[i].status='L';
}
void viewbooks(int index){
								int i;
								printf("-----------------\n");
								printf("Book ID#\tBook Name\tLocation\tStatus\n");
								for(i=0; i<index; i++) {
																printf(bookoutput,lib[i].id,lib[i].name,lib[i].location,lib[i].status);
								}
}
