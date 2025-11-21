//break and continue
#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	printf("Continue Demo\n");
	for(i=1;i<=n;i++)
	{
		if(i==5)
		continue;
		printf("%d ",i);
	}
	printf("Task Completed");
}
