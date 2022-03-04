/****************************************
* CMSC 21-1: Reading Assingment 1 - ex3 *
* Student: Victor Antonino J. Peñafiel  *
****************************************/

/* Adds two fractions */

//preprocessor directive
#include <stdio.h>

//main function
int main(void)
{	
	//declaring variables as integers
	int num1, denom1, num2, denom2, result_num, result_denom;

	//user's input for first fraction
	printf("Enter first fraction: "); 	//statement asking for first fraction
	scanf("%d/%d", &num1, &denom1);		//assign collected values to their respective variables

	//user's input for second fraction
	printf("Enter second fraction: ");	//statement asking for first fraction
	scanf("%d/%d", &num2, &denom2);		//assign collected values to their respective variables

	//calculate for the resulting numerator and denominator
	result_num = num1 * denom2 + num2 * denom1;		//cross multiply the fractions and add results
	result_denom = denom1 * denom2;					//multiply the denominators to each other

	//print resulting fraction by inserting numerator and denominator into string
	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}