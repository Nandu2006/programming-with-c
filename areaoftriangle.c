/*#include<stdio.h>
int main()
{
	int b=10,h=2,a=0.5*b*h;
	printf("area of triangle = %d",a);
	return 0;
}*/

#include<stdio.h>
int main()
{
	int b,h;
	float area;
	printf("Enter base and height\n");
	scanf("%d%d",&b,&h);
	
	area = 1.0f/2*b*h;
	printf("Area = %.2f",area);
	return 0;
}
