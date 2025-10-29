// WAP to perform arithmetic operations on two numbers
#include<stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\nAddition: %d + %d = %d\n", a, b, a+b);
    printf("Subtraction: %d - %d = %d\n", a, b, a-b);
    printf("Multiplication: %d * %d = %d\n", a, b, a*b);
    printf("Division: %d / %d = %d\n", a, b, a/b);
    printf("Modulus: %d %% %d = %d\n", a, b, a%b);
    
    return 0;
}
