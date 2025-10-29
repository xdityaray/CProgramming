// WAP to search for an element in array
#include<stdio.h>

int main() {
    int n, i, x, found = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &x);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("Element not found\n");
    }
    
    return 0;
}
