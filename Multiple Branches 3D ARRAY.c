/*
NAME :ROBINSON RENISON
REG : CT100/G/26162/25 
DES : MULTIPLE BRANCHES 3 D ARRAY
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10

int main(){
	srand(time(NULL));
	int chain[BRANCHES][FLOORS][ROOMS];
	int total_occupied_rooms = 0;
	int b, f, r;
	
	printf("Hotel Chain Occupancy Simulation\n");
	printf("--------------------------------\n");
	
	for(b =0; b < BRANCHES; b++){
	  for(f = 0; f < FLOORS; f++){
		for(r = 0; r < ROOMS; r++){
			chain[b][f][r] = rand() % 2;
			total_occupied_rooms += chain[b][f][r];
			
			printf("Branch %d, Floor %d, Room %d: Occupancy = %d\n", b +1, f + 1, r + 1, chain[b][f][r]);
			}
		}
	}
	
	printf("\nCalculation Complete.\n");
	printf("Total number of branches: %d\n", BRANCHES);
	printf("Total number of floors per branch: %d\n", FLOORS);
    printf("Total number of rooms per floor %d\n", ROOMS);
	printf("Total capacity: %i rooms BRANCHES * FLOORS * ROOMS\n",BRANCHES * FLOORS * ROOMS);
	printf("\  n> Total number of occupied rooms across all branches: %d\n", total_occupied_rooms);
	
	return 0;
}