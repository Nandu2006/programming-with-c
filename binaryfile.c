#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("hub.jpg","rb");
	fp2=fopen("Copy.jpg","wb+");
	if(fp1==NULL || fp2==NULL)
	{
		printf("File Connection failed");
		return 2;
	}
	char buffer[1024];
	unsigned int bytesRead;
	while(1)
	{
		bytesRead=fread(buffer,1,sizeof(buffer),fp1);
		if(bytesRead==0)
			break;
		printf("%s",buffer);
		fwrite(buffer,1,sizeof(buffer),fp2);
	}
	printf("Image Copied successfully");
	return 0;
}
