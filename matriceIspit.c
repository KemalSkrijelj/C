#include <stdio.h>
#include <math.h>
#define MAX 100

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
void unosMatrice(int matrica[10][10], int vrsta, int kolona)
{
  for (int i = 0; i < vrsta; i++)
  {
    for (int j = 0; j < kolona; j++)
    {
      printf("Elementi matrice[%d][%d]: ", i, j);
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