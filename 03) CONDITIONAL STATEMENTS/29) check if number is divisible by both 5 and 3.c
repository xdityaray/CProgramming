// WAP to check if number is divisible by both 5 and 3
#include<stdio.h>

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n % 5 == 0 && n % 3 == 0) {
        printf("%d is divisible by both 5 and 3\n", n);
    }
    else {
        printf("%d is not divisible by both\n", n);
    }
    
    return 0;
}
