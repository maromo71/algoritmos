#include <stdio.h>

int main (void){
  int x = 0, soma = 0;
  do {
      do {
	  scanf ("%d", &x);
      } while (x < -1000 || x > 1000);
      soma += x;
  } while (x != 0);
  printf ("%d", soma);
  return 0;
}