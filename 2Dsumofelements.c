#include<stdio.h>
int main()
{
	int rows,cols,i,j,sum=0;
	scanf("%d%d",&rows,&cols);
	int arr[i][j];
	printf("Enter any %d elements",rows*cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",arr[i][j]);
			sum = sum+arr[i][j];
		}
		printf("\n");
	}
	printf("Sum of all the elements pf the 2D array is %d\n",sum);
	return 0;
	
}
