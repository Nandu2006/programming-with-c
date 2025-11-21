#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1=fopen("Pushpa2.txt","w+");
	
	if(fp1==NULL)
	{
		printf("FILE Connection Failed\n");
		return 2;
	}
	char ch;
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='#')
			break;
		fputc(ch,fp1);
	}
	fclose(fp1);
	return 0;
	
}
