// WAP to check if three numbers can form a triangle
#include<stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a + b > c && b + c > a && a + c > b) {
        printf("Can form a triangle\n");
    }
    else {
        printf("Cannot form a triangle\n");
    }
    
    return 0;
}
