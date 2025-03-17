#include <stdio.h>

int main() {
  float math, english, filipino, mapeh, science, ap, average;

  printf("Enter Mathematics grade: ");
  scanf("%f", &math);

  printf("Enter English grade: ");
  scanf("%f", &english);

  printf("Enter Filipino grade: ");
  scanf("%f", &filipino);

  printf("Enter MAPEH grade: ");
  scanf("%f", &mapeh);

  printf("Enter Science grade: ");
  scanf("%f", &science);

  printf("Enter Araling Panlipunan grade: ");
  scanf("%f", &ap);

  average = (math + english + filipino + mapeh + science + ap) / 6;

  printf("\nThe General Weighted Average will be: %2.f\n", average);
  
  return 0;
}
