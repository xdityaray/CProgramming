// WAP to find second largest element in array
#include<stdio.h>

int main() {
    int n, i, max, secondMax;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    max = secondMax = arr[0];
    
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    
    printf("Second largest element = %d\n", secondMax);
    
    return 0;
}
