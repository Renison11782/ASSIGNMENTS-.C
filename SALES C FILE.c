/*
NAME: ROBINSON RENISON
REG: CT100/G/26162/25
DES:SALES C  FILE
*/
#include <stdio.h>

int main()
{
	FILE *fp;
	char filename[] = "sales.txt";
	double transaction_amount;
	double total_sales = 0.0;
	int i,n;
	
	fp = fopen(filename,"a");
	if(fp == NULL){
		printf("ERROR OPENNING THE FILE!");
		return 1;
	}
	printf("Enter number of transactions;\n");
	scanf("%d",&n);
	
	printf("Enter the transactional amount for the transaction:\n");
	
	for (i =1; i <= n; i++){
		printf("Transaction %d:",i);
		scanf("%lf",&transaction_amount);
		fprintf(fp, "%.2f\n",transaction_amount);
	}
	fclose(fp);
	
	fp = fopen(filename,"r");
	if(fp == NULL){
		printf("ERROR OPENNING THE FILE!");
		return 1;
	}
	while(fscanf(fp, "%lf",&transaction_amount) == 1)
	{
		total_sales += transaction_amount;
	}
	fclose(fp);
	
	printf("------ Daily Sales Report:------\n");
	
	printf("SUCCESSFULY READ ALL TRANSACTIONS FROM: %s\n",filename);
	
	printf("The total sales for the day is: Ksh%.2f\n", total_sales);
	
	return 0;

}
