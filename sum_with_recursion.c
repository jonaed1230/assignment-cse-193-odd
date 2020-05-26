#include <stdio.h>

int add_num(int n);
int main() {
  int n = 1;
  printf("Enter a positive number to add numbers from 1 to that positive number: ");
  scanf("%d", &n);

  printf("Total sum is: %d \n", add_num(n));
}

int add_num(int n) {
  if (n != 0) {
    return n + add_num(n - 1);
  }
  return n;
}