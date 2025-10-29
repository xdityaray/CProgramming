// WAP to print first N terms of AP
#include<stdio.h>

int main() {
    int a, d, n, i, term;
    
    printf("Enter first term: ");
    scanf("%d", &a);
    
    printf("Enter common difference: ");
    scanf("%d", &d);
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("\nAP series: ");
    for(i = 0; i < n; i++) {
        term = a + i * d;
        printf("%d ", term);
    }
    printf("\n");
    
    return 0;
}
