// WAP to find sum of all elements in an array
#include<stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("Sum of array elements = %d\n", sum);
    
    return 0;
}
