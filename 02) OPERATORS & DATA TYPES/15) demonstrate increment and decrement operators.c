// WAP to demonstrate increment and decrement operators
#include<stdio.h>

int main() {
    int a = 10;
    
    printf("Initial value of a = %d\n", a);
    printf("a++ = %d\n", a++);
    printf("After a++, a = %d\n", a);
    
    printf("++a = %d\n", ++a);
    printf("After ++a, a = %d\n", a);
    
    printf("a-- = %d\n", a--);
    printf("After a--, a = %d\n", a);
    
    printf("--a = %d\n", --a);
    printf("After --a, a = %d\n", a);
    
    return 0;
}
