// WAP to print star diamond
#include<stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter number of rows (odd): ");
    scanf("%d", &n);
    
    // upper half
    for(i = 1; i <= n/2+1; i++) {
        for(j = 1; j <= n/2+1-i; j++) printf(" ");
        for(j = 1; j <= 2*i-1; j++) printf("*");
        printf("\n");
    }
    
    // lower half
    for(i = n/2; i >= 1; i--) {
        for(j = 1; j <= n/2+1-i; j++) printf(" ");
        for(j = 1; j <= 2*i-1; j++) printf("*");
        printf("\n");
    }
    
    return 0;
}
