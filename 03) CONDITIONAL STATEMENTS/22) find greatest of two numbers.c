// WAP to find greatest of two numbers
#include<stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    if(a > b) {
        printf("%d is greater\n", a);
    }
    else {
        printf("%d is greater\n", b);
    }
    
    return 0;
}
