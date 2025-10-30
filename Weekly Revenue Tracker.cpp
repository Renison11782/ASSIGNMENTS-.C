/*
name ; Robinson Renison
reg: ct100/g/26162/25
des : 1 D array WEEKLY REVENUE TRACKER
*/

#include <stdio.h>

int main(){
 float revenue [7];
 float total = 0, average;
 int i;
 
 printf("enter the revenue for each day of the week :\n");
 for(i = 0;i < 7; i++){
	 printf("Day %d:",i + 1);
	 scanf("%f", &revenue[i]);
	 total += revenue[i];
 }
 average = total / 7;
 
 printf("\n Total Weekly Revenue:%.2f\n", total);
 printf("Average Daily Revenue:%.2f\n", average);
 
 return 0;
}