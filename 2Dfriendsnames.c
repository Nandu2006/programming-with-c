#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char names[n][30];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",names[i]);
	}
	printf("My friends Names are\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",names[i]);
	}
	return 0;
}
