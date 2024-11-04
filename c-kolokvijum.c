#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.14
#include <math.h>

int main()
{
  // int x, y;
  // printf("Unesi x: \n");
  // scanf("%d", &x);
  // printf("Unesi y: \n");
  // scanf("%d", &y);

  // if (y < 0)
  // {
  //   x = x - y;
  // }
  // else
  // {
  //   x = x + y;
  // }

  // printf("X povecano je %d", x);
  // 2
  // int a, b, c, min;
  // printf("Unesi 3 broja[a,b,c]: \n");
  // scanf("%d %d %d", &a, &b, &c);
  // min = a;
  // if (b < min)
  // {
  //   min = b;
  // }
  // if (c < min)
  // {
  //   min = c;
  // }
  // printf("Min broj je %d", min);
  // 3
  // float a;
  // printf("Unesi broj a: \n");
  // scanf("%f", &a);

  // if (a == (int)a)
  // {
  //   printf("Ovaj broj je ceo \n");
  // }
  // else
  // {
  //   printf("Ovaj broj je decimalan \n");
  // }
  // 4
  // float a, b, c, P, S;
  // printf("Unesi stranice trougla[a,b,c]: \n");
  // scanf("%f %f %f", &a, &b, &c);
  // S = (a+b+c)/2;
  // P = sqrt(S *(S-a)*(S-b)*(S-c));
  // printf("Povrsine je %.2f , a PoluObim: %.2f", P, S);
  // 5
  // float x, y;
  // printf("Unesi kordinate tacke A [x,y]:\n ");
  // scanf("%f %f", &x, &y);
  // float yLinija = 3 * x + 7;

  // if (y == yLinija)
  // {
  //   printf("Lezi na pravoj");
  // }
  // else
  // {
  //   printf("Ne lezi na pravoj");
  // }
  // 6
  // float x, y, r;
  // printf("Unesi x: \n");
  // scanf("%f", &x);
  // printf("Unesi y: \n");
  // scanf("%f", &y);
  // printf("Unesi r poluprecnik: \n");
  // scanf("%f", &r);
  // if ((x * x) + (y * y) == r * r)
  // {
  //   printf("Tacka A je na kruznici");
  // }
  // else if ((x * x) + (y * y) > r * r)
  // {
  //   printf("Tacka A je van kruznice");
  // }
  // else
  // {
  //   printf("Tacka A je u kruznici");
  // }
  // 7
  // float a, b, c;
  // printf("Unesi stranice trougla: (a,b,c) \n");
  // scanf("%f %f %f", &a, &b, &c);
  // if (a > b && a > c)
  // {
  //   if (pow(b, 2) + pow(c, 2) > pow(a, 2))
  //   {
  //     printf("Trougao je ostrougli \n");
  //   }
  //   else if (pow(b, 2) + pow(c, 2) < pow(a, 2))
  //   {
  //     printf("Trougao je tupougli\n");
  //   }
  //   else
  //   {
  //     printf("Trougao je pravougli\n");
  //   }
  // }
  // else if (b > a && b > c)
  // {
  //   if (pow(a, 2) + pow(c, 2) > pow(b, 2))
  //   {
  //     printf("Trougao je ostrougli \n");
  //   }
  //   else if (pow(a, 2) + pow(c, 2) < pow(b, 2))
  //   {
  //     printf("Trougao je tupougli\n");
  //   }
  //   else
  //   {
  //     printf("Trougao je pravougli\n");
  //   }
  // }
  // else
  // {
  //   if (pow(a, 2) + pow(b, 2) > pow(c, 2))
  //   {
  //     printf("Trougao je ostrougli \n");
  //   }
  //   else if (pow(a, 2) + pow(b, 2) < pow(c, 2))
  //   {
  //     printf("Trougao je tupougli\n");
  //   }
  //   else
  //   {
  //     printf("Trougao je pravougli\n");
  //   }
  // }
  // 8
  // int broj;
  // printf("Unesi trocifreni broj: \n");
  // scanf("%d", &broj);

  // if (broj < 100 || broj > 999)
  // {
  //   printf("Broj nije trocifren \n");
  // }

  // int poslednjaCifra = broj % 10;

  // if (poslednjaCifra < 5)
  // {
  //   broj += 2;
  // }
  // else
  // {
  //   broj -= 5;
  // }

  // printf("Uneti broj posle svih provera je: %d \n", broj);
  // 9
  // int nekiBr;
  // printf("Unesi broj od 0 do 9: \n");
  // scanf("%d", &nekiBr);

  // if (nekiBr < 0 || nekiBr > 9)
  // {
  //   printf("Ovaj broj nije u opsegu od 0 do 9");
  // }

  // if (nekiBr == 0)
  // {
  //   printf("nula");
  // }
  // else if (nekiBr == 1)
  // {
  //   printf("jedan");
  // }
  // else if (nekiBr == 2)
  // {
  //   printf("dva");
  // }
  // else if (nekiBr == 3)
  // {
  //   printf("tri");
  // }
  // else if (nekiBr == 4)
  // {
  //   printf("cetiri");
  // }
  // else if (nekiBr == 5)
  // {
  //   printf("pet");
  // }
  // else if (nekiBr == 6)
  // {
  //   printf("sest");
  // }
  // else if (nekiBr == 7)
  // {
  //   printf("sedam");
  // }
  // else if (nekiBr == 8)
  // {
  //   printf("osam");
  // }
  // else if (nekiBr == 9)
  // {
  //   printf("devet");
  // }
  // 10
  // float x;
  // printf("Unesi x: (-1<=x<=1): \n");
  // scanf("%f", &x);
  // if (x < -1 || x > 1)
  // {
  //   printf("Uneti broj nije u trazenom opsegu. \n");
  // }

  // float term1 = 1;
  // float term2 = x / 8;
  // float term3 = (1.0 / 2) * pow(x / 8, 2);
  // float term4 = (1.0 / 6) * pow(x / 3, 3);
  // float term5 = (1.0 / 24) * pow(x / 8, 4);
  // float term6 = (1.0 / 120) * pow(x / 8, 5);

  // float sum = term1 + term2 + term3 + term4 + term5 + term6;
  // float rezultat = pow(sum, 8);

  // printf("Rezultat aproksimacije je: %f", rezultat);
  // 11
  // int a, b;
  // printf("Unesi a: \n");
  // scanf("%d", &a);
  // printf("Unesi b: \n");
  // scanf("%d", &b);

  // printf("Vrednosti a i b pre promene su : %d i %d \n", a, b);

  // a = a + b;
  // b = a - b;
  // a = a - b;
  // printf("a= %d \nb= %d", a, b);

  // 12
  int n;
  printf("Unesi trocifreni broj: \n");
  scanf("%d", &n);

  int srednjaCifra = (n % 100) / 100;
  return 0;
}