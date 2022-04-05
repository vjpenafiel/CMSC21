#include <stdio.h>

int main(void)
{
	// initialize i variable as int
	int n = 0, usersLimit, toN = 1;

	// code introductory message
	printf("TABLE OF POWERS OF TWO\n\n");

	// gets user's desired exponent for 2
	printf("Enter your desired exponent for 2: ");
	scanf("%d", &usersLimit);


	// column headings
	printf("\n n         2 to the n\n");
	printf("---      ---------------");

	//while loop until n reaches user's input/limit
	while(n <= usersLimit)
	{
		printf("\n %d             %d", n, toN);  // prints out n and 2 to the power of n
		toN *= 2;  								 // multiplies power of n variable by 2 and overwites the variable
		n++;									 // increments n by 1 for every iteration
	}
}