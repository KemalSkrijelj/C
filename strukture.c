#include <stdio.h>
#include <string.h>
#define MAX 100

// typedef struct zaposleni
// {
//   char imePrezime[30];
//   char radnoMesto[15];
//   float plata;
// } ZAPOSLENI;

typedef struct roba
{
  int barkod[13];
  char naziv[20];
  float cena;
  int kolicina;
} ROBA;
typedef struct prodaja
{
  int barkod[13];
  int kolicina;
} PRODAJA;

int main()
{
  int n, m;
  float suma = 0.0;

  ROBA r[100];
  PRODAJA p[100];

  printf("Unesi broj proizvoda: \n");
  scanf("%d", &n);
  printf("Unesi broj rekorda prodaje: \n");
  scanf("%d", &m);

  printf("Unesite podatke o artiklima: \n");
  for (int i = 0; i < n; i++)
  {
    printf("Barkod: \n");
    scanf("%d", &r[i].barkod);
    printf("Naziv: \n");
    scanf("%s", &r[i].naziv);
    printf("Cena: \n");
    scanf("%f", &r[i].cena);
    printf("Kolicina: \n");
    scanf("%d", &r[i].kolicina);
  }
  printf("Unesite podatke o prodajama: \n");
  for (int j = 0; j < m; j++)
  {
    printf("Barkod: \n");
    scanf("%d", &p[j].barkod);
    printf("Kolicina: \n");
    scanf("%d", &p[j].kolicina);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (r[i].barkod == p[j].barkod)
      {
        suma += r[i].cena * p[j].kolicina;
        p[i].kolicina -= p[j].kolicina;
      }
    }
  }
    for (int i = 0; i < n; i++)
  {
    printf("%d\t %s \t%.2f", r[i].barkod, r[i].naziv, r[i].kolicina);
  }
  printf("Prodavnica je ostvarila prihod od %.2f dinara", suma);


  ///////////////////
  // int i, n;
  // ZAPOSLENI z[MAX];
  // char c;
  // printf("Unesi broj zaposlenih u firmi: ");
  // scanf("%d", &n);
  // printf("Unesite podatke o zaposlenima: \n");
  // for (i = 0; i < n; i++)
  // {
  //   scanf("%s", &z[i].imePrezime);
  //   scanf("%s", &z[i].radnoMesto);
  //   scanf("%f", &z[i].plata);
  // }

  // for (i = 0; i < n; i++)
  // {
  //   if (strcmp(z[i].radnoMesto, "direktor") == 0)
  //   {
  //     z[i].plata = 1.1 * z[i].plata;
  //   }
  // }

  // int j;
  // for (i = 0; i < n; i++)
  // {
  //   for (j = i + 1; j < n; j++)
  //   {
  //     if (z[i].plata > z[j].plata)
  //     {
  //       ZAPOSLENI pom = z[i];
  //       z[i] = z[j];
  //       z[j] = pom;
  //     }
  //   }
  // }

  // for (i = 0; i < n; i++)
  // {
  //   printf("%s\t %s \t%.2f", z[i].imePrezime, z[i].radnoMesto, z[i].plata);
  // }

  return 0;
}