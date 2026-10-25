#include<stdio.h>
int main()
{
	int salary, taxRate;
	
	printf("Enter Salary: PKR. ");
	scanf("%d", &salary);
	printf("Enter Tax Rate in %%: ");
	scanf("%d", &taxRate);
	
	float payableTax = (float) salary * taxRate/100;
	float remainingSalary = salary - payableTax;

	printf("The Payable Tax is  %.2f \nand the Remaining Salary after Tax is %.2f", payableTax, remainingSalary);
		
	return 0;
}
