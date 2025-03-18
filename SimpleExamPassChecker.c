#include <stdio.h>

int main() {
    int math, science;
    
    printf("Enter grade in Mathematics: ");
    scanf("%d", &math);
    
    printf("Enter grade in Science: ");
    scanf("%d", &science);
    
if (math >= 50 || science >= 50){
    printf("You passed the exam. ^^");
} else {
    printf("You failed the exam. :<");
}
    
    return 0;
}
