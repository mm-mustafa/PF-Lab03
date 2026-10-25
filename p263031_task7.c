#include<stdio.h>
int main()
{
	int pfMarks, calculusMarks, physicsMarks;
	
	printf("Enter PF Marks: ");
	scanf("%d", &pfMarks);

	printf("Enter Calculus Marks: ");
	scanf("%d", &calculusMarks);

	printf("Enter Physics Marks: ");
	scanf("%d", &physicsMarks);

	int total = pfMarks + calculusMarks + physicsMarks;
	float average = (float) total/3;

	printf("Total = %d\n", total);
	printf("Average = %.2f\n", average);

	return 0;
}
 