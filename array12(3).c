/*#include <stdio.h>

int main() 
{
    int num, temp, count = 0,i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) 
	{
        count++;
        temp /= 10;  
    }
    int digits[count];
    temp = num;
    for (i = 0; i < count; i++) 
	{
        digits[i] = temp % 10;  
        temp /= 10; 
    }
    int reversedNum = 0;
    for ( i = 0; i < count; i++) 
	{
        reversedNum = reversedNum * 10 + digits[i];
    }
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}*/
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before applying Reverse Operation\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		int temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	printf("After applying Reverse Operation\n");
	for(i=0;i<n/2;i++)
	{
		printf("%d ",arr[n-i-1]);
	}
	return 0;
}
