#include <stdio.h>
#include <stdbool.h>

int main(void){
  int age = 18;
  if (age > 13){
    printf("You are an adult\n");
  }else if (age < 10){
    printf("You are a teenager\n");
  }else{
    printf("You are a minor\n");
  }
  return 0;
}