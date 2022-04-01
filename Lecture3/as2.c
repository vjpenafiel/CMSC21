#include <stdio.h>

int main(void)
{
	// initializing variables
	int second, first;

	// print and scan statement for getting the two digit number
	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &second, &first);		// assigns first and second digits to 2 separate variables

	// if statement to check if second digit is not equal to 1 (numbers 10-19 require special treatement)
	if(second != 1)
	{	
		// cases for the second digit
		switch(second)
		{
			case 0: 				// case if second digit is 0
				break;
			case 2: 				// case if second digit is 2
				printf("twenty");	
				break;
			case 3: 				// case if second digit is 3
				printf("thirty");
				break;
			case 4: 				// case if second digit is 4
				printf("forty");
				break;
			case 5: 				// case if second digit is 5
				printf("fifty");
				break;
			case 6: 				// case if second digit is 6
				printf("sixty");
				break;
			case 7: 				// case if second digit is 7
				printf("seventy");
				break;
			case 8: 				// case if second digit is 8
				printf("eighty");
				break;
			case 9: 				// case if second digit is 9
				printf("ninety");
				break;
		}

		// prints a dash between 2 digits if second digit is not zero
		if(second != 0)
			printf("-");

		// cases for the first digit
		switch(first)
		{
			case 0: 				// case if first digit is 0
				break;
			case 1:					// case if first digit is 1
				printf("one");
				break;
			case 2:					// case if first digit is 2
				printf("two");
				break;
			case 3: 				// case if first digit is 3
				printf("three");
				break;
			case 4: 				// case if first digit is 4
				printf("four");
				break;
			case 5: 				// case if first digit is 5
				printf("five");
				break;
			case 6: 				// case if first digit is 6
				printf("six");
				break;
			case 7: 				// case if first digit is 7
				printf("seven");
				break;
			case 8: 				// case if first digit is 8
				printf("eight");
				break;
			case 9: 				// case if first digit is 9
				printf("nine");
				break;
		}
	}

	else
	{
		// cases for numbers 10 - 19
		switch(first)
		{
			case 0: 
				printf("ten");
				break;
			case 1:
				printf("eleven");
				break;
			case 2: 
				printf("twelve");
				break;
			case 3: 
				printf("thirteen");
				break;
			case 4: 
				printf("fourteen");
				break;
			case 5: 
				printf("fifteen");
				break;
			case 6: 
				printf("sixteen");
				break;
			case 7: 
				printf("seventeen");
				break;
			case 8: 
				printf("eighteen");
				break;
			case 9: 
				printf("nineteen");
				break;
		}
	}

}