/*
name : Robinson Renison
reg : CT100/G/26162/25
DES: CALCULATE FARE
*/
#include <stdio.h>

int total_fare(int distance_travelled);

int main(int argc, char** argv)
{
	int result;
	int distance_travelled;
	
	printf("Enter your distance_travelled in Km:\n");
	scanf("%d",&distance_travelled );
	
	result = total_fare(distance_travelled);
	
	printf("Your total_fare is Ksh%d", result);
	
	return 0;
}
int total_fare(int distance_travelled){
	int total_fare = 0;
	
	total_fare = distance_travelled * 50;
	
	return total_fare;
}
