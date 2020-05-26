#include <stdio.h>
void sort_desc(int array[], int n);

int main()
{
  int arr[100];
  int i, n;

  printf("How many rows you want in array?: \n");
  scanf("%d", &n);

  printf("Enter numbers: \n");
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  
  // Sort the array
  sort_desc(arr, n);
}


void sort_desc(int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (array[i] < array[j])
      {
        int s = array[i];
        array[i] = array[j];
        array[j] = s;
      }
    }
  }

  // Print the array as descending order
  printf("Descending order array is \n");

  for (int i = 0; i < n; i++)
  {
    printf("%d\n", array[i]);
  };
}