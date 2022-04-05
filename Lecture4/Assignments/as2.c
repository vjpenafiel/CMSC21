#include <stdio.h>

int main(void)
{
	// initialize i
	int i = 10, j = 10, k = 10;

	// while loop
	printf("While Loop\n");
	while(i<10)
	{
		i +=1;
		printf("%d, ", i);
	}

	// for loop
	printf("\nFor Loop\n");
	for(;j<10;)
	{
		j +=1;
		printf("%d, ", j);
	}

	// do-while loop
	printf("\nDo-While Loop\n");
	do
	{
		k +=1;
		printf("%d, ", k);
	}
	while(k<10);
}