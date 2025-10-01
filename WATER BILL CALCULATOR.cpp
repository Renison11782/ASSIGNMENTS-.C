/*
name;Robinson Renison
reg:CT100/G/26162/25
date:30/9/2025
des:water bill calculator
units between 0 and 30: 20 KES per unit
units between 31 and 60: 25 KESper unit 
units above 60 : 30 KES per unit
*/
#include <stdio.h>

int main()
{

	int units;
	float bill;
	
	
	printf("enter number of water units consumed:");
	scanf("%d",&units);
	
if(units<=30)
{
	bill= units * 20;
}else if(units<=60)
{
	bill= units * 25;
}else
{
	bill= units * 30;
}
 printf("your total water bill is = %.2f",bill);
	
	return 0;
}