/***********************************************/
/* Escriba un programa que copie su entrada en
 * la salida, reemplazando cada cadena de uno o
 * más blancos por un solo blanco. */
/***********************************************/

#include<stdio.h>

int main() {
  int character, countspaces; 
  countspaces = 0;

  for(int i = 0; (character = getchar()) != EOF; ++i) {
    if((character == 32)) {
      ++countspaces;
    }

    else if(countspaces >= 1) {
      countspaces = 0;
      putchar(32);
      putchar(character);
    }

    else {
      putchar(character);
    }
  }
  
  return 0;
}
