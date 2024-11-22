#include <stdio.h>
#include <stdbool.h>

// the while loop is used to iterate over a range of values
// the syntax is while(condition){}
// condition is checked every time the loop runs
// the do while loop is used to iterate over a range of values
// the syntax is do{body}while(condition);
// condition is checked after the loop runs

int main(void){
  int i, a = 0;
  // while (i < 5){
  //   i++;
  //   printf("i: %d\n", i);
    
  // };

  do{
    printf("a: %d\n", a);
    a++;
  }while(a < 5);

  return 0;
}