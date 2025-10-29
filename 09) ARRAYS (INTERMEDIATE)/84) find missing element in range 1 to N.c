// WAP to find missing element in range 1 to N
#include<stdio.h>

int main() {
    int n, i, sum = 0, totalSum;
    
    printf("Enter N: ");
    scanf("%d", &n);
    
    int arr[n-1];
    
    printf("Enter %d elements: ", n-1);
    for(i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    totalSum = (n * (n + 1)) / 2;
    
    printf("Missing element = %d\n", totalSum - sum);
    
    return 0;
}
