// WAP to check if a number is Armstrong number
#include<stdio.h>

int main() {
    int n, original, remainder, result = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    original = n;
    
    while(n != 0) {
        remainder = n % 10;
        result += remainder * remainder * remainder;
        n /= 10;
    }
    
    if(result == original) {
        printf("%d is an Armstrong number\n", original);
    }
    else {
        printf("%d is not an Armstrong number\n", original);
    }
    
    return 0;
}
