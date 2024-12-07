#include <stdio.h>
#include <math.h>
#define MAX 100

// double SkalarniProizvod(int a[], int b[], int n)
// {
//   int s = 0;
//   for (int i = 0; i < n; i++)
//   {
//     s += a[i] * b[i];
//   }
//   return s;
// }
////////////////////////////////////////////////
// int Razliciti(int niz[], int n)
// {
//   int brojac = 0, j = 0;
//   for (int i = 0; i < n; i++)
//   {
//     for (j = 0; j < i && niz[j] != niz[i]; j++)
//       ;
//     if (j == i)
//     {
//       brojac++;
//     }
//   }
//   return brojac;
// }
////////////////////////////////////////////////
// void Fibonacijev(int niz[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     if (i < 2)
//     {
//       niz[i] = 1;
//     }
//     else
//     {
//       niz[i] = niz[i - 1] + niz[i - 2];
//     }
//   }
// }
// void Prikaz(int niz[], int n){
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d ", niz[i]);
//   }
// }
////////////////////////////////////////////////
// int Skalarni(int nizA[], int nizB[], int n)
// {

//   if (n > 0)
//   {
//     return (nizA[0] * nizB[0] + Skalarni(nizA + 1, nizB + 1, n - 1));
//   }
//   else
//   {
//     return 0;
//   }
// }
////////////////////////////////////////////////
// int Pretrazivanje(int niz[], int n, int broj){
//   for (int i = 0; i < n; i++)
//   {
//     if (niz[i] == broj)
//     {
//       return i;
//     }
//   }
//   return -1;
// }
////////////////////////////////////////////////
// void Rotiraj(int a[], int n)
// {
//   int pom;
//   pom = a[0];
//   for (int i = 1; i < n; i++)
//   {
//     a[i - 1] = a[i];
//   }
//   a[n - 1] = pom;
// }
////////////////////////////////////////////////
// void zamena(int niz[], int n)
// {
//   for (int i = 0; i < n; i+=2)
//   {
//     int pomocna = niz[i];
//     niz[i] = niz[i + 1];
//     niz[i + 1] = pomocna;
//   }
// }
////////////////////////////////////////////
// void Sortiraj(int niz[], int n)
// {
//   int pomocna, min;
//   for (int i = 0; i < n - 1; i++)
//   {
//     min = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (niz[j] < niz[min])
//       {
//         min = j;
//       }
//       if (min != i)
//       {
//         pomocna = niz[i];
//         niz[i] = niz[min];
//         niz[min] = pomocna;
//       }
//     }
//   }
// }
////////////////////////////////////////
// int Sortiranje(int niz[], int n)
// {
//   int pomocna;
//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (niz[j] < niz[j + 1])
//       {
//         pomocna = niz[j];
//         niz[j] = niz[j + 1];
//         niz[j + 1] = pomocna;
//       }
//     }
//   }
// }
//////////////////////////////////////
int Postojanje(int niz[], int n, int target)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (niz[i] + niz[j] == target)
      {
        return 1;
      }
    }
  }
  return 0;
}
int main()
{
  int niz[MAX], n, target;
  printf("Unesi duzinu niza n: \n");
  scanf("%d", &n);

  printf("Unesi elemente niza: \n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &niz[i]);
  }
  printf("Unesi trazen broj: \n");
  scanf("%d", &target);
  if (Postojanje(niz, n, target))
  {
    printf("Postoji par elemenata ciji je zbir jedank %d", target);
  }
  else
  {
    printf("Ne postoji par elemenata ciji je zbir jedank %d", target);
  }

  ////////////////////////////////////////////////
  // int niz[MAX], n, brojac, duzina = -1, indeks = -1;
  // printf("Broj elemenata u nizu:\n ");
  // scanf("%d", &n);
  // printf("Elemenati u nizu: ");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // Sortiraj(niz, n);
  // printf("Sortiran niz: ");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", niz[i]);
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   brojac = 1;
  //   for (int j = i + 1; j < n && niz[j] == niz[i]; j++)
  //   {
  //     brojac++;
  //   }
  //   if (brojac > duzina)
  //   {
  //     duzina = brojac;
  //     indeks = i;
  //   }
  // }
  // printf("\nNajveci broj puta se javlja broj %d, ponavljanja: %d ", niz[indeks], duzina);

  ////////////////////////////////////////////////
  // int n, niz[MAX];
  // printf("Unesi duzinu niza: \n");
  // scanf("%d", &n);

  // printf("Unesi el. niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // printf("Elementi niza: ");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", niz[i]);
  // }

  // zamena(niz, n);

  // printf("\nNovi niz: ");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", niz[i]);
  // }

  ////////////////////////////////////////////////
  // int a[MAX], n, x;
  // printf("Unesi duzinu n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &a[i]);
  // }
  // printf("Elementi niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", a[i]);
  // }

  // printf("\nBroj mesta za pomeranje: \n");
  // scanf("%d", &x);
  // for (int i = 0; i < x; i++)
  // {
  //   Rotiraj(a, n);
  // }
  // printf("Rotirajuci niz za %d mesta je:  ", x);
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", a[i]);
  // }

  ////////////////////////////////////////////////
  // int n, niz[MAX], broj;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Elementi niza: ");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // printf("Trazena vrednost: \n");
  // scanf("%d", &broj);
  // i = Pretrazivanje(niz,n,broj);
  // if (i == -1)
  // {
  //   printf("Nema trazenog elementa u nizu.");
  // }else
  // {
  //   printf("Vrednost %d se ponavlja %d u nizu.", broj, i+1)
  // }

  ////////////////////////////////////////////////
  // int n;
  // float niz[MAX], xmax, xmin, pozicijaMax;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Elementi niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%f", &niz[i]);
  // }
  // xmax = niz[0];
  // xmin = niz[0];
  // for (int i = 1; i < n; i++)
  // {
  //   if (niz[i] > xmax) xmax = niz[i];
  //   if (niz[i] < xmin) xmin = niz[i];
  // }
  // printf("Elementi niza [xmax/2 && xmin*2]: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   if (niz[i] < xmax / 2 && niz[i] > xmin * 2)
  //   {
  //     printf("%.2f ", niz[i]);
  //   }
  // }

  ////////////////////////////////////////////////
  // int n, niz[MAX], max, pozicijaMax;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Elementi niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // max = niz[0];
  // for (int i = 1; i < n; i++)
  // {
  //   if (niz[i] > max)
  //   {
  //     max = niz[i];
  //     pozicijaMax = i;
  //   }
  // }
  // printf("Max: %d \n", max);
  // printf("Pozicija: %d", pozicijaMax);
  ////////////////////////////////////////////////
  // int n, nizA[MAX], nizB[MAX];
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza A: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &nizA[i]);
  // }
  // printf("Unesi elemente niza B: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &nizB[i]);
  // }
  // printf("A*B: %d", Skalarni(nizA, nizB, n));

  ////////////////////////////////////////////////
  // int niz[MAX],n;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // Fibonacijev(niz, n);
  // Prikaz(niz,n);

  ////////////////////////////////////////////////
  // int n, niz[MAX];
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // printf("Broj razlicitih elemenata je %d", Razliciti(niz, n));

  ////////////////////////////////////////////////
  // int n, a[MAX], b[MAX];
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza A: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &a[i]);
  // }
  // printf("Unesi elemente niza B: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &b[i]);
  // }
  // printf("Skalarni proizvod niza A i B je %.2f", SkalarniProizvod(a, b, n));
  return 0;
}