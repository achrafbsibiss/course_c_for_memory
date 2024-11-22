#include <stdio.h>

int main(void){
  int a = 10;
  int b = 9;
  char c = 'C';
  float d = 3.3;

  printf("ASCII value of '%c' is %d\n", c, c);
  printf("a + b = %d\n", a + b);
  printf("c + a = %d\n", c + a);
  printf("d + a = %.2f\n", d + a);
  printf("a * b = %d\n", a * b);
  printf("a / b = %d\n", a / b);
  printf("a %% b = %d\n", a % b);

  printf("a++ %d\n", a++);
  printf("a-- %d\n", a--);
  printf("++a %d\n", ++a);
  printf("--a %d\n", --a);

  printf("a * c %d\n", a * c);

  return 0;
}
