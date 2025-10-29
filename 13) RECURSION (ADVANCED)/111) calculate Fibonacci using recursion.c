// WAP to calculate Fibonacci using recursion
#include<stdio.h>

long long fibonacci(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n, i;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series: ");
    for(i = 0; i < n; i++) {
        printf("%lld ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}
