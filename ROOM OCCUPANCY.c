/*
name : Robinson Renison
reg : CT100/G/26162/25
DES : ROOM OCCUPANCY
*/
#include <stdio.h>

int main(){
	int occupancy[5][10];
	int floor, room ;
	int occupied, vacant;
	
	printf("Enter room occupancy(1 = occupied, 0 = vacant)\n");
	
	for(floor = 0; floor < 5; floor++){
		
		printf("\n floor %d  \n,floor +1");
		
		for(room = 0; room <10; room++){
			
			printf("Room %d:",room + 1);
			
			scanf("%d", &occupancy[room][floor]);
		}
		}
	printf("\nRoom Occupancy Summary:\n");
	printf("    \n");
	for(room = 0; room < 10; room++){
		if (occupancy [floor][room] ==1)
			
			occupied++;
		else
		{
			vacant++;
		}
	
	printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
	}
	return 0;
}