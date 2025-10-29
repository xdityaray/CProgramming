// WAP to generate Fibonacci series up to N terms
#include<stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series: ");
    
    for(i = 0; i < n; i++) {
        if(i == 0) {
            printf("%lld ", a);
        }
        else if(i == 1) {
            printf("%lld ", b);
        }
        else {
            next = a + b;
            printf("%lld ", next);
            a = b;
            b = next;
        }
    }
    printf("\n");
    
    return 0;
}
