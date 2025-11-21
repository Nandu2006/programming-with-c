#include<stdio.h>
int main()
{
	int stu_marks[3][5]={
		                {50,68,78,89,90},
					    {67,98,48,78,96},
					    {57,56,64,39,87},
						};
int i,j;
for(i=0;i<3;i++)
{
	for(j=0;j<5;j++)
	{
		printf("stu_marks[%d][%d]=%d",i,j,stu_marks[i][j]);
	}
	printf("\n");
}
return 0;
}
