#include <stdio.h>
#include <stdlib.h>

int main(void){
  int numbers[] = {1, 2, 3, 4, 5};
  numbers[0]=100;
  printf("%d\n", numbers[0]);

  for(int i = 0; i < 5; i++){
    printf("%d\n", numbers[i]);
  }
  return 0;
}