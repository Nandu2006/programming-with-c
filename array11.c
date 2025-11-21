#include<stdio.h>
int main()
{
	int count=0,i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		if(arr[i]%10==i)
		{
			scanf("%d",&count);
			count++;
		}
	}
	return 0;
}
