#include<stdio.h>
int main()
{
int i,n,arr[n],s=0,sum=0;
printf("%d",n);
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
	printf("%d",arr[i]);
	if(arr[i]%2==0)
	{
		printf("%d is even\n",arr[i]);
		s=s+arr[i];
	}
	else
	{
		printf("%d is odd\n",arr[i]);
		sum=sum+arr[i];
	}
	printf("even sum is %d\n",s);
	printf("odd sum is %d\n",sum);
}
}
