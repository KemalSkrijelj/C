#include <stdio.h>
#include <math.h>

int main()
{
  int vrsta, kolona, k = 0;
  printf("Unesi vrstu: \n");
  scanf("%d", &vrsta);
  printf("Unesi kolona: \n");
  scanf("%d", &kolona);

  int matrica[vrsta][kolona];
  int suma = 0;
  int brojElemenata = vrsta * kolona;

  printf("Unesi elemente matrice: \n ");
  for (int i = 0; i < vrsta; i++)
  {
    for (int j = 0; j < kolona; j++)
    {
      printf("[%d][%d]: ", i, j);
      scanf("%d  ", &matrica[i][j]);
      suma += matrica[i][j];
    }
  }

  float srednjaVrednsot = suma / brojElemenata;
  int niz[brojElemenata];
  int minEl = matrica[0][0];

  printf("Uneta matrica je: \n");
  for (int i = 0; i < vrsta; i++)
  {
    for (int j = 0; j < kolona; j++)
    {
      printf("%d ", matrica[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < vrsta; i++)
  {
    for (int j = 0; j < kolona; j++)
    {
      if (matrica[i][j] > srednjaVrednsot)
      {
        niz[k] = matrica[i][j];
        k++;
      }
      if (matrica[i][j] < minEl)
      {
        minEl = matrica[i][j];
      }
      
    }
  }
  for (int i = 0; i < k; i++)
  {
    printf("Elementi veci od srednje vrednosti: %d \n", niz[i]);
  }

  printf(" \n Srednja vrednost: %.2f", srednjaVrednsot);
  printf(" \n Minimalni element matrice: %d", minEl);
  return 0;
}
