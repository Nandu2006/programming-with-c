#include<stdio.h>
int main()
{
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int M1[rows][cols],M2[rows][cols],M3[rows][cols];
	printf("Enter the %d Elements for Matrix-A\n",rows*cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&M1[rows][cols]);
		}
	}
	printf("Enter the %d Elements for Matrix-B\n",rows*cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&M2[rows][cols]);
		}
	}
}
