#include<stdio.h>
#include<stdlib.h>
void mergeFiles(const char *file1, const char *file2, const char *file3)
{
	FILE *f1 = fopen(file1,"r");
	FILE *f2 = fopen(file2,"r");
	FILE *f3 = fopen(file3,"w");
	
	char ch;
	if(f1 == NULL || f2 == NULL || f3 == NULL)
	{
		printf("Error opening files.\n");
		exit(1);
		
	}
	while((ch = fgetc(f1))!= EOF)
	{
		fputc(ch,f3);
	}
	printf("Files merged successfully into '%s'\n",file3);
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
}
int main()
{
	char file1[100], file2[100], file3[100];
    
    printf("Enter name of first input file: ");
    scanf("%s", file1);
    
    printf("Enter name of second input file: ");
    scanf("%s", file2);
    
    printf("Enter name of output file: ");
    scanf("%s", file3);
    
    mergeFiles(file1, file2, file3);
    
    return 0;
}

