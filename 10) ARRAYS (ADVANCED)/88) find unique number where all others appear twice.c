// WAP to find unique number where all others appear twice
#include<stdio.h>

int main() {
    int n, i, unique = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        unique ^= arr[i];  // XOR operation
    }
    
    printf("Unique element = %d\n", unique);
    
    return 0;
}
