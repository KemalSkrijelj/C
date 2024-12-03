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
int Pretrazivanje(int niz[], int n, int broj){
  for (int i = 0; i < n; i++)
  {
    if (niz[i] == broj)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  int n, niz[MAX], broj;
  printf("Unesi n: \n");
  scanf("%d", &n);
  printf("Elementi niza: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &niz[i]);
  }
  printf("Trazena vrednost: \n");
  scanf("%d", &broj);
  i = Pretrazivanje(niz,n,broj);
  if (i == -1)
  {
    printf("Nema trazenog elementa u nizu.");
  }else
  {
    printf("Vrednost %d se ponavlja %d u nizu.", broj, i+1)
  }
  
  
  
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