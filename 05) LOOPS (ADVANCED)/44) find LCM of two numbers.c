// WAP to find LCM of two numbers
#include<stdio.h>

int main() {
    int a, b, gcd, lcm, x, y;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    x = a;
    y = b;
    
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    gcd = a;
    lcm = (x * y) / gcd;
    
    printf("LCM = %d\n", lcm);
    
    return 0;
}
