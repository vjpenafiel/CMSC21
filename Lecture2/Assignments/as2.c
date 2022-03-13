#include <stdio.h>

int main(void){

	int firstDigit, secondDigit, thirdDigit;

	printf("Please enter a 3-digit number: ");
	scanf("%1d%1d%1d", &firstDigit, &secondDigit, &thirdDigit);

	printf("Reverse: %1d%1d%1d", thirdDigit, secondDigit, firstDigit);
}