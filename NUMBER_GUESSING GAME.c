/*
name:Robinson Renison
reg:CT100/G/26162/25
des: number guessing game
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int secret_number;
	int guess = 0;
	int guesses_made = 0;
	srand(time(NULL));
	
	secret_number = (rand() % 20)+ 1;
	
	printf("Welcome to the number guessing game!\n");
	printf("I'm thinking of a number between 1 and 20. Try to guess it.\n");
	
	while(guess != secret_number)
	{
		printf("\n Enter your gueess:");
		
		if(scanf("%d", &guess) != 1){
			printf("Invalid input. Exiting.\n");
			return 1;
		}
		guesses_made++;
		
		if (guess > secret_number){
			printf("Too high! Try again.\n");
		}else if(guess < secret_number){
			printf("Too low! try again.\n");
		}
	}
		printf("\nCongratulations! You guessed the number %d in %d tries.\n",
		secret_number, 
		guesses_made);
	
	return 0;
	}