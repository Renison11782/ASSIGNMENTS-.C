/*
name:Robinson Renison
reg:CT100/G/26162/25
des:Exam Eligibility
*/
#include <stdio.h>
int main(){
	//variable declaration
	float attendance_percentage;
	float average_marks;
	
	printf("enter the students attendance_percentage:\n");
	scanf("%f",&attendance_percentage);
	
	if(attendance_percentage>=75) {
	printf("You are eligible for the exam.");	
	}
	else{
		printf("Not eligible to do the exams.");
	}
	printf("Enter students average_marks:\n");
	scanf("%f",&average_marks);
	
	if(average_marks>=40){
		printf("You are eligible for exams.");
	}
	else{
		printf("Not eligible for exams.");
	}
	return 0;
}