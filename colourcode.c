#include<stdio.h>
int main()
{
	char x,v,i,b,g,y,o,r;
	printf("Enter colour code\n");
	scanf("%c",&x);
	if(x=='v')
	{
		printf("violet");
	}
	else if(x=='i')
	{
		printf("indigo");
	}
	else if(x=='b')
	{
		printf("blue");
	}
	else if(x=='g')
	{
		printf("green");
	}
	else if(x=='y')
	{
		printf("yellow");
	}
	else if(x=='o')
	{
		printf("orange");
	}
	else if(x=='r')
	{
		printf("red");
	}
	else
	{
		printf("code is invalid");
	}
	return 0;
	
}
