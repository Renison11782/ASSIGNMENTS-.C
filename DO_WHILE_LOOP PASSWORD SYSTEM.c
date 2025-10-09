/*
name:Robinson Renison
reg:CT100/G/26162/25
DES:do while_loop password system
*/
#include <stdio.h>

int main(){
	
	int password;
	int CORRECT_PASSWORD = 1234;
	
	do{
	printf("enter your password:\n");
	scanf("%d", &password);
	
	if(password != CORRECT_PASSWORD){
		printf("Incorrect password. Try again.");
	}
	}while(password !=CORRECT_PASSWORD);
	printf("Access granted");
	
	return 0;
}