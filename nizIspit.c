#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <math.h>

// void sortiranjeNiza(int niz[MAX], int n)
// {
//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (niz[j] > niz[j + 1])
//       {
//         int pom = niz[j];
//         niz[j] = niz[j + 1];
//         niz[j + 1] = pom;
//       }
//     }
//   }
// }

//////////////////////////////////////////

// void sortirajNiz(int niz[MAX], int n)
// {
//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (niz[j] > niz[j + 1])
//       {
//         int pomocna = niz[j];
//         niz[j] = niz[j + 1];
//         niz[j + 1] = pomocna;
//       }
//     }
//   }
// }

//////////////////////////////////////////
void unosNiza(int niz[MAX], int n)
{
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &niz[i]);
  }
}
void ispisNiza(int niz[MAX], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", niz[i]);
  }
}
void sortirajNiz(int niz[MAX], int n)
{
  int pomocna;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; i++)
    {
      if (niz[j] > niz[j + 1])
      {
        pomocna = niz[j];
        niz[j] = niz[j + 1];
        niz[j + 1] = pomocna;
      }
    }
  }
}

int main()
{
  int n, niz[MAX];
  printf("Unesi n: ");
  scanf("%d", &n);
  unosNiza(niz, n);
  ispisNiza(niz, n);
  sortirajNiz(niz, n);

  /////////////////////////////////////

  // int n, niz[MAX], x;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // printf("Unesi x: ");
  // scanf("%d", &x);
  // unosNiza(niz, n);
  // ispisNiza(niz, n);
  // for (int i = 0; i < x; i++)
  // {
  //   rotirajNiz(niz, n);
  // }
  // printf("Rotriani niz: ");
  // ispisNiza(niz, n);

  /////////////////////////////////////

  // int n, niz[MAX], isFibonaci = 1;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // while (n < 3)
  // {
  //   printf("Unesi n(n>3): ");
  //   scanf("%d", &n);
  // }

  // printf("Niz: ");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d ", &niz[i]);
  // }
  // for (int i = 2; i < n; i++)
  // {
  //   if (niz[i] != niz[i - 1] + niz[i - 2])
  //   {
  //     isFibonaci = 0;
  //     break;
  //   }
  // }
  // if (isFibonaci == 1)
  // {
  //   printf("Fibonacijev niz.");
  // }
  // else
  // {
  //   printf("Nije Fibonacijev niz.");
  // }

  //////////////////////////////////////////

  // float niz[MAX];
  // int n;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // printf("Unesi niz: ");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%f", &niz[i]);
  // }
  // printf("Niz: ");
  // for (int i = 0; i < n; i++)
  // {
  //  printf("%.2f ", niz[i]);
  // }

  //////////////////////////////////////////

  // int niz[MAX], n, brojac, duzina = -1, indeks = -1;
  // printf("Unesi duzinu niza: ");
  // scanf("%d", &n);
  // printf("Unesi niz: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // printf("Sortirani niz:");
  // sortirajNiz(niz, n);
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", niz[i]);
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   brojac = 1;
  //   for (int j = i + 1; j < n; j++)
  //   {
  //     if (niz[i] == niz[j])
  //     {
  //       brojac++;
  //     }
  //   }
  //   if (brojac > duzina){
  //     duzina = brojac;
  //     indeks = i;
  //   }
  // }
  // printf("Najveci broj puta se ponavlja broj %d, %d puta", niz[indeks], duzina);

  //////////////////////////////////////////
  // int niz[MAX], n;
  // printf("Unesi duzinu niza: ");
  // scanf("%d", &n);
  // printf("Unesi el niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", niz[i]);
  // }
  // sortiranjeNiza(niz, n);
  // printf("\nSortirani niz: ");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", niz[i]);
  // }
  return 0;
}