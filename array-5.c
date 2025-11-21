/*#include<stdio.h>
int main()
{
	int arr[5];
	printf("%d bytes\n",sizeof(arr));
	long long x[10];
	printf("%d bytes\n",sizeof(x));
	char ch[124];
	printf("%d bytes\n",sizeof(ch));
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	long long arr[5];
	printf("%d %d %d",&arr[0],&arr[1],&arr[2]);
}*/
#include<stdio.h>
int main()
{
	int arr[5] = (10, 20, 30, 40, 50);
	printf("%d",arr[0]);
	return 0;
}
