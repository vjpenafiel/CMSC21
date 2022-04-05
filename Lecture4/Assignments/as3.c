#include <stdio.h>

int main(void)
{
	// initialize i variable as int
	int i;

	// for loop to iterate until i is less than or equal to 128
	for(i = 1; i <= 128;)
	{
		printf("%d ", i);	// print i
		i *= 2;				// multiplies i by 2 and overwrites i
	}

	return 0;
}