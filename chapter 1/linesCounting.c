#include<stdio.h>

int main() {
  int character, newline;

  newline = 0;

  while((character = getchar()) != EOF) {

    if(character == '\n')
      ++newline;
  }
    
  printf("El buffer registro %d lineas", newline);

  return 0;
}
