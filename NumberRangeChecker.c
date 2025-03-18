#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number from 10 to 20: ");
    scanf("%d", &num);
    
    if (num >= 10 && num <= 20){
        printf("The number is within the range of 10 to 20.");
    } else {
        printf("The number is outside the range of 10 to 20.");
    }
    
    return 0;
}
