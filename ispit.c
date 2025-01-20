#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main()
{
  // int n, fakt = 1;
  // printf("Unesi broj: ");
  // scanf("%d", &n);
  // for (int i = 1; i <= n; i++)
  // {
  //   fakt *= i;
  // }
  // printf("Faktorijel broja %d je %d", n, fakt);

  ////////////////////////////////////////////////

  // int n, s = 0, fakt = 1;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // for (int i = 1; i <= n; i++)
  // {
  //   fakt *= i;
  //   s += fakt;
  // }
  // printf("Suma je %d", s);

  ////////////////////////////////////////////////

  // int m, n, s = 1;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // printf("Unesi m: ");
  // scanf("%d", &m);
  // for (int i = 0; i <= m; i++)
  // {
  //   s *= (n + i * m);
  // }
  // printf("Suma je %d", s);

  ////////////////////////////////////////////////

  // int m, n, znak;
  // float s = 0;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // printf("Unesi m: ");
  // scanf("%d", &m);
  // znak = 1;
  // for (int i = 1; i <= m; i++)
  // {
  //   s += (float)znak/(n+i*m);
  //   znak = -znak;
  // }
  // printf("Suma: %f", s);

  ////////////////////////////////////////////////

  // float x, y;
  // printf("Unesi x: ");
  // scanf("%f", &x);
  // y = sqrt(x + x * x + x * x * x);
  // printf("Y = %.2f", y);

  ////////////////////////////////////////////////

  // double x;
  // int stepen, minut, sekunde;
  // printf("Unesite ugao u radijanima: ");
  // scanf("%lf", &x);
  // x *=180 / PI;
  // stepen = (int)x;
  // x -= stepen;
  // x *=60;
  // minut = (int)x;
  // x -=minut;
  // x *=60;
  // sekunde = (int)x;
  // printf("\nstepena minuta sekundi: [%d,%d,%d]", stepen,minut,sekunde);

  ////////////////////////////////////////////////

  double xa, xb, xc, ya, yb, yc, a, b, c;
  printf("Unesi tacke A(x,y): ");
  scanf("%lf %lf", &xa, &ya);
  printf("Unesi tacke B(x,y): ");
  scanf("%lf %lf", &xb, &yb);
  printf("Unesi tacke C(x,y): ");
  scanf("%lf %lf", &xc, &yc);
  a = sqrt((pow(xb - xc, 2)) - (yb - yc));
  b = sqrt((pow(xc - xa, 2)) - (yc - ya));
  c = sqrt((pow(xa - xb, 2)) - (ya - yb));

  printf("Stranice: ");
  printf("\na= %.2lf", a);
  printf("\nb= %.2lf", b);
  printf("\nc= %.2lf", c);
  
  return 0;
}