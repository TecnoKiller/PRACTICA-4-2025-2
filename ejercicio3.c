// Silva Zinzu Andrik Leonardo
// Ejercicio 3
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int res = 0;
  int i;
  for(i = 0; i < 11; i++)
  {
    res = res + i;
  }
  printf("solucion 1 - el numero es: %d\n", res);
  res = 0;
 for(i = 1; i <= 10; i++)
  {
    res = res + i;
  }
  printf("solucion 2 - el numero es: %d\n", res);
  res = 0;

 for(i = 1; i < 11; i++)
  {
    res = res + i;
  }
  printf("solucion 3 - el numero es: %d\n", res);
  res = 0;

 for(i = 0; i < 11; i++)
  {
    res = res + i;
  }
  printf("solucion 4 - el numero es: %d\n", res);
  return 0;
}
