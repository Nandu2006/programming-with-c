#include<stdio.h>
int main()
{
	int arr[10],i,n,pos,ele;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		printf("Enter the position of an element to insert\n");
		scanf("%d",&pos);
		printf("Enter the element to insert\n");
		scanf("%d",&ele);
		printf("Before element insertion in an array\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		printf("\n");
	for(i=n;i>pos-1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=ele;
	n++;
	printf("After New element insertion in an array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
