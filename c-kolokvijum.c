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
  // int n, noviBroj;
  // printf("Unesi trocifreni broj: \n");
  // scanf("%d", &n);

  // int srednjaCifra = (n % 100) / 10;
  // int prvaCifra = n / 100;
  // int zadnjaCifra = n % 10;
  // if (srednjaCifra >= prvaCifra && srednjaCifra >= zadnjaCifra)
  // {
  //   noviBroj = prvaCifra * 100 + srednjaCifra * 10 + zadnjaCifra;
  //   printf("Novi broj: %d\n", noviBroj);
  // }
  // if (zadnjaCifra >= prvaCifra && zadnjaCifra >= srednjaCifra)
  // {
  //   noviBroj = prvaCifra * 100 + srednjaCifra * 10 + zadnjaCifra;
  //   printf("Novi broj: %d\n", noviBroj);
  // }
  // if (srednjaCifra >= zadnjaCifra && srednjaCifra >= prvaCifra)
  // {
  //   noviBroj = prvaCifra * 100 + srednjaCifra * 10 + zadnjaCifra;
  //   printf("Novi broj: %d\n", noviBroj);
  // }
  // if (prvaCifra >= zadnjaCifra && prvaCifra >= srednjaCifra)
  // {
  //   noviBroj = prvaCifra * 100 + srednjaCifra * 10 + zadnjaCifra;
  //   printf("Novi broj: %d\n", noviBroj);
  // }
  // if (prvaCifra >= srednjaCifra && prvaCifra >= zadnjaCifra)
  // {
  //   noviBroj = zadnjaCifra * 100 + prvaCifra * 10 + srednjaCifra;
  //   printf("Novi broj: %d\n", noviBroj);
  // }

  // 13
  // int a, b, c;

  // printf("Unesi broj atoma vodonika: \n");
  // scanf("%d", &a);
  // printf("Unesi broj atoma sumpora: \n");
  // scanf("%d", &b);
  // printf("Unesi broj atoma kiseonika: \n");
  // scanf("%d", &c);
  // int brojMolekula = (a / 2 < b) ? (a / 2 < c / 4 ? a / 2 : c / 4) : (b < c / 4 ? b : c / 4);

  // printf("Max broj molekula H2SO4 koji moze formirati je %d", brojMolekula);

  // 14
  // int a, b, c, d;
  // printf("Unesi 2 broja horizontalne linije [1,8]");
  // scanf("%d %d", &a, &b);
  // printf("Unesi 2 broja vertikalne linije [1,8]");
  // scanf("%d %d", &c, &d);

  // if ((a + b) % 2 == (c + d) % 2)
  // {
  //   printf("Polja su iste boje");
  // }
  // else
  // {
  //   printf("Polja su razlicite boje");
  // }
  // 15
  // int n, m;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // int prvaCifra = n / 100;
  // int drugaCifra = (n % 100) / 10;
  // int zadnjaCifra = n % 10;
  // printf("N broj je %d  \n", n);
  // if (prvaCifra > drugaCifra)
  // {
  //   int pomocnaVarijabla = prvaCifra;
  //   prvaCifra = drugaCifra;
  //   drugaCifra = pomocnaVarijabla;
  // }
  // if (prvaCifra > zadnjaCifra)
  // {
  //   int pomocnaVarijabla = prvaCifra;
  //   prvaCifra = zadnjaCifra;
  //   zadnjaCifra = pomocnaVarijabla;
  // }
  // if (drugaCifra > zadnjaCifra)
  // {
  //   int pomocnaVarijabla = drugaCifra;
  //   drugaCifra = zadnjaCifra;
  //   zadnjaCifra = pomocnaVarijabla;
  // }

  // if (prvaCifra == 0)
  // {
  //   if (drugaCifra != 0)
  //   {
  //     int pomocna = prvaCifra;
  //     prvaCifra = drugaCifra;
  //     drugaCifra = pomocna;
  //   }
  //   else
  //   {
  //     int pomocna = prvaCifra;
  //     prvaCifra = zadnjaCifra;
  //     zadnjaCifra = pomocna;
  //   }
  // }

  // m = prvaCifra * 100 + drugaCifra * 10 + zadnjaCifra;

  // printf("Novi broj m: %d", m);

  // 16
  // float x, y;
  // printf("Unesi X: \n ");
  // scanf("%f", &x);

  // if (x == 0)
  // {
  //   y = x;
  // }
  // else if (1 <= x <= 9)
  // {
  //   y = pow(x, 5) / 5;
  // }
  // else if (-7 <= x <= -1)
  // {
  //   y = sqrt((x * x) + 1);
  // }
  // else
  // {
  //   y = 0;
  // }
  // printf("Vas broj je: %.2f", y);
  // 17

  // int x, y = 0, pomocna, zadnjaCifra;

  // printf("Unesi x: \n");
  // scanf("%d", &x);

  // pomocna = x;
  // printf("X = %d \n", x);

  // while (pomocna > 0)
  // {
  //   zadnjaCifra = pomocna % 10;
  //   y = y * 10 + zadnjaCifra;
  //   pomocna /= 10;
  // }

  // printf("Y = %d \n", y);

  // int zbir = x + y;

  // int zbirBrojeva = (int)sqrt(zbir);
  // if (zbirBrojeva * zbirBrojeva == zbir && zbir >= 0)
  // {
  //   printf("X i Y je potpun kvadrat\n");
  // }
  // else
  // {
  //   printf("X i Y nije potpun kvadrat\n");
  // }
  // 18
  // int x;
  // printf("Unesi x: \n");
  // scanf("%d", &x);
  // int pomocna;
  // int a = 0;
  // int b = 1;
  // printf("Fibonacijev niz do %d.  broja: \n", x);
  // for (int i = 1; i <= x; i++)
  // {
  //   printf("%d \n", a);
  //   pomocna = a + b;
  //   a = b;
  //   b = pomocna;
  // }
  // 19
  // int sum;
  // for (int i = 1; i <= 1000; i++)
  // {
  //   sum = 0;
  //   for (int j = 1; j <= i / 2; j++)
  //   {
  //     if (i % j == 0)
  //     {
  //       sum = sum + j;
  //     }
  //   }
  //   if (sum == i)
  //   {
  //     printf("Savrseni brojevi su %d \n", i);
  //   }
  // }
  // 20
  // int a, b;
  // printf("Unesi dva broja: \n");
  // scanf("%d %d", &a, &b);

  // while (b != 0)
  // {
  //   int pomocna = b;
  //   b = a % b;
  //   a = pomocna;
  // }

  // printf("NZD je %d", a);
  // 21
  // int n, pomocna, sum;
  // sum = 0;
  // int a = 0;
  // int b = 1;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // for (int i = 1; i <= n; i++)
  // {
  //   printf("%d \n", a);
  //   sum += a;
  //   pomocna = a + b;
  //   a = b;
  //   b = pomocna;
  // }
  // printf("Suma: %d \n", sum);
  // 22
  // int brojFirme, sum;
  // printf("Unesi broj firme, mora imati 5 cifara: \n");
  // scanf("%d", &brojFirme);
  // int prvaCifra = brojFirme / 10000;
  // int drugaCifra = (brojFirme / 1000) % 10;
  // int skracenBroj = brojFirme / 100;
  // int srednjaCifra = skracenBroj % 10;
  // int cetvrtaCifra = (brojFirme / 10) % 10;
  // int zadnjaCifra = brojFirme % 10;

  // sum = prvaCifra + drugaCifra + srednjaCifra + cetvrtaCifra + zadnjaCifra;
  // if (srednjaCifra == 5 && sum % 3 == 0)
  // {
  //   printf("Ovo je reg. broj firme");
  // }
  // else
  // {
  //   printf("Ovo nije reg. broj firme");
  // }
  // 23
  // int a, b;
  // for (int a = 1; a <= 45; a++)
  // {
  //   for (int b = 1; b <= 45; b++)
  //   {
  //     if ((a * a * a + b * b * b) % 3 == 1)
  //     {
  //       printf("Brojevi su: a = %d, b = %d\n", a, b);
  //     }
  //   }
  // }
  // 24
  // int n, m;
  // float P = 1;
  // printf("Upisi n: \n");
  // scanf("%d", &n);
  // printf("Upisi m: \n");
  // scanf("%d", &m);
  // for (int i = 0; i <= m; i++)
  // {
  //   P *= (n + i * m);
  // }
  // printf("P=%f \n", P);
  // 25
  // int n, faktorijel, sum;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // sum = 0;
  // faktorijel = 1;
  // for (int i = 1; i <= n; i++)
  // {
  //   faktorijel = 1;
  //   for (int j = 1; j <= i; j++)
  //   {
  //     faktorijel = faktorijel * j;
  //   }

  //   sum += faktorijel;
  // }
  // printf("Suma: %d", sum);
  // 26
  // for (int i = 1; i <= 9; i++)
  // {
  //   for (int x = i - 1; x < i + 1; x++)
  //   {
  //     if (x < 1 || x > 9)
  //       continue;
  //     for (int y = x - 1; y < x + 1; y++)
  //     {
  //       if (y < 1 || y > 9)
  //         continue;
  //       printf("%d%d%d\n", i, x, y);
  //     }
  //   }
  // }
  // 27
  // for (int n = 1; n <= 9999; n++)
  // {
  //   int sum = n * (n + 1) / 2;

  //   if (sum <= 9999)
  //   {
  //     printf("Suma: %d \n", sum);
  //   }
  //   else
  //   {
  //     break;
  //   }
  // }
  //
  // int n, faktorijel, sum;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // sum = 0;
  // for (int i = 1; i <= n; i++)
  // {
  //   faktorijel = 1;
  //   for (int j = 1; j <= i; i++)
  //   {
  //     faktorijel = faktorijel * j;
  //   }
  //   sum = sum + faktorijel;
  // }
  // printf("Sum: %d \n", sum);
  ////////////////////////

  return 0;
}