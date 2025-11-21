#include<stdio.h>
int main()
{
	int rows,cols,i,j;
	scanf("%d%d",&cols,&rows);
	int arr[rows][cols];
	printf("Enter %d elements\n",rows*cols);
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
		}
		printf("\n");
	}
	return 0;
}
