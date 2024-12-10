#include <stdio.h>
#include <math.h>
#define MAX 100

// int niz(int n)
// {
//   if (n == 0)
//   {
//     return 0.0;
//   }
//   if (n == 1)
//   {
//     return 1.0;
//   }
//   double Ai = niz(n - 1);
//   return (1.0 / Ai) - ((Ai + 3.0) / 2.0);
// }

int main()
{
  int n, pronadjen = 0, niz[MAX];
  printf("Unesi duzinu niza n: \n");
  scanf("%d", &n);
  printf("Unesi elemente niza: \n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &niz[i]);
  }
  for (int i = 0; i < n; i++)
  {
    int sumaLevo = 0;
    int sumaDesno = 0;
    for (int j = 0; j < i; j++)
    {
      sumaLevo += niz[j];
    }
    for (int k = i + 1; k < n; k++)
    {
      sumaDesno += niz[k];
    }
    if (sumaDesno == sumaLevo)
    {
      printf("Niz je usredjnen na %d indeksu", i);
      pronadjen = 1;
    }
  }
  if (pronadjen == 0)
  {
    printf("Nema usredjenih indeksa u nizu.");
  }
  

  ////////////////////////////////////
  // for (int i = 0; i < 20; i++)
  // {
  //   printf("\na_%d = %d", i, niz(i));
  // }
}