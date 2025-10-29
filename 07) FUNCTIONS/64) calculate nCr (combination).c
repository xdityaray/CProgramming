// WAP to calculate nCr (combination)
#include<stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    
    printf("%dC%d = %lld\n", n, r, nCr(n, r));
    
    return 0;
}
