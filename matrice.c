#include <stdio.h>
#include <math.h>
#define MAX 100

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
int main()
{
  int n, matricaA[10][10], matricaB[10][10];
  printf("Unesi n: \n");
  scanf("%d", &n);

  printf("Unesi el. matrice: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("[%d][%d]: ", i, j);
      scanf("%d", &matricaA[i][j]);
    }
  }
  printf("Matrica: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d \t", matricaA[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      matricaB[i][j] = 0;
      for (int k = 0; k < n; k++)
      {
        matricaB[i][j] += matricaA[i][k] * matricaA[k][j];
      }
    }
  }
  printf("Matrica B: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d \t", matricaB[i][j]);
    }
    printf("\n");
  }

  /////////////////////////////////////////////////////
  // int n, matrica[10][10], pomocna, maxv[MAX], minv[MAX], maxk[MAX], mink[MAX];
  // printf("Unesi n: \n");
  // scanf("%d", &n);

  // printf("Unesi el matrice: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("[%d][%d]: ", i, j);
  //     scanf("%d", &matrica[i][j]);
  //   }
  // }
  // printf("Matrica: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%d \t", matrica[i][j]);
  //   }
  //   printf("\n");
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   minv[i] = matrica[i][0];
  //   maxv[i] = matrica[i][0];
  //   mink[i] = matrica[0][i];
  //   maxk[i] = matrica[0][i];
  //   for (int j = 1; j < n; j++)
  //   {
  //     if (matrica[i][j] < minv[i])
  //       minv[i] = matrica[i][j];
  //     if (matrica[i][j] > maxv[i])
  //       maxv[i] = matrica[i][j];
  //     if (matrica[j][i] < mink[i])
  //       mink[i] = matrica[j][i];
  //     if (matrica[j][i] > maxk[i])
  //       maxk[i] = matrica[j][i];
  //   }
  // }
  // printf("Najveci u vrstama: ");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", maxv[i]);
  // }
  // printf("\nNajmanji u vrstama: ");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", minv[i]);
  // }
  // printf("\nNajveci u kolonama: ");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", maxk[i]);
  // }
  // printf("\nNajmanji u kolonama: ");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", mink[i]);
  // }

  //////////////////////////////////////////
  // int n, matrica[10][10], pomocna;
  // printf("Unesi n: \n");
  // scanf("%d", &n);

  // printf("Unesi el matrice: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("[%d][%d]: ", i, j);
  //     scanf("%d", &matrica[i][j]);
  //   }
  // }
  // printf("Matrica: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%d \t", matrica[i][j]);
  //   }
  //   printf("\n");
  // }

  // printf("Transponovana matrica: \n");
  // for (int i = 0; i < n - 1; i++)
  // {
  //   for (int j = i + 1; j < n; j++)
  //   {
  //     pomocna = matrica[i][j];
  //     matrica[i][j] = matrica[j][i];
  //     matrica[j][i] = pomocna;
  //   }
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%d \t", matrica[i][j]);
  //   }
  //   printf("\n");
  // }

  //////////////////////////////////////////
  // int n, matrica[10][10], x;
  // printf("Unesi x: \n");
  // scanf("%d", &x);
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi el matrice: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("[%d][%d]: ", i, j);
  //     scanf("%d", &matrica[i][j]);
  //   }
  // }
  // printf("Matrica: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%d \t", matrica[i][j]);
  //   }
  //   printf("\n");
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     if (i > j)
  //     {
  //       matrica[i][j] += x;
  //     }
  //     if (i < j)
  //     {
  //       matrica[i][j] += 2 * x;
  //     }
  //   }
  // }
  // printf("Nova matrica: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%d \t", matrica[i][j]);
  //   }
  //   printf("\n");
  // }

  //////////////////////////////////////////
  // int n, matrica[10][10], t;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi el matrice: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("[%d][%d]: ", i, j);
  //     scanf("%d", &matrica[i][j]);
  //   }
  // }
  // printf("Matrica: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%d \t", matrica[i][j]);
  //   }
  //   printf("\n");
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   if (matrica[i][i] != 0)
  //   {
  //     t = matrica[i][i];
  //     for (int j = 0; j < n; j++)
  //     {
  //       matrica[i][j] /= t;
  //     }
  //   }
  //   else
  //   {
  //     for (int j = 0; j < n; j++)
  //     {
  //       matrica[i][j] = 0;
  //     }
  //     matrica[i][i] = 1;
  //   }
  // }
  // printf("Nova matrica: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%d \t", matrica[i][j]);
  //   }
  //   printf("\n");
  // }

  //////////////////////////////////////////
  // int vrsta, kolona, matrica[10][10], s = 0, trazenaVrsta;
  // printf("Unesi vrstu: \n");
  // scanf("%d", &vrsta);
  // printf("Unesi kolonu: \n");
  // scanf("%d", &kolona);

  // printf("Unesi el. matrice: \n");
  // unosMatrice(matrica, vrsta, kolona);

  // printf("Ispis matrice: \n");
  // ispisMatrice(matrica, vrsta, kolona);

  // printf("Unesite vrstu koju zelite da izracunta: \n");
  // scanf("%d", &trazenaVrsta);
  // for (int j = 0; j < kolona; j++)
  // {
  //   s += matrica[trazenaVrsta - 1][j];
  // }
  // printf("Zbir elemenata %d vrste je: %d", trazenaVrsta, s);

  //////////////////////////////////////////
  // int n, matrica[10][10], s = 0;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // printf("Unesi el matrice: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("Unesite elemente matrice [%d][%d]: ", i, j);
  //     scanf("%d", &matrica[i][j]);
  //   }
  // }
  // printf("Ispis  matrice: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%d \t", matrica[i][j]);
  //   }
  //   printf("\n");
  // }
  // printf("Suma elemenata vrste: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     s += matrica[i][j];
  //   }
  //   printf("%d ",s);
  // }

  //////////////////////////////////////////
  // int n, matrica[10][10], sgd = 0, ssd = 0;
  // printf("Unesi n: ");
  // scanf("%d", &n);
  // printf("Unesi el matrice: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("Unesite elemente matrice [%d][%d]: ", i, j);
  //     scanf("%d", &matrica[i][j]);
  //   }
  // }
  // printf("Ispis  matrice: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%d \t", matrica[i][j]);
  //   }
  //   printf("\n");
  // }
  // printf("Elementi glavne dijagonale: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d \t", matrica[i][i]);
  //   sgd += matrica[i][i];
  // }
  // printf("\nSuma elemenata glane dijagonale je: %d", sgd);
  // printf("\nElementi sporedne dijagonale: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d \t", matrica[i][n - i - 1]);
  //   ssd += matrica[i][n - i - 1];
  // }
  // printf("\nSuma elemenata donje dijagonale je: %d", ssd);

  //////////////////////////////////////////
  // int vrsta, kolona, matricaA[10][10], matricaB[10][10];
  // printf("Unesi vrstu: ");
  // scanf("%d", &vrsta);
  // printf("Unesi kolona: ");
  // scanf("%d", &kolona);

  // printf("Unose elemenata matrice A:\n ");
  // unosMatrice(matricaA, vrsta, kolona);
  // printf("Unose elemenata matrice B: \n");
  // unosMatrice(matricaB, vrsta, kolona);

  // printf("Ispis matrice A: \n");
  // ispisMatrice(matricaA, vrsta, kolona);
  // printf("Ispis matrice B: \n");
  // ispisMatrice(matricaA, vrsta, kolona);

  // printf("Zbir dve matrice: \n");
  // for (int i = 0; i < vrsta; i++)
  // {
  //   for (int j = 0; j < kolona; j++)
  //   {
  //     printf("%d \t", matricaA[i][j] + matricaB[i][j]);
  //   }
  //   printf("\n");
  // }

  //////////////////////////////////////////
  // int vrsta, kolona, matrica[10][10], sumaParnih = 0, jednakNuli = 0;
  // printf("Unesi vrstu: ");
  // scanf("%d", &vrsta);
  // printf("Unesi kolona: ");
  // scanf("%d", &kolona);

  // unosMatrice(matrica, vrsta, kolona);
  // printf("Elementi matrice: \n");
  // for (int i = 0; i < vrsta; i++)
  // {
  //   for (int j = 0; j < kolona; j++)
  //   {
  //     printf("[%d][%d]: %d \t", i, j, matrica[i][j]);
  //   }
  //   printf("\n");
  // }

  // for (int i = 0; i < vrsta; i++)
  // {
  //   for (int j = 0; j < kolona; j++)
  //   {
  //     if (matrica[i][j] % 2 == 0)
  //       sumaParnih += matrica[i][j];
  //     if (matrica[i][j] == 0)
  //       jednakNuli++;
  //   }
  // }
  // printf("Suma parnih elemenata je %d \n", sumaParnih);
  // printf("Broj elemenata jednak nuli je %d ", jednakNuli);

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
