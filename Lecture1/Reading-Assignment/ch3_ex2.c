/****************************************
* CMSC 21-1: Reading Assingment 1 - ex2 *
* Student: Victor Antonino J. Peñafiel  *
****************************************/

/* Prints int and float values in various formats*/

//preprocessor directive
#include <stdio.h>

//main function
int main(void)
{
	int i;		//declaring variable i as an integer
	float x;	//declaring variable x as a float

	//assigning values to variables
	i = 40;
	x = 839.21f;

	//printing the variables in different formats using conversion specifications
	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);	//print i in different formats
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);		//print x in different formats

	return 0;
}