/*#include<stdio.h>
int main()
{
	int l=20,b=25,a=l*b;
	printf("area of rectangle=%d",a);
	return 0;
}*/

#include<stdio.h>
int main()
{
	float L,B,Area;
	printf("Enter the L and B values\n");
	scanf("%f%f",&L,&B);
	printf("Length = %f\n",L);
	printf("Breadth = %f\n",B);
	printf("Area of Rectangle %.2f\n",L*B);
	return 0; 
}

