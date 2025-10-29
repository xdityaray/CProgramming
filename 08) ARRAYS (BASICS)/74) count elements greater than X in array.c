// WAP to count elements greater than X in array
#include<stdio.h>

int main() {
    int n, i, x, count = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value of X: ");
    scanf("%d", &x);
    
    for(i = 0; i < n; i++) {
        if(arr[i] > x) {
            count++;
        }
    }
    
    printf("Count of elements greater than %d = %d\n", x, count);
    
    return 0;
}
