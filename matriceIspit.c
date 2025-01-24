#include <stdio.h>
#include <math.h>
#define MAX 100
#include <stdlib.h>

// void unosMatrice(int matrica[10][10], int vrsta, int kolona)
// {
//   for (int i = 0; i < vrsta; i++)
//   {
//     for (int j = 0; j < kolona; j++)
//     {
//       printf("Unesi el matrice[%d][%d]: ", i, j);
//       scanf("%d", &matrica[i][j]);
//     }
//   }
// }
// void ispisMatrice(int matrica[10][10], int vrsta, int kolona)
// {
//   for (int i = 0; i < vrsta; i++)
//   {
//     for (int j = 0; j < kolona; j++)
//     {
//       printf("%d \t", matrica[i][j]);
//     }
//     printf("\n");
//   }
// }

////////////////////////////////////////////
// void unosMatrice(int matrica[10][10], int vrsta, int kolona)
// {
//   for (int i = 0; i < vrsta; i++)
//   {
//     for (int j = 0; j < kolona; j++)
//     {
//       printf("Elementi matrice[%d][%d]: ", i, j);
//       scanf("%d", &matrica[i][j]);
//     }
//   }
// }
// void ispisMatrice(int matrica[10][10], int vrsta, int kolona)
// {
//   for (int i = 0; i < vrsta; i++)
//   {
//     for (int j = 0; j < kolona; j++)
//     {
//       printf("%d \t", matrica[i][j]);
//     }
//     printf("\n");
//   }
// }

////////////////////////////////////////////

// void unosMatrice(int matrica[10][10], int vrsta, int kolona)
// {
//   for (int i = 0; i < vrsta; i++)
//   {
//     for (int j = 0; j < kolona; j++)
//     {
//       printf("Unesi el matrice[%d][%d]: ", i, j);
//       scanf("%d", &matrica[i][j]);
//     }
//   }
// }
// void ispisMatrice(int matrica[10][10], int vrsta, int kolona)
// {
//   for (int i = 0; i < vrsta; i++)
//   {
//     for (int j = 0; j < kolona; j++)
//     {
//       printf("%d\t", matrica[i][j]);
//     }
//     printf("\n");
//   }
// }

////////////////////////////////////////////

// void unosMatrice(int matrica[10][10], int vrsta, int kolona)
// {
//   for (int i = 0; i < vrsta; i++)
//   {
//     for (int j = 0; j < kolona; j++)
//     {
//       printf("Unesi el matrice[%d][%d]: ", i, j);
//       scanf("%d", &matrica[i][j]);
//     }
//   }
// }
// void ispisMatrice(int matrica[10][10], int vrsta, int kolona)
// {
//   for (int i = 0; i < vrsta; i++)
//   {
//     for (int j = 0; j < kolona; j++)
//     {
//       printf("%d\t", matrica[i][j]);
//     }
//     printf("\n");
//   }
// }
// void nisuPopravljeni(int matrica[10][10], int vrsta, int kolona)
// {
//   for (int i = 0; i < vrsta; i++)
//   {
//     int popravljeni = 1;
//     for (int j = 0; j < kolona; j++)
//     {
//       if (matrica[i][j] == 2)
//       {
//         popravljeni = 0;
//         break;
//       }
//       if (popravljeni == 0)
//       {
//         printf("\nAutomobil %d nije popravljen u potpunosti.", i + 1);
//       }
//     }
//   }
// }
// void najcescijiKvar(int matrica[10][10], int vrsta, int kolona)
// {
//   int maxKvarova = 0, jmax = -1, brojac = 0;
//   for (int j = 0; j < kolona; j++)
//   {
//     for (int i = 0; i < vrsta; i++)
//     {
//       if (matrica[i][j] > 0)
//       {
//         brojac++;
//       }
//     }
//     if (brojac > maxKvarova)
//     {
//       maxKvarova = brojac;
//       jmax = j;
//     }
//   }
//   printf("Najcesciji kvar je %d i on se pojavio %d puta", jmax + 1, maxKvarova);
// }

