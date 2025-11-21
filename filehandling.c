#include<stdio.h>
int main()
{
	int count;
	FILE *fp1;
	fp1=fopen("CricketerTeam.txt","r");
	if(fp1==NULL)
	{
		printf("FILE Connection failed\n");
		return 2;
	}
	char ch;
	while(1)
	{
		ch=fgetc(fp1);
		if(ch==EOF)
		break;
		
		printf("%c",ch);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			
		}
	}
	printf("%d ",count);
	fclose(fp1);
	return 0;
}
