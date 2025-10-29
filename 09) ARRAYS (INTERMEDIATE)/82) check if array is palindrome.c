// WAP to check if array is palindrome
#include<stdio.h>

int main() {
    int n, i, isPalindrome = 1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n/2; i++) {
        if(arr[i] != arr[n-1-i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if(isPalindrome) {
        printf("Array is palindrome\n");
    }
    else {
        printf("Array is not palindrome\n");
    }
    
    return 0;
}
