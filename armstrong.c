#include<stdio.h>
#include<math.h>
int findArmstrongCalculation(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=findArmstrongCalculation(n);
	if(n==res)
	printf("given number %d is Armstrong",n);	
	else
	printf("given number %d is not Armstrong",n);
	
	return 0;
	
}
int findArmstrongCalculation(int n)
{
	int digits=(int)log10(n)+1;
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(int)pow(rem,digits);
		n=n/10;
	}
	return sum;
}
