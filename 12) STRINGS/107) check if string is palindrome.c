// WAP to check if string is palindrome
#include<stdio.h>

int main() {
    char str[100];
    int i = 0, j, isPalindrome = 1;
    
    printf("Enter a string: ");
    gets(str);
    
    while(str[i] != '\0') {
        i++;
    }
    
    j = i - 1;
    i = 0;
    
    while(i < j) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    
    if(isPalindrome) {
        printf("String is palindrome\n");
    }
    else {
        printf("String is not palindrome\n");
    }
    
    return 0;
}
