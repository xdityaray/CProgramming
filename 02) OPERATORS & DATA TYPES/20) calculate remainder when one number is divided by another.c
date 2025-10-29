// WAP to calculate remainder when one number is divided by another
#include<stdio.h>

int main() {
    int dividend, divisor, remainder;
    
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    
    remainder = dividend % divisor;
    
    printf("Remainder = %d\n", remainder);
    
    return 0;
}
