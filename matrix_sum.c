#include <stdio.h>

void sum_of_matrix(int array[100][100], int k, int n);

int main()
{
  int arr[100][100];
  int i, j, k, n = 0;

  printf("Enter the order of 2d matrix (ex: 2 2 or 4 2 etc.): \n");
  scanf("%d %d", &k, &n);

  printf("Enter the matrix row by row give input of 1 row at a time (ex: 58 9 6 etc): \n");

  for (i = 0; i < k; ++i)
  {
    for (j = 0; j < n; ++j)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  sum_of_matrix(arr, k, n);
};

void sum_of_matrix(int array[100][100], int k, int n)
{
  int sum = 0;

  for (int i = 0; i < k; i++)
  {
    for (int j = 0; j < n; j++)
    {
      sum = sum + array[i][j];
    }

    // Show the output as human understandable by adding extra 1 with index
    printf("Sum of the %d row is = %d\n", i+1, sum);
    sum = 0;
  }
  sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < k; j++)
    {
      sum = sum + array[i][j];
    }

    // Show the output as human understandable by adding extra 1 with index
    printf("Sum of the %d column is = %d\n", i+1, sum);
    sum = 0;
  }
}