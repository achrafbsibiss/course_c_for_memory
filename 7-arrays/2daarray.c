#include <stdio.h>
#include <stab.h>

int main(void){
  int numbers[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
  };

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }
  return 0;
}