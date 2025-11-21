#include<stdio.h>
int main()
{
	float f;
	printf("enter temperature in fahrenheit");
	scanf("%f",&f);
	printf("temperature in Celsius scale is %f",(f-32)*9/5);
	return 0;
}
