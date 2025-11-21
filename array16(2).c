#include<stdio.h>

int main() 
{
    int n, i, first;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
    // Store the first element
    first = arr[0];
    
    // Shift elements to the left
    for(i = 0; i < n - 1; i++) 
	{
        arr[i] = arr[i + 1];
    }
    
    // Place the first element at the end
    arr[n - 1] = first;
    
    // Print the rotated array
    printf("Rotated array: ");
    for(i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
