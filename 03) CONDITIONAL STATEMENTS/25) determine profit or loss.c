// WAP to determine profit or loss
#include<stdio.h>

int main() {
    float cp, sp;
    
    printf("Enter cost price: ");
    scanf("%f", &cp);
    
    printf("Enter selling price: ");
    scanf("%f", &sp);
    
    if(sp > cp) {
        printf("Profit = %.2f\n", sp - cp);
    }
    else if(cp > sp) {
        printf("Loss = %.2f\n", cp - sp);
    }
    else {
        printf("No profit no loss\n");
    }
    
    return 0;
}
