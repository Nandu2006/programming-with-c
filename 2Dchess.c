#include<stdio.h>
int main()
{
	int chess[8][8];
    int i,j;
    for(i=0;i<8;i++)
    {
    	for(j=0;j<8;j++)
    	{
    		if((i+j)%2==0)
    		{
    			printf("B|");
			}
			else
			{
				printf("W|");
			}
		}
		printf("\n");
	}
	return 0;
}
