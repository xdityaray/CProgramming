// WAP to find all triplets whose sum equals X
#include<stdio.h>

int main() {
    int n, i, j, k, x;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target sum: ");
    scanf("%d", &x);
    
    printf("Triplets with sum %d:\n", x);
    
    for(i = 0; i < n-2; i++) {
        for(j = i+1; j < n-1; j++) {
            for(k = j+1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == x) {
                    printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    
    return 0;
}
