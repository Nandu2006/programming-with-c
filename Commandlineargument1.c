#include<stdio.h>
int main(int argc,char *argv[])
{
	
  FILE *fp1,*fp2,*fp3;
  fp1=fopen(argv[1],"r");
  fp2=fopen(argv[2],"r");
  fp3=fopen(argv[3],"w+");
  
  if(fp1==NULL || fp2==NULL || fp3==NULL)
  {
  	printf("Connection failed\n");
  	return 2;
  }
  char ch;
  while(1)
  {
  	ch=fgetc(fp1);
  	if(ch==EOF)
  	  break;
  	fputc(ch,fp3);
  }
  printf("File1 copied successfully into File3\n");
  while(1)
  {
  	ch=fgetc(fp2);
    if(ch==EOF)
	  break;
	fputc(ch,fp3);	
  }
  printf("File2 copied successfully into File3\n");
  
  
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);  
  
  return 0;
}

