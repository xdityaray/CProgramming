// WAP to copy array elements to another in reverse order
#include<stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n], copy[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        copy[i] = arr[n-1-i];
    }
    
    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nReversed copy: ");
    for(i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");
    
    return 0;
}
