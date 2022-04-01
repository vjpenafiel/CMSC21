#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	// initializing variables
	int age;
	bool teenager = false;

	// gets age
	printf("Please enter your age: ");
	scanf("%d", &age);

	//condition to check if age is teen
	if(age >= 13 && age <=19)
	{
		teenager = true;
	}
	
	//prints 0 or 1 as boolean variable
	printf("%d", teenager);
}