// WAP to convert integer division to float
#include<stdio.h>

int main() {
    int a, b;
    float result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    result = (float)a / b;  // type casting
    
    printf("Result = %.2f\n", result);
    
    return 0;
}
