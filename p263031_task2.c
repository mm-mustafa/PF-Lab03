#include<stdio.h>
int main()
{
	int num1, num2;
	
	printf("Enter 1st Number: ");
	scanf("%d", &num1);
	printf("Enter 2nd Number: ");
	scanf("%d", &num2);
	
	int a = num1;
	num1 = num2;
	num2 = a;
	
	printf("The new value of num1 is %d \nand the new value of num2 is %d", num1, num2);

	return 0;
}
