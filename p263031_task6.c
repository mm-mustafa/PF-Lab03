#include<stdio.h>
int main()
{
	int a, b;
	
	printf("Enter the value of a: ");
	scanf("%d", &a);

	printf("Enter the value of b: ");
	scanf("%d", &b);

	float taskA = a/b;
	float taskB = (float) a/b;
	float taskC = (float) (a/b);

	printf("The output of a/b is %.2f\n", taskA);
	printf("The output of (float) a/b is %.2f\n", taskB);
	printf("The output of (float) (a/b) is %.2f", taskC);

	/*In the 1st case [a/b], a/b is calculated; a and b are int data types, and then the answer is converted to float because we store it in a float.*/

	/*In the second case [(float) a/b], a is first changed to float, and then the division is done, and as float/int is float; that's why we get a float value, and the answer is also stored in a float.*/

	/*In the third case [(float) (a/b)], a/b is calculated first, and then the result is changed to float, so we change an int value to a float, and then store it as a float.*/ 

	/*Casting before division gives us a float in the calculation, whereas casting after division gives us an int, and then we are changing it to a float through casting.*/


	return 0;
}
 