#include <stdio.h>

int main() {
    int n, pos, i;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input position of element to delete
    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);
    
    // Check if the position is valid
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left to delete the element
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease the size of the array
        
        // Print the resultant array
        printf("Resultant array: ");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}
