// WAP to create a function to find GCD
#include<stdio.h>

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));
    
    return 0;
}
