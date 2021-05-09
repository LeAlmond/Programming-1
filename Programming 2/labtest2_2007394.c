// Name:      Gabriel Tickle Garcia
// ID#:       2007394
// Date:      March 29, 2021
// Tutorial:  UE3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//print constant with spacing applied
const char* bookout = "%-8d %-9s %-8c %-5c\n";

//library size constant
const int librarysize = 49;

//struct for books
typedef struct bookstrct {
        int id;
        char name[20];
        char shelf;
        char status;
} bookstrct;

int errorcheck();

int main() {

        bookstrct book[50];

        int selection, cnt = 0, loan = 0, i = 0, search, pass;

        while (selection != 4) {

                printf("1) Add a Book\n2) Loan a Book\n3) View Books in Library\n4) Exit\n");
                printf("======================================================\n");
                printf("\nPlease enter option: ");

                //runs selection int through error check

                selection = errorcheck();

                switch (selection) {
                case 1:
                        //if statement to check wether or not the library is full
                        if (cnt >= librarysize) {
                                printf("Shelves are Full\n");
                                break;
                        }

                        //accepts ID number for book through error check
                        printf("Your Book ID is.......................: ");

                        search = errorcheck();
                        i = 0;
                        //checks wether ID number is already in use
                        while (i < cnt) {
                                if (book[i].id == search) {
                                        printf("Book ID already used\n");
                                        printf("Your Book ID is.......................: ");
                                        book[i].id = errorcheck();
                                        break;
                                }
                                i++;
                        }
                        //if ID number not in use then assigns the ID number
                        book[cnt].id = search;

                        //accepts the book name
                        printf("Please enter name of book.............: ");
                        scanf("%s", book[cnt].name);

                        //accepts the book location
                        printf("Please enter location to store book...: ");
                        //int statement working as a bool to check if the location is within the range
                        pass = 0;

                        while (pass == 0) {
                          fflush(stdin);
                          scanf("%c",&book[cnt].shelf);
                          switch (book[cnt].shelf) {
                            case 'a':
                            strcpy(&book[cnt].status, "a");
                            pass = 1;
                            break;
                            case 'b':
                            strcpy(&book[cnt].status, "b");
                            pass = 1;
                            break;
                            case 'c':
                            strcpy(&book[cnt].status, "c");
                            pass = 1;
                            break;
                            case 'd':
                            strcpy(&book[cnt].status, "d");
                            pass = 1;
                            break;
                            case 'e':
                            strcpy(&book[cnt].status, "e");
                            pass = 1;
                            break;
                            default:
                              pass = 0;
                              printf("invalid\n");
                              printf("Please enter location to store book...: ");
                            break;

                          }
                        }

                        //changes the location name to upper case for readability
                        book[cnt].shelf=toupper(book[cnt].shelf);

                        //automatic assignment of "a" to the book status
                        strcpy(&book[cnt].status, "a");

                        printf("\n");
                        printf("======================================================\n");
                        cnt++;
                        break;
                case 2:
                        printf("Please Id# of book you wish to loan...: ");
                        //accepts ID number for book through error check
                        search = errorcheck();
                        i = 0;
                        //runs through the books in order to find the book with the same id as the value entered
                        while (i < cnt) {
                                if (book[i].id == search) {
                                        //checks if book was already loaned and informs the user
                                        if (book[i].status == 'L') {
                                              printf("Book %d was already loaned successfully\n", book[i].id);
                                        }
                                        else if (book[i].shelf == 'C'){
                                          printf("Book %d is not Available for loan\n", book[i].id);
                                        }
                                        else{
                                        //loans the book and informs the user
                                        strcpy(&book[i].status, "L");
                                        loan++;
                                        printf("Book %d was loaned successfully\n", book[i].id);

                                        }
                                        printf("======================================================\n");

                                        break;
                                }
                                i++;
                        }

                        break;
                case 3:
                        printf("Book ID# Book Name Location Status\n");
                        //Prints a header then loops as it runs through all the books currently in the library
                        for (i = 0; i < cnt; i++) {
                                printf(bookout,book[i].id,book[i].name,book[i].shelf,book[i].status);

                        }
                        printf("There are %d book(s) on loan\n", loan);
                        printf("======================================================\n");

                        break;
                case 4:
                        printf("Exiting Program\n");
                        printf("======================================================\n");
                        return 0;
                        break;
                }

        }


        return 0;
}

//errorcheck function to stop program from crashing when int recieves char
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
