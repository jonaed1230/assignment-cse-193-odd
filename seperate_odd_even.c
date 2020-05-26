#include <stdio.h>
void seperate(int array[], int n);

int main()
{
  int arr[100];
  int i, n;

  printf("How many numbers you want to seperate?: \n");
  scanf("%d", &n);

  printf("Enter numbers: \n");
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  
  seperate(arr, n);
}

void seperate(int array[], int n)
{
  int even[100], odd[100];
  int e = 0, o = 0;

  for (int i = 0; i < n; i++)
  {
    if (array[i] % 2 == 0)
    {
      even[e] = array[i];
      e++;
    }
    else
    {
      odd[o] = array[i];
      o++;
    }
  }

  printf("Even numbers are: \n");
  for (int i = 0; i < e; i++)
  {
    printf("%d \n", even[i]);
  }

  printf("Odd numbers are: \n");
  for (int i = 0; i < o; i++)
  {
    printf("%d \n", odd[i]);
  }
}