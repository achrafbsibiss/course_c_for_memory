#include <stdio.h>

int main(void){

  //-----------------------------------------------
  //this tutorial will be about format specifier
  //-----------------------------------------------

  // this type of variable can store a integer number
  int age = 100;
  // this type of variable can store a integer number
  float height = 1.85;
  // this type of variable can store a string of characters
  char first_letter = 'A';
  // this type of variable can store a string of characters
  char name[] = "achraf";

  // %d is a format specifier for integer numbers
  printf("hello this is a format specifier %d\n", age);
  // %f is a format specifier for floating point numbers
  printf("hello this is a format specifier %f\n", height);
  // %c is a format specifier for characters
  printf("hello this is a format specifier %c\n", first_letter);
  // %s is a format specifier for strings
  printf("hello this is a format specifier %s\n", name);
}