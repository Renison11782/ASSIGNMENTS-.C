/*
name : Robinson Renison
reg : CT100/G/26162/25
DES : CONVERT TO CELSIUS
*/
#include <stdio.h>

float temperature_in_celcius (float F);

int main()
{
  float fahrenheit = 0;
  float result = 0;
  
  printf("Enter the temperature_in_fahrenheit:\n");	
  scanf("%f", &fahrenheit);
  
  result = temperature_in_celcius(fahrenheit);
  
  printf("Your temperture_in_Celcius is %f",result);
	return 0;
}
float temperature_in_celcius  (float  F){
	float C = 0;
	
	C = (F - 32)  *  5/9;
	
		return C;
}