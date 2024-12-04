#include <stdio.h>
#include <math.h>
#define MAX 100

int main()
{
  int i, j, n, pomocna, niz[MAX];
  printf("Unesi n: \n");
  scanf("%d", &n);
  printf("Unesi elemente: \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &niz[i]);
  }
  for (i = n - 1; i > 0; i--)
  {
    for (j = 0; j < i; j++)
    {
      if (niz[j] > niz[j + 1])
      {
        pomocna = niz[j];
        niz[j] = niz[j + 1];
        niz[j + 1] = pomocna;
      }
    }
  }
  printf("Sortirani niz: ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", niz[i]);
  }

  ////////////////////////////////////////////////
  // int i, j, n, pomocna, niz[MAX];
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Elementi niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d ", &niz[i]);
  // }
  // for (i = 0; i < n; i++)
  // {
  //   for (j = i + 1; j < n; j++)
  //   {
  //     if (niz[i] > niz[j])
  //     {
  //       pomocna = niz[i];
  //       niz[i] = niz[j];
  //       niz[j] = pomocna;
  //     }
  //   }
  // }
  // printf("Sortirani niz: \n");
  // for (i = 0; i < n; i++)
  // {
  //   printf("%d ", niz[i]);
  // }

  ////////////////////////////////////////////////
  // int n, niz[MAX], istiElementi;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // printf("Novi niza: ");
  // for (int i = 0; i < n; i++)
  // {
  //   istiElementi = 0;
  //   for (int j = 0; j < i; j++)
  //   {
  //     if (niz[i] == niz[j])
  //     {
  //       istiElementi = 1;
  //       break;
  //     }
  //   }
  //   if (!istiElementi)
  //   {
  //     printf("%d ", niz[i]);
  //   }
  // }

  ////////////////////////////////////////////////
  // int nizA[MAX], n, pom;
  // printf("Unesi duzinu niza: \n");
  // scanf("%d", &n);
  // printf("Elementi niza A: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &nizA[i]);
  // }
  // pom = nizA[0];
  // for (int i = 0; i < n - 1; i++)
  // {
  //   nizA[i] = nizA[i + 1];
  // }
  // nizA[n - 1] = pom;
  // printf("Novi niz: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d", nizA[i]);
  // }

  ////////////////////////////////////////////////
  // int nizA[MAX], n;
  // printf("Unesi duzinu niza: \n");
  // scanf("%d", &n);
  // printf("Elementi niza A: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &nizA[i]);
  // }
  // printf("Elementi niza B: \n");
  // for (int i = n - 1; i >= 0; i--)
  // {
  //   printf("%d ", nizA[i]);
  // }

  ////////////////////////////////////////////////
  // int n, niz[MAX], trazen = 0, trazeniBroj, brojPonavljanja = 0;
  // printf("Unesi duzinu niza: \n");
  // scanf("%d", &n);
  // printf("Elementi niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // printf("Unesi trazeni broj: \n");
  // scanf("%d", &trazeniBroj);
  // for (int i = 1; i < n; i++)
  // {
  //   if (niz[i] == trazeniBroj)
  //   {
  //     trazen = 1;
  //     brojPonavljanja++;
  //   }
  // }
  // if (trazen)
  // {
  //   printf("Vrednost %d se nalazi u nizu %d puta", trazeniBroj, brojPonavljanja);
  // }
  // else
  // {
  //   printf("Vrednost se ne nalazi u nizu.");
  // }

  ////////////////////////////////////////////////
  // int n, niz[MAX], fibonacijev = true, max;
  // printf("Unesi duzinu niza (Najmanje 2): \n");
  // scanf("%d", &n);
  // while (n < 3)
  // {
  //   printf("Duzina mora biti veca od 3: \n");
  //   scanf("%d", &n);
  // }
  // printf("Elementi niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // for (int i = 2; i < n; i++)
  // {
  //   if (niz[i] != niz[i - 1] + niz[i - 2])
  //   {
  //     fibonacijev = false;
  //     break;
  //   }
  // }
  // if (fibonacijev)
  // {
  //   printf("Niz je fibonacijev");
  // }
  // else
  // {
  //   printf("Niz nije fibonacijev");
  // }

  ////////////////////////////////////////////////
  // int n, niz[MAX], parni = 0, max;
  // printf("Unesi duzinu niza (Najmanje 2): \n");
  // scanf("%d", &n);
  // while (n < 2)
  // {
  //   printf("Duzina mora biti veca od 2: \n");
  //   scanf("%d", &n);
  // }
  // printf("Elementi niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // max = niz[0];
  // printf("Parne pozicije: ");
  // for (int i = 0; i < n; i++)
  // {
  //   if (niz[i] % 2 == 0)
  //   {
  //     printf("%d ", i);
  //     if (niz[i] > max)
  //     {
  //       max = niz[i];
  //     }
  //   }
  // }
  // printf("MAX = %d", max);

  ////////////////////////////////////////////////
  // int n, niz[MAX], parni = 0, min;
  // printf("Unesi duzinu niza: \n");
  // scanf("%d", &n);
  // printf("Elementi niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  //   if (niz[i] % 2 == 0)
  //   {
  //     if (!parni || niz[i] < min){
  //       min = niz[i];
  //       parni = 1;
  //     }
  //   }
  // }
  // if (parni)
  // {
  //   printf("Najmanji parni broj je %d", min);
  // }else
  // {
  //   printf("Niz nema parnih brojeva");
  // }

  ////////////////////////////////////////////////
  // int n, A[MAX], B[MAX], zbir = 0;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza A: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &A[i]);
  //   zbir += A[i];
  //   B[i] = zbir;
  // }
  // printf("Elementi niza B: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", B[i]);
  // }

  ////////////////////////////////////////////////
  // int n, A[MAX], B[MAX], j = 0, arSredina = 0, zbir = 0;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza A: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &A[i]);
  //   zbir += A[i];
  // }
  // arSredina = zbir / n;
  // printf("Unesi elemente niza B: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   if (A[i] > arSredina)
  //   {
  //     B[j] = A[i];
  //     printf("%d ", B[j]);
  //     j++;
  //   }
  // }

  ////////////////////////////////////////////////
  // int n, A[MAX], B[MAX], C[MAX];
  // int j = 0, k = 0;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza A: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &A[i]);
  //   if (A[i] < 0)
  //   {
  //     B[j] = A[i];
  //     j++;
  //   }
  //   else
  //   {
  //     C[k] = A[i];
  //     k++;
  //   }
  // }
  // printf("Elementi niza B: ");
  // for (int i = 0; i < j; i++)
  // {
  //   printf("%d ", B[i]);
  // }
  // printf("Elementi niza C: \n");
  // for (int i = 0; i < k; i++)
  // {
  //   printf("%d ", C[i]);
  // }

  ////////////////////////////////////////////////
  // int n, A[MAX], B[MAX], C[MAX];
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza A: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &A[i]);
  // }
  // printf("Unesi elemente niza B: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &B[i]);
  // }
  // printf("Elementi niza C: \n ");
  // for (int i = 0; i < n; i++)
  // {
  //   if (A[i] > B[i])
  //   {
  //     C[i] = B[i];
  //   }
  //   else if (B[i] > A[i])
  //   {
  //     C[i] = A[i];
  //   }
  //   else
  //   {
  //     C[i] = 0;
  //   }
  //   printf("%d", C[i]);
  // }

  ////////////////////////////////////////////////
  // int n, k = 0, m, A[MAX], B[MAX], C[MAX];
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi m: \n");
  // scanf("%d", &m);
  // printf("Unesi elemente niza A: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &A[i]);
  // }
  // printf("Unesi elemente niza B: \n");
  // for (int i = 0; i < m; i++)
  // {
  //   scanf("%d", &B[i]);
  // }
  // printf("Elementi niza C: \n ");
  // for (int i = 0; i < n; i++)
  // {
  //   if (A[i] % 2 == 0)
  //   {
  //     C[k] = A[i];
  //     k++;
  //   }
  // }
  // for (int i = 0; i < m; i++)
  // {
  //   if (B[i] % 2 == 0)
  //   {
  //     C[k] = B[i];
  //     k++;
  //   }
  // }
  // for (int i = 0; i < k; i++)
  // {
  //   printf("%d \t", C[i]);
  // }

  ////////////////////////////////////////////////
  // int max = 5, A[5], B[5], C[5];
  // printf("Elementi niza A: \n");
  // for (int i = 0; i < 5; i++)
  // {
  //   scanf("%d", &A[i]);
  // }
  // printf("Elementi niza B: \n");
  // for (int i = 0; i < 5; i++)
  // {
  //   scanf("%d", &B[i]);
  // }
  // printf("Elementi niza C: \n");
  // for (int i = 0; i < 5; i++)
  // {
  //   C[i] = A[i] + B[max - 1 - i];
  //   printf("%d \t", C[i]);
  // }

  ////////////////////////////////////////////////
  // int n;
  // float A[5], B[5], C[5];
  // printf("Elementi niza A: \n");
  // for (int i = 0; i < 5; i++)
  // {
  //   scanf("%f", &A[i]);
  // }
  // printf("Elementi niza B: \n");
  // for (int i = 0; i < 5; i++)
  // {
  //   scanf("%f", &B[i]);
  // }
  // printf("Elementi niza C: \n");
  // for (int i = 0; i < 5; i++)
  // {
  //   C[i] = pow(A[i], 3) / 3 + 2 * A[i] * B[i];
  //   printf("%.2f \t", C[i]);
  // }

  ////////////////////////////////////////////////
  //  int n, A[MAX], B[MAX], C[MAX];
  //   printf("Unesi n: \n");
  //   scanf("%d", &n);
  //   printf("Elementi niza A: \n");
  //   for (int i = 0; i < n; i++)
  //   {
  //     scanf("%d", &A[i]);
  //   }
  //   printf("Elementi niza B: \n");
  //   for (int i = 0; i < n; i++)
  //   {
  //     scanf("%d", &B[i]);
  //   }
  //   printf("Elementi niza C: \n");
  //   for (int i = 0; i < n; i++)
  //   {
  //     C[i] = A[i]+B[i];
  //     printf("%d ",C[i]);
  //   }

  ////////////////////////////////////////////////
  // int n, m, A[MAX], B[MAX], C[MAX];
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi m: \n");
  // scanf("%d", &m);
  // printf("Unesi elemente niza A: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &A[i]);
  // }
  // printf("Unesi elemente niza B: \n");
  // for (int i = 0; i < m; i++)
  // {
  //   scanf("%d", &B[i]);
  // }
  // printf("Elementi niza C(A+B): \n ");
  // for (int i = 0; i < n + m; i++)
  // {
  //   if (i < n)
  //   {
  //     C[i] = A[i];
  //   }
  //   else
  //   {
  //     C[i] = B[i - n];
  //   }
  //   printf("%d", C[i]);
  // }

  ////////////////////////////////////////////////
  // int n, A[MAX], B[MAX], proizvod = 0;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza A: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &A[i]);
  // }
  // printf("Unesi elemente niza B: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &B[i]);
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   proizvod += A[i] * B[i];
  // }
  // printf("Skalarni proizvod niza je: %d \n", proizvod);

  ////////////////////////////////////////////////
  //   int n,niz[MAX], sumaParnih = 0, sumaNeparnih = 0;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  // scanf("%d", &niz[i]);
  //   if (i % 2 == 0)
  //   {
  //     sumaParnih += niz[i];
  //   }else{
  //     sumaNeparnih += niz[i];
  //   }
  // }
  // printf("Suma el. s parnim indeksima: %d \n", sumaParnih);
  // printf("Suma el. s neparnim indeksima: %d \n", sumaNeparnih);

  ////////////////////////////////////////////////
  // int n,niz[MAX], sumaParnih = 0, sumaNeparnih = 0;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  //   if (niz[i] % 2 == 0)
  //   {
  //     sumaParnih += niz[i];
  //   }else{
  //     sumaNeparnih += niz[i];
  //   }
  // }
  // printf("Suma parnih el: %d \n", sumaParnih);
  // printf("Suma neparnih el: %d \n", sumaNeparnih);

  ////////////////////////////////////////////////
  // int niz[MAX],k = 0, n, suma=0;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza duzine %d \n", n);
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  //   if (niz[i] % 3 == 0)
  //   {
  //     suma += niz[i];
  //     k++;
  //   }
  // }
  // printf("Aritmeticka sr. elemenata deljivih s 3 je %d", suma/k);
  ////////////////////////////////////////////////
  // int niz[MAX], n, suma = 0;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  //   suma += niz[i];
  // }
  // printf("Aritmeticka sredina niza je %d", suma/n);
  ////////////////////////////////////////////////
  // int n, niz[MAX];
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // printf("Obrnuti niz:");
  // for (int i = n-1; i >= 0; i--)
  // {
  //   printf(" %d", niz[i]);
  // }
  ////////////////////////////////////////////////
  // int niz[MAX], n, i;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi elemente niza duzine %d: \n", n);
  // for (i = 0; i < n; i++)
  // {
  //   scanf("%d", &niz[i]);
  // }
  // printf("Uneti niz je: ");
  // for (i = 0; i < n; i++)
  // {
  //   printf("%d ", niz[i]);
  // }
  return 0;
}