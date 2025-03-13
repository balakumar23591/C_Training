#include <stdio.h>

int main() {
  char name[20];
  int age;
  long long int mobile;
  
  printf("Enter your name: ");
  scanf("%s", name);
  
  printf("Enter your age: ");
  scanf("%d", &age);
  
  printf("Enter your mobile: ");
  scanf("%lld", &mobile);

  printf("Name: %s\n", name);
  printf("Age: %d\n", age);
  printf("Mobile: %lld\n", mobile);

  return 0;
}