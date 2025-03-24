// nested for loop
#include <stdio.h>

int main() {
  for (int i = 1; i <= 10; i++) { // outer loop
    
    for (int j = 1; j <= i; j++) { // inner loop
        printf("%d", j);
    }

    printf("\n");

  }
  return 0;
}