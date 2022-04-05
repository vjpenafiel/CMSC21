#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	// initializing variables
	int numDays, numStart, d = 1, s = 1, cells = 0;

	// introductory message
	printf("1 MONTH CALENDAR GENERATOR");

	//	gets days starting day
	printf("\n\nEnter number of days in month: ");
	scanf("%d", &numDays);

	// input validation for days in a month
	if((numDays >= 28) && (numDays <= 31))
	{
		;
	}
	else
	{
		printf("Invalid input! Please enter a number from 28 and 31");
		exit(0);
	}

	//	gets days starting day
	printf("\nEnter starting day of the week (1 = Sun, 7 = Sat): ");
	scanf("%d", &numStart);

	// input validation for starting day
	if((numStart >= 1) && (numStart <= 7))
	{
		;
	}
	else
	{
		printf("Invalid input! Please enter a number from 1 to 7\n");
		exit(0);
	}

	printf("\n---------------------------\nS   M   T   W   Th  F   Sa\n---------------------------\n");

	// as long as numDays is greater than or equal to d
	for(;d <= numDays; d++)
	{
		// as long as numStart is less than or equal to s, it will iterate
		for(;s < numStart; s++)
		{
			cells++;		// add spaces to cells
			printf("    ");	// prints space
		}
		// prints day
		printf("%d", d);

		// selection statement for spacing
		if(d < 10)	// spacing for single digit days
		{
			printf("   ");
		}
		else		// spacing for double digit days
		{
			printf("  ");
		}

		cells++;	// add days to cells

		if((cells%7) == 0)
		{
			printf("\n");
		}
	}
}