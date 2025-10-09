/*
name:Robinson Renison
reg:CT100/G/26162/25
DES:while_loop bank withdrawal system
*/
#include <stdio.h>

int main(){
	float balance =  10000;
	float withdrawal_amount;
	
	printf("WELCOME TO THE BANK ATM\n");
	printf("Initial balance: %.2f\n",balance);
	
	while(balance  > 0){
		printf("Current balance: %2f\n:");
		printf("enter withdrawal_amount:\n");
		
		if(scanf("%f", &withdrawal_amount) != 1){
			printf("Invalid input. exiting.\n");
			break;
		}
		
		if(withdrawal_amount <= 0){
			printf("Thank you for using the ATM. Final balance:%.2f\n", balance);
			break;
		}
		if(withdrawal_amount <= balance){
			balance = balance - withdrawal_amount	;
			printf("Withdrawal successful. New balance: %.2f\n", balance);	
			
		}else{
			printf("Insufficient Funds. you cannot withdraw %.2f\n", withdrawal_amount);
		}
		if(balance <= 0){
			printf("Account empty \n");
			printf("Your balance is %.2f. No further withdrawals allowed.\n", balance);
		}
	}
	
	return 0;
}