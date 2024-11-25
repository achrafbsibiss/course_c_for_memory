#include <stdio.h>
#include <stdlib.h>

int main(void){
  int numbers[] = {1, 2, 30, 4, 20, 23, 100, 67, 99};
  float avr, sum = 0;
  int size = sizeof(numbers) / sizeof(numbers[0]);
  printf("The size of the array is %d\n", size);
  for(int i = 0; i < size; i++){
    sum += numbers[i];
  }
  avr = sum / size;
  printf("The average is %.2f\n", avr);

  return 0;
}