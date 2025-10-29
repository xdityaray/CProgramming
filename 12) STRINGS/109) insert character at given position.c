// WAP to insert character at given position
#include<stdio.h>

int main() {
    char str[100], ch;
    int i = 0, pos, len = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    while(str[len] != '\0') {
        len++;
    }
    
    printf("Enter character to insert: ");
    scanf("%c", &ch);
    
    printf("Enter position: ");
    scanf("%d", &pos);
    
    if(pos < 0 || pos > len) {
        printf("Invalid position\n");
        return 0;
    }
    
    for(i = len; i >= pos; i--) {
        str[i+1] = str[i];
    }
    
    str[pos] = ch;
    
    printf("String after insertion: %s\n", str);
    
    return 0;
}
