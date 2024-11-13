#include <stdio.h>

int main() {
  int c;
  c = (getchar() != EOF);
  printf("Si c = (getchar() != EOF), entonces el valor de c es: %d \n",c);
  
  printf("El valor de EOF es: %d: \n",EOF);

  return 0;

}
