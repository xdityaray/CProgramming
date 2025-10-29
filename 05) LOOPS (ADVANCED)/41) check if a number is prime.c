// WAP to check if a number is prime
#include<stdio.h>

int main() {
    int n, i, isPrime = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n <= 1) {
        isPrime = 0;
    }
    else {
        for(i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    if(isPrime) {
        printf("%d is Prime\n", n);
    }
    else {
        printf("%d is not Prime\n", n);
    }
    
    return 0;
}
