#include<stdio.h>
int main()
{
	int totalPennies = 368;
	int quarter, dime, nickel, penny;
	int remaining; 
	
	printf("Total Pennies = %d\n", totalPennies);

	quarter = 368/25;
	remaining = 368%25; 

	dime = remaining/10;
	remaining = 368%10; 

	nickel = remaining/5;
	remaining = 368%5; 

	penny = remaining;

	printf("Ali will carry:\n%d quarters \n%d dimes \n%d nickels \n%d pennies", quarter, dime, nickel, penny);

	return 0;
}
