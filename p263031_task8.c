#include<stdio.h>
int main()
{
	float num1;

	printf("Enter a Number: ");
	scanf("%f", &num1);

	int converted = num1;
	
	float difference = num1 - converted;

	printf("The Original value is %.2f", num1);
	printf("\nThe Converted value is %d\n", converted);
	printf("Difference = %.2f", difference);

	/*Casting discards the fractional part and doesn't round up the value.*/

	return 0;
}
 