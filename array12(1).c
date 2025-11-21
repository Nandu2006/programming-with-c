#include <stdio.h>

int main() {
    int n,i;
    
   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    int arr[n];

   
    printf("Enter %d elements of the array: ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    int count = 0;

  
    for ( i = 1; i < n; i++) {
        if (arr[i] % i == 0) {
            count++;  
        }
    }

   
    printf("Output: %d\n", count);

    return 0;
}
