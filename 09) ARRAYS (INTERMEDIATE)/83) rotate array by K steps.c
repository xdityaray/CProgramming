// WAP to rotate array by K steps
#include<stdio.h>

int main() {
    int n, i, k, temp;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter K (steps to rotate): ");
    scanf("%d", &k);
    
    k = k % n;
    
    // rotate k times
    while(k > 0) {
        temp = arr[n-1];
        for(i = n-1; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
        k--;
    }
    
    printf("Rotated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
