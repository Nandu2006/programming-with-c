/*#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i] == 33)
		{
			printf("It is found in an array\n");
		}
		else
		{
			printf("It is not found in an array\n");
		}
	}
	return 0;
	
}*/
#include<stdio.h>
int main()
{
	int i,key,n,found=0,pos=0;
	printf("Enter the Size of the Array\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("Enter the key Element to search in the given array");
		scanf("%d",&key);
		
		for(i=0;i<n;i++)
		{
			if(key == arr[i])
			{
				found=1;
				pos=1;
				break;
			}
		
		}
		if(found==1)
		{
			printf("%d is found at %d index in the given array",key,pos);
		}
		else
		{
			printf("%d is not found in the given array",key);
		}
	}
	
}
