#include <stdio.h>
#include <stdbool.h>
// short if else statement (ternary operator)
// (condition) ? (true) : (false)

int main(void){
  int age = 10;

  (age > 13) ? printf("You are an adult\n") : printf("You are a minor\n");
  return 0;
}