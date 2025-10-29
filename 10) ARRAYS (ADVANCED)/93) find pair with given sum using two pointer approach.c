// WAP to find pair with given sum using two pointer approach
#include<stdio.h>

int main() {
    int n, i, j, x, found = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target sum: ");
    scanf("%d", &x);
    
    i = 0;
    j = n - 1;
    
    while(i < j) {
        if(arr[i] + arr[j] == x) {
            printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
            found = 1;
            break;
        }
        else if(arr[i] + arr[j] < x) {
            i++;
        }
        else {
            j--;
        }
    }
    
    if(!found) {
        printf("No pair found\n");
    }
    
    return 0;
}
