#include <stdio.h>
// to use the float we should include the stdbool.h
#include <stdbool.h>

// so the boolean variable return integer value 0 or 1

int main(void){
  bool gender = true;
  bool is_married = false;
  int x = 10;
  int y = 9;
  printf("%d\n", x > y);

  printf("gender: %d\n", gender);
  printf("is_married: %d\n", is_married);
  return 0;
}
