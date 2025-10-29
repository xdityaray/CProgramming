// WAP to print first N terms of GP
#include<stdio.h>

int main() {
    int a, r, n, i;
    long long term = 1;
    
    printf("Enter first term: ");
    scanf("%d", &a);
    
    printf("Enter common ratio: ");
    scanf("%d", &r);
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("\nGP series: ");
    term = a;
    for(i = 0; i < n; i++) {
        printf("%lld ", term);
        term = term * r;
    }
    printf("\n");
    
    return 0;
}
