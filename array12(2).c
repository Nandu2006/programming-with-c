#include <stdio.h>

int main() 
{
    int n,i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for ( i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    int isStrictEvenArray = 1; 
    for ( i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) 
		{ 
            isStrictEvenArray = 0;  
            break;  
        }
    }
    if (isStrictEvenArray) {
        printf("The array is a Strict Even Array.\n");
    } else {
        printf("The array is NOT a Strict Even Array.\n");
    }

    return 0;
}
