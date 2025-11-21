#include<stdio.h>
int main()
{
	int i,n,min,max;
	printf("Enter the size of an array");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
		min=arr[i];
	}

		
	}
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("Minimum Element in the array is: %d\n",min);
	printf("Maximum Element in the array is: %d\n",max);
	return 0;
}
