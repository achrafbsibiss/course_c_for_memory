#include <stdio.h>

int main(void){
  // this is a real life example of a variable
  int user_age = 100;
  int user_id = 1;
  char user_name[] = "achraf";
  double user_sallare = 12.88;

  printf("hello this is a real life example of a variable %d\n", user_age); 
  printf("Welcome to the user %s\n", user_name);
  printf("Your is is %d\n", user_id);
  printf("Your sallare is %.0lf\n", user_sallare);
}