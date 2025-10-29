// WAP to separate even and odd elements in array
#include<stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n], even[n], odd[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        }
        else {
            odd[oddCount++] = arr[i];
        }
    }
    
    printf("Even elements: ");
    for(i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    
    printf("\nOdd elements: ");
    for(i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    
    return 0;
}
