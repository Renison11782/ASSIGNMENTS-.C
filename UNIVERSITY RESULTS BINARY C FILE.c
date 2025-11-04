/*
NAME: ROBINSON RENISON
REG: CT100/G/26162/25
DES:UNIVERSITY RESULTS BINARY C FILE
*/
#include <stdio.h>

int main()
{
	FILE *fl;
	char name[100];
	char registration_number[100];
	float total_marks;
	
	
		fl = fopen("results.dat","ab");
		if(fl == NULL){
			printf("Error opening the file!");
			return 1;
		}
		printf("Enter your name:\n");
		fgets(name,sizeof(name),stdin);
		
		fprintf(fl,"%s",name);
		fclose(fl);
		printf("Name entered successfuly\n");
		
	
	
		fl = fopen("results.dat","ab");
		if(fl == NULL){
			printf("Error opening the file!");
			return 1;
		}
		printf("Enter your registration_number:\n");
		fgets(registration_number,sizeof(registration_number),stdin);
		
		fprintf(fl,"%s",registration_number);
		fclose(fl);
		printf("Registration number entered successfuly\n");
		
		printf("YOUR total_marks are:");
		fprintf(fl,"%f", total_marks);
		
		printf("\nAll entries have been recorded at results.dat\n");
	
	return 0;
}