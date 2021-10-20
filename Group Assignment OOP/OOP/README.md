----

# OOP Group Work

## This OOP group project is designed to allow students to employ key OOP concepts in the 
- analysis, design, and implementation of a real-life application. Students should make use of 
	- Inheritance
	- Polymorphism
	- Dynamic-binding
	- Encapsulation
	- Data abstraction
	- Persistence through file handling
	- Defensive programing using exception handling techniques. 
- Students in each group, MUST be in the same lab class.

----

## Scenario Description

- The administration section allows for the two service providers to manage their customer base and phone credit.
- When this section is selected, the user is given the ``[Type here]`` option to select a provider and enter a password. 
	- The password for Digicel is 
		- #### TheBiggerBetterNetwork2021
	- The password for Flow is 
		- #### TheWayIFlow2021
- The Customer information is stored in separate files for each service provider (Digicel_Customers, Flow_Customers). 
- The card topup information for both companies are also stored in separate files (Digicel_CardInfomation, Flow_CardInformation). 
----
### Add Customer
- Every time a new customer is create, their balance is initialized to $100 and that record is written to the appropriate service provider’s customer file.
### View Customer Base
- Displays all the customers for the selected service provider.
### Phone Credit Creation
- Each service provide is able to create new phone card record. Each credit card has a card number (a unique 13-digit card number), denominations ($100, $200, $500 or $1000) and Status (used/available).
### View Phone Credit
- Displays all the phone credit details for the selected service provider 
### Total number of customers
- Displays the total number of customers across all service providers. This field not stored to any file. 

----

## Customer 
### Add Credit
- To add the call credit, the user dials asterisk, one, two, one, asterisk, followed by the 13-digit card number followed by another asterisk then the customers number, then lastly the number sign
	- *121*[card number]*[customer telephone number]#
	- *121*123456789012*8766031234#.
- All other formats are invalid. When credit is added, the customer’s account gets updated with the appropriate amount. The phone card record is also updated to show that the card is “Used”.
- All Digicel customer telephone numbers begin with the prefixes: 
	- 301
	- 302
	- 303
	- 304
- All Flow customer telephone numbers begin with the prefixes: 
	- 601
	- 602
	- 603
	- 604
- All other numbers should be treated as invalid. 

### Check Balance
- The customer is able to check their balance by dialing asterisk, one, two, zero, asterisk, followed by the customers number then lastly the number sign
	- *120*[customer telephone number]#
	- *120*8766031234#. 
- The system will parse the string entered, to determine which service provider’s phone credit file to check, based on the customer’s telephone prefix.

----

### Administration

- #### Digicel
	- Display company information
	- Add customer
	- View customer base
	- Create phone credit
	- View all phone credit

- #### Flow
	- Display company information

	- Add customer

	- View customer base

	- Create phone credit

	- View all phone credit

- Display total number of customers

### Customer
- Add Credit

- Check Balance

----

## Requirements

- Conduct an object-oriented analysis (noun-verb analysis or textual parse) on the above

- description of the file types processed by the system and determine what are the appropriate classes along with their respective attributes and methods. 
- Utilize polymorphism to make sure your code is generic and concise. 
- Use exception handling to make your code robust (it should not crash if invalid data is entered.