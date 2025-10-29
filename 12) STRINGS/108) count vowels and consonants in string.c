// WAP to count vowels and consonants in string
#include<stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    while(str[i] != '\0') {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
               str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || 
               str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
        i++;
    }
    
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    
    return 0;
}
