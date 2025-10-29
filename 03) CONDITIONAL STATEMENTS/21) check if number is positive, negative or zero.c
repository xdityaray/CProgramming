// WAP to check if number is positive, negative or zero
#include<stdio.h>

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n > 0) {
        printf("%d is Positive\n", n);
    }
    else if(n < 0) {
        printf("%d is Negative\n", n);
    }
    else {
        printf("Number is Zero\n");
    }
    
    return 0;
}
