// WAP to find GCD of two numbers
#include<stdio.h>

int main() {
    int a, b, gcd;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    gcd = a;
    printf("GCD = %d\n", gcd);
    
    return 0;
}
