// WAP to find all pairs in array whose sum equals X
#include<stdio.h>

int main() {
    int n, i, j, x;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target sum: ");
    scanf("%d", &x);
    
    printf("Pairs with sum %d:\n", x);
    
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] + arr[j] == x) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    
    return 0;
}
