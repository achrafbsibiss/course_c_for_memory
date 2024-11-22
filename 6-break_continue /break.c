#include <stdio.h>
#include <stdbool.h>


// the break is used to terminate the loop
// when the condition is met
// it will skip all the remaining iterations
// and the loop will end

int main(void){
  for(int i = 0; i < 5; i++){
    if(i == 2){
      break;
    }
    printf("%d\n", i);
  }
  return 0;
}