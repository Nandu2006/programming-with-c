/* structure of c-program
Author : V Nanda Kailash
Program : Area of Circle
time : 3:08pm*/
#include<stdio.h>
void displayArea();
float area;
int main()
{
	float r,pi=3.142;
	displayArea();
	scanf("%d",&r);
	area=pi*r*r;
	displayArea();
	return 0;
}
void displayArea();
{
	printf("Area=%.2f",area)
}

