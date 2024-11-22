#include <stdio.h>

int main(void){
  // this is a tutorial about the memory size of a variable
  int age = 0;
  float height = 1.85;
  double weight = 70.5;
  char first_letter = 'A';

  printf("the size of int is %zu bytes\n", sizeof(age));
  printf("the size of float is %zu bytes\n", sizeof(height));
  printf("the size of double is %zu bytes\n", sizeof(weight));
  printf("the size of char is %zu bytes\n", sizeof(first_letter));
}