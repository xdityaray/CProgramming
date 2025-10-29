// WAP to create a function to calculate factorial
#include<stdio.h>

long long factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    
    long long fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Factorial of %d = %lld\n", n, factorial(n));
    
    return 0;
}
