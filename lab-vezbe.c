#include <stdio.h>
#include <math.h>

int main()
{
  int k, i = 1, broj = 1;
  printf("Unesi k: \n");
  scanf("%d", &k);

  while (i < k)
  {
    broj *= 10;
    i++;
  }
  printf("Broj na poziciji %d je %d", k, broj);

  return 0;
}