// WAP to check if a number is palindrome
#include<stdio.h>

int main() {
    int n, original, reverse = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    original = n;
    
    while(n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    
    if(original == reverse) {
        printf("%d is a Palindrome\n", original);
    }
    else {
        printf("%d is not a Palindrome\n", original);
    }
    
    return 0;
}
