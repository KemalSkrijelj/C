#include <stdio.h>
int Stepen(int x, int n)
{
  int rezultat = 1;

  for (int i = 1; i <= n; i++)
  {
    rezultat = rezultat * x;
  }
  return rezultat;
}
int main()
{
  int x, n;
  printf("Unesi osnovu: \n");
  scanf("%d", &x);
  printf("Unesi stepen: \n");
  scanf("%d", &n);

  int rezultat = Stepen(x, n);

  printf("Stepen broja %d je %d", x,rezultat);
  // int a, b, c, d;
  // printf("a = \n");
  // scanf("%d", &a);
  // printf("b = \n");
  // scanf("%d", &b);
  // printf("c = \n");
  // scanf("%d", &c);
  // printf("d = \n");
  // scanf("%d", &d);
  // int max_ab = max(a, b);
  // int max_cd = max(c, d);
  // int najveci = max(max_ab, max_cd);

  // printf("Najveci uneti broj je broj je %d", najveci);
  return 0;
}