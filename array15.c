#include <stdio.h>
#include <limits.h>  

void miniMaxSum(int arr[5]) {
    long long total_sum = 0;
    long long min_sum = LLONG_MAX;  
    long long max_sum = LLONG_MIN; 
    for ( i = 0; i < 5; i++) 
	{
        total_sum += arr[i];
    }

   
    for (int i = 0; i < 5; i++) {
        long long current_sum = total_sum - arr[i];  
        
        
        if (current_sum < min_sum) {
            min_sum = current_sum;
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    
    printf("%lld %lld\n", min_sum, max_sum);
}

int main() {
    int arr[5];
    
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
  
    miniMaxSum(arr);

    return 0;
}

