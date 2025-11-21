#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char cities[n][30];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",cities[i]);
	}
	printf("The given City Names are\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",cities[i]);
	}
	return 0;
}
