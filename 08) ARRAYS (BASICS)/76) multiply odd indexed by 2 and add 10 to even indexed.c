// WAP to multiply odd indexed by 2 and add 10 to even indexed
#include<stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        if(i % 2 == 0) {
            arr[i] += 10;
        }
        else {
            arr[i] *= 2;
        }
    }
    
    printf("Modified array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
