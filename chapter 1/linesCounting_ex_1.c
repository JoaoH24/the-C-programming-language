#include<stdio.h>

int main() {
  int character, spaces, tabs, nwlines, nwwords, inword;
  spaces = tabs = nwlines = nwwords = 0;
  inword = 0;
  
  while((character = getchar()) != EOF) {
    if(character == 32) { /* Espacio en blanco */
      ++spaces;
      inword = 0;
    }
    else if(character == 9) { /* Tabuladores */
      ++tabs;
      inword = 0;
    }
    else if(character == 10) { /* Saltos de linea */
      ++nwlines;
      inword = 0;
    }
    else if(!inword) { /* Contador de palabras */
      ++nwwords;
      inword = 1;
    }
  }

  printf("En la cadena ingresada hay: \n\t# Palabras: %d \n\t# Espacios: %d \n\t# Tabuladores: %d \n\t# Lineas: %d ", nwwords, spaces, tabs, nwlines);

  return 0;
}
