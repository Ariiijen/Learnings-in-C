#include <stdio.h>

int main() {
  float s1, s2, s3, average;

printf("Enter first exam score (0-100): ");
scanf("%f", &s1);

printf("Enter second exam score (0-100): ");
scanf("%f", &s2);

printf("Enter third exam score (0-100): ");
scanf("%f", &s3);

average = (s1 + s2 + s3) / 3;

printf("Total Aveage score: %2.f\n", average);

if (average >= 90) {
  printf("Grade: A\n");
} else if (average >= 80) {
  printf("Grade: B\n");
} else if (average >= 70){
  printf("Grade: C\n");
} else if (average >= 60){
  printf("Grade: D\n");
} else {
  printf("Grade: F\n");
}

if (s1 >= 85 && s2 >= 85 && s3 >= 85) {
  printf("Distinction: Yes\n");
} else {
  printf("Distinction: No\n");
}
  
  return 0;
}
