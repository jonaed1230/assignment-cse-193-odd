#include <stdio.h>

int main()
{
  char word1[100], word2[100], i, j;

  printf("Enter the first word: ");
  scanf("%s", word1);
  printf("Enter the second word: ");
  scanf("%s", word2);

  // count the first words chars to add second word at the end of this word.
  for (i = 0; word1[i] != '\0'; i++);

  // add a space between two sentence so it will become a real sentence.
  word1[i] = ' ';
  i++;

  for (j = 0; word2[j] != '\0'; i++, j++)
  {
    word1[i] = word2[j];
  }

  printf("After concating two words the sentence is: ");
  puts(word1);
}