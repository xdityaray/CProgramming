// WAP to find majority element
#include<stdio.h>

int main() {
    int n, i, j, count, maxCount = 0, majority = -1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > n/2 && count > maxCount) {
            maxCount = count;
            majority = arr[i];
        }
    }
    
    if(majority != -1) {
        printf("Majority element = %d\n", majority);
    }
    else {
        printf("No majority element\n");
    }
    
    return 0;
}
