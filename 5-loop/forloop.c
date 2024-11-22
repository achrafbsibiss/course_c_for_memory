#include <stdio.h>
#include <stdbool.h>

// the for loop is used to iterate over a range of values
// the syntax is for(initialization; condition; increment/decrement){}
// initialization is executed only once
// condition is checked every time the loop runs
// increment/decrement is executed every time the loop runs
int main(void){
  for(int i = 0 ; i < 5 ; i++){
    printf("i: %d\n", i);
  }
  return 0;
}