// WAP to convert lowercase to uppercase using ASCII
#include<stdio.h>

int main() {
    char lower, upper;
    
    printf("Enter a lowercase character: ");
    scanf("%c", &lower);
    
    upper = lower - 32;  // difference between lowercase and uppercase
    
    printf("Uppercase character = %c\n", upper);
    
    return 0;
}
