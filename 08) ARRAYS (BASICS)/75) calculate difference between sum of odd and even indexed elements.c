// WAP to calculate difference between sum of odd and even indexed elements
#include<stdio.h>

int main() {
    int n, i, oddSum = 0, evenSum = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        if(i % 2 == 0) {
            evenSum += arr[i];
        }
        else {
            oddSum += arr[i];
        }
    }
    
    printf("Difference = %d\n", evenSum - oddSum);
    
    return 0;
}
