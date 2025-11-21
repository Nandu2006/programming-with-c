#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double s,area;
	printf("Enter the sides of the triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Sides of triangle are:\n");
	printf("Side - 1 = %d\n",a);
	printf("Side - 2 = %d\n",b);
	printf("Side - 3 = %d\n",c);
	printf("Area of the Triangle is: %.2lf",area);
	return 0;
}
