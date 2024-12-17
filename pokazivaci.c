#include <stdio.h>
void zamena(int *px, int *py)
{
  int tmp;
  tmp = *px;
  *px = *py;
  *py = tmp;
}
int main()
{
  // int x, prom = 5, *pokazivac;
  // pokazivac = &prom;
  // x =*pokazivac;
  // printf("prom= %d \t x= %d", prom,x);
  ////////////////////////////////////////
  int x = 3;
  int y = 5;
  printf("\n Adresa promenljive x: %p", &x);
  printf("\n Vrednost promenljive x: %d", x);
  printf("\n Adresa promenljive y: %p", &y);
  printf("\n Vrednost promenljive y: %d", y);
  zamena(&x, &y);
  printf("\n");
  printf("\n Adresa promenljive x: %p", &x);
  printf("\n Vrednost promenljive x: %d", x);
  printf("\n Adresa promenljive y: %p", &y);
  printf("\n Vrednost promenljive y: %d", y);

  return 0;
}