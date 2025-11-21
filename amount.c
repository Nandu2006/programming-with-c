#include<stdio.h>
int main()
{
	int amount,a,b,c;
	printf("amount,a,b,c");
	scanf("%d\n",&amount);
	if(amount%100==0)
	{
		a=amount/2000;
		b=(amount-a*2000)/500;
		c=(amount-a*2000-b*500)/100;
		printf("%d");
		

	}
	
}
