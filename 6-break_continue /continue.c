#include <stdio.h>
#include <stdbool.h>


// the Continue  is used to skip the current iteration of the loop
int main(void){
  for(int i = 0; i < 5; i++){
    // in this Condition will skip the iteration when i == 2
    if(i == 2){
      continue;
    }
    printf("%d\n", i);
  }
}