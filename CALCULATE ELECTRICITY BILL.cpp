45/*
name: Robinson Renison
reg : CT100/G/26162/25
DES ; calculating electric bill
*/
#include <stdio.h>
float total_bill (int units);
int main()
{
	int  units;
	int result;
printf("CALCULATING THE ELECTRIC BILL !\n");

printf("Please enter number of units consumed :\n");
scanf("%d", &units);

result = total_bill(units);

printf("Your total_bill = Ksh %d",result);

	return 0;
}
float total_bill( int units){
	float total_bill = 0;

	if (units <=100){
		total_bill = (units * 10);
	}
	else if (units <=200){
		total_bill = (100 * 10) + (units - 100) * 15;
	}
	else {
		total_bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
	}
	return total_bill;
}