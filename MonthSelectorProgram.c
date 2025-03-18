#include <stdio.h>

int main() {
  int months;
  
  printf("Months\n");
  printf("1. January\n");
  printf("2. February\n");
  printf("3. March\n");
  printf("4. April\n");
  printf("5. May\n");
  printf("6. June\n");
  printf("7. July\n");
  printf("8. August\n");
  printf("9. September\n");
  printf("10. October\n");
  printf("11. November\n");
  printf("12. December\n");
  
  printf("\nEnter chosen month (1-12): ");
  scanf("%d", &months);
  
switch (months){
    case 1: printf("You have selected January. ^^"); break;
    case 2: printf("You have selected February. ^^"); break;
    case 3: printf("You have selected March. ^^"); break;
    case 4: printf("You have selected April. ^^"); break;
    case 5: printf("You have selected May. ^^"); break;
    case 6: printf("You have selected June. ^^"); break;
    case 7: printf("You have selected July. ^^"); break;
    case 8: printf("You have selected August. ^^"); break;
    case 9: printf("You have selected Spetember. ^^"); break;
    case 10: printf("You have selected October. ^^"); break;
    case 11: printf("You have selected November. ^^"); break;
    case 12: printf("You have selected December. ^^"); break;
    default: printf("Invalid Input. Please try again. :<"); break;
}
  
  return 0;
}
