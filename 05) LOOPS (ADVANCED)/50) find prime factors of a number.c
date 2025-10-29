// WAP to find prime factors of a number
#include<stdio.h>

int main() {
    int n, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Prime factors of %d: ", n);
    
    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    printf("\n");
    
    return 0;
}
