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

  // double xa, xb, xc, ya, yb, yc, a, b, c;
  // printf("Unesi tacke A(x,y): ");
  // scanf("%lf %lf", &xa, &ya);
  // printf("Unesi tacke B(x,y): ");
  // scanf("%lf %lf", &xb, &yb);
  // printf("Unesi tacke C(x,y): ");
  // scanf("%lf %lf", &xc, &yc);
  // a = sqrt((pow(xb - xc, 2)) - (yb - yc));
  // b = sqrt((pow(xc - xa, 2)) - (yc - ya));
  // c = sqrt((pow(xa - xb, 2)) - (ya - yb));

  // printf("Stranice: ");
  // printf("\na= %.2lf", a);
  // printf("\nb= %.2lf", b);
  // printf("\nc= %.2lf", c);

  ////////////////////////////////////////////////

  // double xmin, xmax, dx, x, y = 1, p = 1;
  // int n;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // printf("Unesi xmin: ");
  // scanf("%lf", &xmin);
  // printf("Unesi xmax: ");
  // scanf("%lf", &xmax);
  // printf("Unesi korak dx: ");
  // scanf("%lf", &dx);
  // printf("\n n          y\n");
  // for (x = xmin; x <= xmax; x += dx)
  // {
  //   for (int i = 1; i <= n; i++)
  //   {
  //     p *= x;
  //     y *= 1 + p;
  //   }
  //   printf("%.6lf  %.6lf \n", x, y);
  //   p = 1;
  //   y = 1;
  // }

  ////////////////////////////////////////////////

  // double xmin, xmax, dx, y;
  // printf("Xmin: ");
  // scanf("%lf", &xmin);
  // printf("Xmax: ");
  // scanf("%lf", &xmax);
  // printf("Dx: ");
  // scanf("%lf", &dx);
  // for (int x = xmin; x <= xmax; x += dx)
  // {
  //   y = (2 * x + 1) / (pow(x, 2) - 1);
  //   printf("\n%.5lf %.5lf\n", x, y);
  // }

  ////////////////////////////////////////////////

  // int a, b, c, zbir;
  // printf("Pitagoreni brojevi: ");
  // for (a = 1; a <= 20; a++)
  // {
  //   for (b = 1; b <= 20; b++)
  //   {
  //     zbir = a * a + b * b;
  //     c = 1;
  //     while (c <= zbir)
  //     {
  //       if (c * c == zbir)
  //       {
  //         printf("\na:%.2d b:%.2d c:%.2d\n", a, b, c);
  //       }
  //       c++;
  //     }
  //   }
  // }

  ////////////////////////////////////////////////

  // int n, m, k;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // printf("Prosti faktori: ");
  // for (k = 2; k <=n; k++)
  // {
  //   while (n % k == 0)
  //   {
  //     printf("\n %d", k);
  //     n /= k;
  //   }
  // }

  ////////////////////////////////////////////////

  // int n, obrnuti = 0;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // while (n != 0)
  // {
  //   obrnuti = obrnuti * 10 + n % 10;
  //   n = n / 10;
  // }
  // printf("Obrnuti broj je %d", obrnuti);

  ////////////////////////////////////////////////

  // int n, sumaCifra = 0;
  // int cifra;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // while (n != 0)
  // {
  //   sumaCifra += n % 10;
  //   n = n / 10;
  // }
  // if (n % sumaCifra == 0)
  // {
  //   printf("Broj je Nivenov.");
  // }else
  // {
  //   printf("Broj nije Nivenov.");
  // }

  ////////////////////////////////////////////////

  // int i = 0;
  // float a, clan, eps, s = 0, x;
  // printf("Unesi x: ");
  // scanf("%f", &x);
  // printf("Unesi a: ");
  // scanf("%f", &a);
  // printf("Unesi eps: ");
  // scanf("%f", &eps);
  // clan = x;
  // while (fabs(clan) >= eps)
  // {
  //   i++;
  //   clan = clan * (a - i - 1) * x / i;
  //   s = s + clan;
  // }
  // printf("Suma: %d", s);

  ///////////////////////////////////////////////

  // int n = 1;
  // float s = 0, clan;
  // clan = 1 / (n * n);
  // while (clan > 1e-4)
  // {
  //   s += clan;
  //   n++
  //   clan = 1.0/(n*n);
  // }

  ///////////////////////////////////////////////

  // int znak = 1, n, i = 1;
  // float s = 0;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // while (i <= n)
  // {
  //   s += (float)znak / i;
  //   i++;
  //   znak = -znak;
  // }
  // printf("Suma: %f", s);

  ///////////////////////////////////////////////

  // int m, n, pomocna;
  // float s = 0, koren;
  // printf("Unesi m i n: ");
  // while (m < 1 || n < 1)
  // {
  //   scanf("%d %d", m, n);
  // }
  // if (n < m)
  // {
  //   pomocna = n;
  //   n = m;
  //   m = pomocna;
  // }
  // if (m % 2 == 0)
  // {
  //   m++;
  // }
  // for (int i = m; i <= n; i++)
  // {
  //   koren = sqrt(i);
  //   s += koren;
  // }
  // printf("\n Suma korena je %.3f\n", s);

  ///////////////////////////////////////////////

  // int r;
  // double p, z;
  // printf("Unesi poluprecnik r: ");
  // scanf("%d", &r);
  // p = 4*r*r

  ///////////////////////////////////////////////

  // int n, sumaCifra = 0;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // while (n != 0)
  // {
  //   sumaCifra += n % 10;
  //   n = n / 10;
  // }
  // if (n % sumaCifra == 0)
  // {
  //   printf("Nivenov broj");
  // }
  // else
  // {
  //   printf("Nije Nivenov broj");
  // }

  ///////////////////////////////////////////////

  // int zbirCifara, broj;
  // printf("Amstrongovi brojevi: ");
  // for (int a = 1; a <= 9; a++)
  // {
  //   for (int b = 1; b <= 9; b++)
  //   {
  //     for (int c = 1; c <= 9; c++)
  //     {
  //       broj = 100 * a + 10 * b + c;
  //       if (broj == pow(a, 3) + pow(b, 3) + pow(c, 3))
  //       {
  //         printf("\nAmstronogv broj: %d", broj);
  //       }
  //     }
  //   }
  // }

  ///////////////////////////////////////////////

  // int n, suma = 0;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // for (int i = 1; i < n; i++)
  // {
  //   if (n % i == 0)
  //   {
  //     suma += i;
  //   }
  // }
  // if (suma == n)
  // {
  //   printf("Broj je savrsen.");
  // }
  // else
  // {
  //   printf("Broj nije savrsen.");
  // }

  ///////////////////////////////////////////////

  // int n, sumaCifara = 0;
  // int x, y, z;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // while (n < 100 || n > 999)
  // {
  //   printf("Unesi n: ");
  //   scanf("%d", &n);
  // }

  // x = n / 100;
  // y = (n / 10) % 10;
  // z = n % 10;
  // sumaCifara = x + y + z;
  // printf("Suma cifara je %d", sumaCifara);

  ///////////////////////////////////////////////

  // int a, b, c, broj;
  // for (int a = 1; a <= 9; a++)
  // {
  //   for (int b = 1; b < 9; b++)
  //   {
  //     for (int c = 1; c < 9; c++)
  //     {
  //       broj = a * 100 + b * 10 + c;
  //       if (broj == ((10 * a + b) * (10 * a + b) - pow(c, 2)))
  //       {
  //         printf("Broj: %d", broj);
  //       }
  //     }
  //   }
  // }

  ///////////////////////////////////////////////

  // int a, b, c, broj, dvocifren;
  // for (a = 1; a <= 9; a++)
  // {
  //   for (b = 0; b < 9; b++)
  //   {
  //     for (c = 0; c < 9; c++)
  //     {
  //       broj = a * 100 + b * 10 + c;
  //       dvocifren = a * 10 + c;
  //       if (broj % dvocifren == 0)
  //       {
  //         printf("%d, ", broj);
  //       }
  //     }
  //   }
  // }

  ///////////////////////////////////////////////

  // int a, b, c, broj, suma = 0, brojac = 0;
  // for (a = 1; a <= 9; a++)
  // {
  //   for (b = 0; b < 9; b++)
  //   {
  //     for (c = 0; c < 9; c++)
  //     {
  //       broj = a * 100 + b * 10 + c;
  //       if (a + b + c == 5)
  //       {
  //         suma += broj;
  //         brojac++;
  //       }
  //     }
  //   }
  // }
  // printf("\nSuma takvih brojeva %d", suma);
  // printf("Broj takvih brojeva %d", brojac);

  ///////////////////////////////////////////////

  int suma = 0, brojac = 0;
  for (int i = 100; i <= 999; i++)
  {
    if (i % 64 == 0)
    {
      brojac++;
      suma += i;
    }
  }
  printf("Suma brojeva: %d", suma);
  printf("\nBroj takvih  brojeva: %d", brojac);
  
  return 0;
}