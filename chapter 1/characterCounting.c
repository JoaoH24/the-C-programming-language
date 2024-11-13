#include<stdio.h>

int main() {
  long numberChars = 0;

  while(getchar() != EOF)
    ++numberChars;

  printf("Hay %ld caracteres en la entrada de buffer \n", numberChars);
  
  return 0;
}
