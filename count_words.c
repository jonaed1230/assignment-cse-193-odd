#include <stdio.h>
#include <string.h>

void word_counter(char s[]);

int main () {
  char sentence[500];
  
  printf("Enter a sentence: \n");
  scanf("%[^\n]", sentence);

  word_counter(sentence);
}

void word_counter(char s[]) {
  int count = 0;

  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == ' ' && s[i+1] != ' ') {
      count ++;
    }
  }
  printf("Total words are: %d \n", count + 1);
}