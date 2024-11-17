#include<stdio.h>

int main() {
  double numberChars;
  for(numberChars = 0; getchar() != EOF; ++numberChars)
    ;

  printf("Hay %.0f caracteres en la entrada de buffer \n",numberChars);

  return 0;

}