////////////////////////////////////////////
void unosMatrice(int matrica[MAX][MAX], int vrsta, int kolona)
{
  for (int i = 0; i < vrsta; i++)
  {
    for (int j = 0; j < kolona; j++)
    {
      printf("Element matrice[%d][%d]: ", i, j);
      scanf("%d", &matrica[i][j]); 
    }
  }
}

void ispisMatrice(int matrica[MAX][MAX], int vrsta, int kolona)
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
  int matrica[MAX][MAX], n, vrsta, kolona, pom[MAX][MAX], rezultat[MAX][MAX];

  printf("Unesi broj vrsta: ");
  scanf("%d", &vrsta);
  printf("Unesi broj kolona: ");
  scanf("%d", &kolona);
  printf("Unesi n (stepen matrice): ");
  scanf("%d", &n);

  printf("Unesi elemente matrice:\n");
  unosMatrice(matrica, vrsta, kolona);

  for (int step = 0; step < n; step++)
  {
    for (int i = 0; i < vrsta; i++)
    {
      for (int j = 0; j < kolona; j++)
      {
        pom[i][j] = 0;
        for (int k = 0; k < kolona; k++)
        {
          pom[i][j] += rezultat[i][k] * matrica[k][j];
        }
      }
    }

    for (int i = 0; i < vrsta; i++)
    {
      for (int j = 0; j < kolona; j++)
      {
        rezultat[i][j] = pom[i][j];
      }
    }
  }

  printf("\nMatrica podignuta na stepen %d je:\n", n);
  ispisMatrice(rezultat, vrsta, kolona);

  /////////////////////////////////////////////////

  // float matrica[MAX][MAX], vrsta, kolona;
  // printf("Unesi vrstu: ");
  // scanf("%d", &vrsta);
  // printf("Unesi kolona: ");
  // scanf("%d", &kolona);
  // unosMatrice(matrica, vrsta, kolona);
  // ispisMatrice(matrica, vrsta, kolona);

  // for (int i = 1; i < vrsta; i++)
  // {
  //   for (int j = 0; j < i; j++)
  //   {
  //     matrica[i][j] = 0;
  //   }
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%.2f ", matrica[i][j]);
  //   }
  //   printf("\n");
  // }

  /////////////////////////////////////////////////

  // int vrsta, kolona, matrica[10][10];
  // int maxv[MAX], minv[MAX], maxk[MAX], mink[MAX];
  // printf("Unesi vrstu: ");
  // scanf("%d", &vrsta);
  // printf("Unesi kolona: ");
  // scanf("%d", &kolona);
  // printf("Unesi matricu: \n");
  // unosMatrice(matrica, vrsta, kolona);
  // printf("Matricu: \n");
  // ispisMatrice(matrica, vrsta, kolona);
  // nisuPopravljeni(matrica, vrsta, kolona);
  // najcescijiKvar(matrica, vrsta, kolona);

  /////////////////////////////////////////////////

  // int vrsta, kolona, matrica[10][10], k1, k2, pomocna;
  // int maxv[MAX], minv[MAX], maxk[MAX], mink[MAX];
  // printf("Unesi vrstu: ");
  // scanf("%d", &vrsta);
  // printf("Unesi kolona: ");
  // scanf("%d", &kolona);
  // printf("Unesi prvu kolonu: ");
  // scanf("%d", &k1);
  // printf("Unesi drugu kolonu: ");
  // scanf("%d", &k2);
  // printf("Unesi matricu: \n");
  // unosMatrice(matrica, vrsta, kolona);
  // printf("Matricu: \n");
  // ispisMatrice(matrica, vrsta, kolona);

  // for (int i = 0; i < vrsta; i++)
  // {
  //   pomocna = matrica[i][k1 - 1];
  //   matrica[i][k1 - 1] = matrica[i][k2 - 1];
  //   matrica[i][k2 - 1] = pomocna;
  // }
  // printf("Zamenjena matrica: \n");
  // ispisMatrice(matrica, vrsta, kolona);

  /////////////////////////////////////////////////
  // int vrsta, kolona, matrica[10][10];
  // int maxv[MAX], minv[MAX], maxk[MAX], mink[MAX];
  // printf("Unesi vrstu: ");
  // scanf("%d", &vrsta);
  // printf("Unesi kolona: ");
  // scanf("%d", &kolona);
  // printf("Unesi matricu: \n");
  // unosMatrice(matrica, vrsta, kolona);
  // printf("Matricu: \n");
  // ispisMatrice(matrica, vrsta, kolona);

  // for (int i = 0; i < vrsta; i++)
  // {
  //   minv[i] = matrica[i][0];
  //   maxv[i] = matrica[i][0];
  //   mink[i] = matrica[0][i];
  //   maxk[i] = matrica[0][i];
  //   for (int j = 1; j < kolona; j++)
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
  // for (int i = 0; i < vrsta; i++)
  // {
  //   printf("%d ", maxv[i]);
  // }
  // printf("\nNajmanji u vrstama: ");
  // for (int i = 0; i < vrsta; i++)
  // {
  //   printf("%d ", minv[i]);
  // }
  // printf("\nNajveci u kolonama: ");
  // for (int i = 0; i < kolona; i++)
  // {
  //   printf("%d ", maxk[i]);
  // }
  // printf("\nNajmanji u kolonama: ");
  // for (int i = 0; i < kolona; i++)
  // {
  //   printf("%d ", mink[i]);
  // }

  //////////////////////////////////////////
  // int matrica[10][10], vrsta, kolona, s = 0, brojVrste;
  // printf("Unesi vrstu: ");
  // scanf("%d", &vrsta);
  // printf("Unesi kolona: ");
  // scanf("%d", &kolona);
  // printf("Unesi broj vrste koju trazis: ");
  // scanf("%d", &brojVrste);
  // printf("Unesi matricu: \n");
  // unosMatrice(matrica, vrsta, kolona);
  // printf("Matrica: \n");
  // ispisMatrice(matrica, vrsta, kolona);
  // for (int i = 0; i < kolona; i++)
  // {
  //   s += matrica[brojVrste - 1][i];
  // }
  // printf("Suma el vrste koju trazite %d", s);

  ////////////////////////////////////////////

  // int matrica[10][10], vrsta, kolona, s = 0;
  // printf("Unesi vrstu: ");
  // scanf("%d", &vrsta);
  // printf("Unesi kolona: ");
  // scanf("%d", &kolona);
  // printf("Unesi matricu: \n");
  // unosMatrice(matrica, vrsta, kolona);
  // printf("Matrica: \n");
  // ispisMatrice(matrica, vrsta, kolona);
  // printf("Suma svake vrste: \n");
  // for (int i = 0; i < vrsta; i++)
  // {
  //   for (int j = 0; j < kolona; j++)
  //   {
  //     s += matrica[i][j];
  //   }
  //   printf("%d \t", s);
  // }

  ////////////////////////////////////////////

  // int vrsta, kolona, matrica[10][10];
  // int sumaEl = 0, sumaElSporedne = 0;
  // printf("Unesi vrstu: ");
  // scanf("%d", &vrsta);
  // printf("Unesi kolonu: ");
  // scanf("%d", &kolona);
  // printf("Unesi matricu: \n");
  // unosMatrice(matrica, vrsta, kolona);
  // printf("Matrica: \n");
  // ispisMatrice(matrica, vrsta, kolona);
  // for (int i = 0; i < vrsta; i++)
  // {
  //   for (int j = 0; j < kolona; j++)
  //   {
  //     if (matrica[i][j] == matrica[i][i])
  //     {
  //       sumaEl += matrica[i][j];
  //     }
  //   }
  // }
  // printf("Suma el glavne dijagonale %d", sumaEl);

  // for (int i = 0; i < vrsta; i++)
  // {
  //   for (int j = 0; j < kolona; j++)
  //   {
  //     if (matrica[i][j] == matrica[i][kolona - i - 1])
  //     {
  //       sumaElSporedne += matrica[i][j];
  //     }
  //   }
  // }
  // printf("\nSuma el sporedne dijagonale %d", sumaElSporedne);

  ////////////////////////////////////////////

  return 0;
}