#include <stdio.h>

int main() {
  
  int x;

  printf("Enter a number: ");
  scanf("%d", &x);

  if(x == 5){
    printf("Yes X is 5\n");
  } else if(x > 5){
    printf("Yes X is greater than 5\n");
  } else{
    printf("No X is not 5\n");
  }

  switch (x)
  {
    case 1:
      printf("Monday\n");
      break;
    case 2:
      printf("Tuesday\n");
      break;
    case 3:
      printf("Wednesday\n");
      break;
    case 4:
      printf("Thursday\n");
      break;
    case 5:
      printf("Friday\n");
      break;
    case 6:
      printf("Saturday\n");
      break;
    case 7:
      printf("Sunday\n");
      break;
    default:
      printf("Invalid day\n");
      break;
  }


  return 0;
}

// x y 7

// 1 2 3 4 5 6 7