#include <stdio.h>
#include <math.h>
#define MAX 100

// int ispis(int n)
// {
//   if (n == 0)
//   {
//     return 0;
//   }
//   if (n == 1)
//   {
//     return 1;
//   }
//   return 1.0 / (ispis(n - 2)) - (ispis(n - 1) + 3) / 2.0;
// }
/////////////////////////////////////////////////////////
void unosMatrice(int matrica[10][10], int vrsta, int kolona)
{
  for (int i = 0; i < vrsta; i++)
  {
    for (int j = 0; j < kolona; j++)
    {
      printf("Unesite element matrice[%d][%d]: ", i, j);
      scanf("%d", &matrica[i][j]);
    }
  }
}
void ispisMatrice(int matrica[10][10], int vrsta, int kolona)
{
  for (int i = 0; i < vrsta; i++)
  {
    for (int j = 0; j < kolona; j++)
    {
      printf("%d \t", matrica[i][j]);
    }
    printf("\n");
  }
}
void nisuPopravljeni(int matrica[10][10], int vrsta, int kolona)
{
  int popravljen = 1;
  for (int i = 0; i < vrsta; i++)
  {
    for (int j = 0; j < kolona; j++)
    {
      if (matrica[i][j] > 1)
      {
        popravljen = 0;
        break;
      }
    }
    if (popravljen == 0)
    {
      printf("Automobi %d nije popravljen u potpunosti.", i + 1);
    }
  }
}
void kvarNajucestaliji(int matrica[10][10], int vrsta, int kolona)
{
  int maxKvarova = 0, brojac, jmax = -1;
  for (int j = 0; j < kolona; j++)
  {
    brojac = 0;
    {
      for (int i = 0; i < vrsta; i++)
        if (matrica[i][j] > 0)
        {
          brojac++;
        }
    }
    if (brojac > maxKvarova)
    {
      maxKvarova = brojac;
      jmax = j;
    }
  }
  printf("\nNajcesciji kvar je %d i pojavio se %d puta", jmax , maxKvarova);
}
int main()
{
  int matrica[10][10], vrsta, kolona;
  printf("Unesi vrstu: \n");
  scanf("%d", &vrsta);
  printf("Unesi kolonu: \n");
  scanf("%d", &kolona);
  unosMatrice(matrica, vrsta, kolona);
  printf("Matrica: \n");
  ispisMatrice(matrica, vrsta, kolona);
  nisuPopravljeni(matrica, vrsta, kolona);
  kvarNajucestaliji(matrica, vrsta, kolona);
  /////////////////////////////////////////////////////////
  // int n, pronadjen = 0, niz[MAX];
  // printf("Unesi duzinu niza n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   int sumaLevo = 0;
  //   int sumaDesno = 0;
  //   for (int j = 0; j < i; j++)
  //   {
  //     sumaLevo += niz[j];
  //   }
  //   for (int k = i + 1; k < n; k++)
  //   {
  //     sumaDesno += niz[k];
  //   }
  //   if (sumaDesno == sumaLevo)
  //   {
  //     printf("Niz je usredjnen na %d indeksu", i);
  //     pronadjen = 1;
  //   }
  // }
  // if (pronadjen == 0)
  // {
  //   printf("Nema usredjenih indeksa u nizu.");
  // }
  /////////////////////////////////////////
  // for (int i = 0; i < 20; i++)
  // {
  //   printf("a_%d: %d\n", i, ispis(i));
  // }
}