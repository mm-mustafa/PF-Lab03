#include<stdio.h>
int main()
{
	int distance, time;
	
	
	printf("Distance travelled: ");
	scanf("%d", &distance);
	printf("Time taken: ");
	scanf("%d", &time);
	
	float speed = (float) distance/time;
	
	printf("The speed of car is %.2f km/hr", speed);

	return 0;
}
	

	