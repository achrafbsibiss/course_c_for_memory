#include <stdio.h>
#include <stdlib.h>

int main(void){
  // the size of the array is the number of bytes in the array
  // the size of every element it 4bytes
    int numbers[] = {1, 2, 3, 4, 5};
    printf("%lu\n", sizeof(numbers));
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("%d\n", size);
    return 0;
}