#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  float *memory;

  printf("How many numbers you want to input? ");
  scanf("%d", &num);

  // memory allocation
  memory = (float *)calloc(num, sizeof(float));

  if (!memory)
  {
    printf("Memory not allocated");
  }

  printf("Enter the numbers: \n");
  for (int i = 0; i< num; i++) {
    scanf("%f", memory + i);
  }

  for (int i = 1; i < num; i++) {
    if (*memory < *(memory + i)) {
      *memory = *(memory + i);
    }
  }

  printf("Largest number is: %.2f \n", *memory);

}