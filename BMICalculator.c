#include <stdio.h>

int main (){
    char name[50];
    int age;
    float height, weight, bmi;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter height in centemeters: ");
    scanf("%f", &height);

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    bmi = weight / (height * height);

    printf("\n-----Profile Deatils-----\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %2f meters\n", height);
    printf("Weight: %2f kilograms\n", weight);
    printf("BMI: %2f\n", bmi);

    return 0;
}
