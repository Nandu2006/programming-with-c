#include<stdio.h>
int main()
{
	int n,i,j=1,k;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int temp[n];
	temp[0]=arr[0];
	for(i=0;i<n;i++)
	{
		int available=0;
		for(i=0;k<j;k++)
		{
			if(arr[i]==temp[k])
			{
				available=1;
				break;
			}
		}
		if(available==0)
		{
			temp[j]=arr[i];
			j++;
		}
	}
	printf("Elements in the given array\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\nRemoving the duplicate values");
	for(i=0;i<j;i++)
	{
	   printf("%d",temp[i]);	
	}
	return 0;
}
