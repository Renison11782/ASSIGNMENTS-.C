/*
name : ROBINSON RENISON
REG : CT100/G/26162/25
DES : C FILE FOR BORROWED BOOKS
*/
#include <stdio.h>
 
 int main()
 {
	 FILE *fptr;
	 char title[100];
	 char choice;
	 
	 do{
		 fptr = fopen("borrowed_books.txt","a");
		 
		 if(fptr == NULL){
			 printf("Error opening the file!\n");
			 return 1;
		 }
		 printf("Enter the title of the borrowed book:");
		 fgets(title, sizeof(title),stdin);
		 
		 fprintf(fptr,"%s",title);
		 fclose(fptr);
		 printf("book title saved successfully.\n");
		 
		 fptr = fopen("borrowed_books.txt","r");
		 
		 if(fptr == NULL){
			 printf("ERROR OPENING THE FILE !\n");
			 return 1;
		 }
		 printf("\n---List of all borrowed books ---\n");
		 
		 while(fgets(title,sizeof(title), fptr) != NULL){
			 printf("%S",title);
		 }
		 fclose(fptr);
		 
		 printf("--------------------------------------\n");
		 
		 printf("\nDo you want to enter another title ? (y/n):");
		 scanf("%c", &choice);
		 getchar();
	 }while(choice == 'y' || choice == 'Y');
	 {
	 printf("\n All entries have been saved in borrowed_books.txt\n");
		 
	 }
	 return 0;
 }