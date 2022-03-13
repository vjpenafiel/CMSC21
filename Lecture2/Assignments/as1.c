#include <stdio.h>

int main(void){

	int firstDigit, secondDigit;

	printf("Please enter a 2-digit number: ");
	scanf("%1d%1d", &firstDigit, &secondDigit);

	printf("Reverse: %1d%1d", secondDigit, firstDigit);
}