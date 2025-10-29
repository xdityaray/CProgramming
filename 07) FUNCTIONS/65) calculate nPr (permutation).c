// WAP to calculate nPr (permutation)
#include<stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    
    printf("%dP%d = %lld\n", n, r, nPr(n, r));
    
    return 0;
}
