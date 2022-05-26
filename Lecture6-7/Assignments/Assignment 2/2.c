#include <stdio.h>
#define NUM_DESTINATION ((int)(sizeof(pathway)/sizeof(pathway[0]))) // macro for the size of the array

int main(){
	
	// initializing variables
	int located;												// indicates the index given by the user
	char point[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};	// indicates the char equivalend of the indeces
	double pathway[][8] = {										// 2D array representing the matrix
		{1, 1, 0, 0, 0, 1, 0, 0},
		{1, 1, 1, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 1, 1, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{1, 0, 1, 0, 0, 1, 0, 0},
		{1, 0, 0, 1, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 1, 0, 1}
	};

	// some labelling for the matrix
	printf("-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
	printf("     |  A  |  B  | [C] | [D] |  E  |  F  |  G  |  H  |\n");
	printf("-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");

	// loop that prints out every element of the matrix
	for (int x = 0; x < NUM_DESTINATION; x++){		// x-axis / rows
		if (x == 3 || x == 2 ){						// conditional if index is C or D, the gas station
			printf(" [%c] | ", point[x]);			// adds a square bracket if it is C or D
		}
		else{
			printf("  %c  | ", point[x]);			// prints out char normally if it isn't C or D
		}
 
		for(int y = 0; y < NUM_DESTINATION; y++){	// y-axis / columns
			printf(" %.0f  | ", pathway[x][y]);		// prints out every element
		}
		printf("\n");								// prints out new line for every row
	}

	printf("-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
 
	// prints a statement asking for the point that the user desires, and assigns it to the variable located
	printf("\n0 - A | 1 - B | 2 - C | 3 - D | 4 - E | 5 - F | 6 - G | 7 - H\nWhich point are you located at?: ");
	scanf("%d", &located);

	// prints out the char equivalent of the given index from the array point
	printf("\nAt point: %c\n", point[located]);
	
	// checks if index is at the charging station already
	if(located == 2 || located == 3){
		printf("Point: %c, is a charging station", point[located]);	// if satisfied, it tells the user that it is already one
	}

	// statement if it is not 2 or 3
	else{
		for(int i  = 0; i < NUM_DESTINATION; i++){		// loops 8 times with i initialized as 0, but increments with every iteration
			if(pathway[located][i]){					// checks if the current location is open via the index
				if(pathway[i][2]){						// checks if it is open via the index as the 1st axis and 2 as the 2nd, and sets it as location
					located = 2;
				}
				else if(pathway[i][3]){					// checks if it is open via the index as the 1st axis and 2 as the 2nd, and sets it as location
					located = 3;	
				}
			}
		}
		printf("Point: %c, arrived to charging station", point[located]);	// prints end node or charging station
	}

	return 0;
}