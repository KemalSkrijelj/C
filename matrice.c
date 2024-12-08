#include <stdio.h>
#include <math.h>
#define MAX 100

int unosMatrice(int matrica[10][10], int vrsta, int kolona)
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
int main()
{
  int vrsta, kolona, matrica[10][10], sumaParnih = 0, jednakNuli = 0;
  printf("Unesi vrstu: ");
  scanf("%d", &vrsta);
  printf("Unesi kolona: ");
  scanf("%d", &kolona);

  unosMatrice(matrica, vrsta, kolona);
  printf("Elementi matrice: \n");
  for (int i = 0; i < vrsta; i++)
  {
    for (int j = 0; j < kolona; j++)
    {
      printf("[%d][%d]: %d \t", i, j, matrica[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < vrsta; i++)
  {
    for (int j = 0; j < kolona; j++)
    {
      if (matrica[i][j] % 2 == 0)
        sumaParnih += matrica[i][j];
      if (matrica[i][j] == 0)
        jednakNuli++;
    }
  }
  printf("Suma parnih elemenata je %d \n", sumaParnih);
  printf("Broj elemenata jednak nuli je %d ", jednakNuli);

  //////////////////////////////////////////
  // int vrsta, kolona, matrica[10][10], suma = 0;
  // printf("Unesi vrstu: ");
  // scanf("%d", &vrsta);
  // printf("Unesi kolona: ");
  // scanf("%d", &kolona);

  // unosMatrice(matrica, vrsta, kolona);
  // printf("Ispis elemenata matrice:\n");
  // for (int i = 0; i < vrsta; i++)
  // {
  //   for (int j = 0; j < kolona; j++)
  //   {
  //     printf("[%d][%d]: %d \t",i,j, matrica[i][j]);
  //     suma+= matrica[i][j];
  //   }
  //   printf("\n");
  // }
  // printf("Suma elemenata je: %d", suma);

  //////////////////////////////////////////
  // int vrsta, kolona, matrica[10][10];
  // printf("Unesi vrstu: ");
  // scanf("%d", &vrsta);
  // printf("Unesi kolonu: ");
  // scanf("%d", &kolona);
  // printf("Unesi elemente matrice: \n");
  // unosMatrice(matrica, vrsta, kolona);

  // printf("\nUneta matrica je:\n");
  // for (int i = 0; i < vrsta; i++)
  // {
  //   for (int j = 0; j < kolona; j++)
  //   {
  //     printf("Matrica[%d][%d]: %d \t", i, j, matrica[i][j]);
  //   }
  //   printf("\n");
  // }
  //////////////////////////////////////////
  // int vrsta, kolona, k = 0;
  // printf("Unesi vrstu: \n");
  // scanf("%d", &vrsta);
  // printf("Unesi kolona: \n");
  // scanf("%d", &kolona);

  // int matrica[vrsta][kolona];
  // int suma = 0;
  // int brojElemenata = vrsta * kolona;

  // printf("Unesi elemente matrice: \n ");
  // for (int i = 0; i < vrsta; i++)
  // {
  //   for (int j = 0; j < kolona; j++)
  //   {
  //     printf("[%d][%d]: ", i, j);
  //     scanf("%d  ", &matrica[i][j]);
  //     suma += matrica[i][j];
  //   }
  // }

  // float srednjaVrednsot = suma / brojElemenata;
  // int niz[brojElemenata];
  // int minEl = matrica[0][0];

  // printf("Uneta matrica je: \n");
  // for (int i = 0; i < vrsta; i++)
  // {
  //   for (int j = 0; j < kolona; j++)
  //   {
  //     printf("%d ", matrica[i][j]);
  //   }
  //   printf("\n");
  // }

  // for (int i = 0; i < vrsta; i++)
  // {
  //   for (int j = 0; j < kolona; j++)
  //   {
  //     if (matrica[i][j] > srednjaVrednsot)
  //     {
  //       niz[k] = matrica[i][j];
  //       k++;
  //     }
  //     if (matrica[i][j] < minEl)
  //     {
  //       minEl = matrica[i][j];
  //     }

  //   }
  // }
  // for (int i = 0; i < k; i++)
  // {
  //   printf("Elementi veci od srednje vrednosti: %d \n", niz[i]);
  // }

  // printf(" \n Srednja vrednost: %.2f", srednjaVrednsot);
  // printf(" \n Minimalni element matrice: %d", minEl);
  return 0;
}
