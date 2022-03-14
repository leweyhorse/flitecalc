/**************************************************
* A program to calc some flight stuff for landing
* Author: Terry l. Jenkins
* Date started: 14 March 2022
**************************************************/

#include<stdio.h>

int main()
{

	printf("\n\t\t\t-This is your math helper-\n");
	printf("\n\t\t.distance\n");
	printf("\n\t\tWhat is your speed: ");

	double speed;
	double dist;
	double time;
	scanf("%lf", &speed);

	printf("\n\t\tHow many hours have you been going this speed: ");
	scanf("%lf", &time);
	dist = (speed * time);
	printf("\n\t\tDistance covered is %.2f miles.\n\n", dist);

	return 0;
}
