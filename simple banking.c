#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// Function to display customers information
void DisplayInfo(){
	char Name[] = "Josephat Sangwa", Sex[] = "Male",Email[] = "sangwajozaphat@gmail.com",Address[] = "Gisenyi, Rubavu, Rwanda", Occupation[] = "Developer";
	int Age = 20;
	long long int Account_Number =  100074500205, Telephone = 790232816;
	
	// For displaying customer's information
	printf("Name: %s\nSex: %s\nAge: %d\nAccount Number: %lld\nTelephone: (+250) %lld\nEmail: %s\nAddress: %s\nOccupation: %s \n",Name,Sex,Age,Account_Number,Telephone,Email,Address,Occupation);
}
// Initial balance
float Balance = 74500.5000;
// Function for checking the balance
float CheckBalance(float amount){
	printf("________________________________________     \nThe balance is %.4fFrw     |\n________________________________________  ", amount);
}
// Variable transaction ID
int TID = 1;
// Function for withdraw
float Withdraw(float amount){
	printf("________________________________________\nYou have withdrawn %.4fFrw \n", amount);
	// for updating the balance
	Balance = Balance - amount;
	printf("Your new balance is %.4fFrw \n", Balance);
	// For displaying withdraw ID
	printf("TRANSACTION ID: 27012025WD%06d \n", TID);
	// Update ID
	TID++;
}
	
float Deposit(float amount){
	printf("________________________________________\nYou have deposited %.4fFrw \n", amount);
	// for updating the balance
	Balance += amount;
	printf("Your new balance is %.4fFrw \n", Balance);
	// For displaying Deposit ID
	printf("TRANSACTION ID: 27012025DP%06d \n", TID);
	TID++;
}
int main(){
	// Varible for program running
	bool is_running = true;
	// Message for menu
	while(is_running == true){
	printf("\n________________________________________\n          MENU\n________________________________________\nPRESS 1 TO DISPLAY CUSTOMER INFORMATION\nPRESS 2 TO CHECK THE BALANCE\nPRESS 3 TO WITHDRAW\nPRESS 4 TO DEPOSIT\nPRESS 5 TO CONTINUE\nPRESS 6 TO EXIT\n________________________________________\n");
	// Variable for user input
	int action;
	scanf("%d", &action);
	
	// Switch for checking user input
	switch(action){
		case 1:
			DisplayInfo();
		break;
		case 2:
			CheckBalance(Balance);
		break;
		case 3:
			printf("Enter amount to withdraw\n");
			float WithdrwAmount;
			scanf("%f", &WithdrwAmount);
			if(WithdrwAmount < 17470.5000 || WithdrwAmount > 72500.5000){
				printf("The amount must be between 17470.5000Frw and 72500.5000Frw");
			}
			else{
				Withdraw(WithdrwAmount);
			}
		break;
		case 4:
			printf("Enter amount to deposit \n");
			float DepAmount;
			scanf("%f", &DepAmount);
			if(DepAmount >= 1455.5000){
				Deposit(DepAmount);
			}
			else{
				printf("The amount must be greater than or equal to 1455.5000Frw");
			}
		break;
		case 5:
			printf("Do you want to countinue? [y/n] \n");
			char decision;
			scanf("%s", &decision);
			if(decision == 'y'){
				continue;
			}
			else if(decision == 'n'){
				printf("Bye, Thank you for using our system!");
				is_running = false;
				exit(EXIT_SUCCESS);
			}
			else{
				printf("Invalid Choice");
			}
		break;
		case 6:
			printf("________________________________________\nBye, Thank you for using our system!\n________________________________________");
			is_running = false;
			exit(EXIT_SUCCESS);
		break;
		default:
			printf("Invalid choice, please press in range of 1 - 6 \n");
		break;
	}
}
	
	return 0;
}

// End of the program