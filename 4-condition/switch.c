#include <stdio.h>
#include <stdbool.h>

int main(void){
  int number = 1;
  switch (number)
  {
  case 1:
    printf("One\n");
    break;
  case 2:
    printf("Two\n");
    break;
  default:
    printf("Invalid number\n");
  }
}