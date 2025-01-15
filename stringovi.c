#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

// void ispisiNisku(const char *niska){
//   printf("Uneta niska: %s \n", niska);
// }
/////////////////////////////////
// void Unesi(char s[]){
//   printf("Unesi rec: ");
//   fgets(s,100,stdin);
// }
/////////////////////////////////

// int duzinaStringa(char s[])
// {
//   int i = 0;
//   while (s[i] != '\0')
//   {
//     i++;
//   }
//   return i;
// }
// void kopijaStringa(char s1[], char s2[])
// {
//   int i = 0;
//   while (s2[i] != '\0')
//   {
//     s1[i] = s2[i];
//     i++;
//   }
//   s1[i] = '\0';
// }
// void nadoveziString(char s1[], char s2[])
// {
//   int i = 0;
//   while (s1[i] != '\0')
//   {
//     i++;
//   }
//   int j = 0;
//   while (s2[j] != '\0')
//   {
//     s1[i] = s2[j];
//     i++;
//     j++;
//   }
//   s1[i] = '\0';
// }
////////////////////////////////////
void Ukloni(char s[], char c)
{
  int i, j = 0;
  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] != c)
    {
      s[j] = s[i];
      j++;
    }
  }
  s[j] = '\0';
}
int main()
{
  char s[MAX];
  char c;
  printf("Unesi string: ");
  gets(s);
  printf("Unesi zeljeni karakter: ");
  scanf("%c", &c);
  Ukloni(s, c);
  printf("\n Novi niz: %s", s);
  /////////////////////////////////
  // char s1[MAX], s2[MAX];
  // printf("Unesi prvi string: ");
  // fgets(s1,MAX, stdin);
  // printf("Unesi drugi string: ");
  // fgets(s2,MAX, stdin);
  // printf("Duzina prvog stringa: %d\n", duzinaStringa(s1));
  // printf("Duzina drugog stringa: %d\n", duzinaStringa(s2));

  /////////////////////////////////
  // char rec[MAX];
  // Unesi(rec);
  // printf("Uneta rec: %s", rec);

  /////////////////////////////////

  // char niska[100];
  // printf("Unesi nisku: ");
  // gets(niska);
  // ispisiNisku(niska);

  /////////////////////////////////
  // char someString[] = "Hack The Planet";

  // printf("Some string:  %s \n", someString);
  // printf("Value: %c \n", someString[0]);
  // printf("Value: %c \n", someString[3]);
  // printf("Value: %c \n", someString[4]);
  // printf("Value: %c \n", someString[5]);

  // someString[0] = 'W';
  // printf("Value: %c \n", someString[0]);
  // printf("String size: %d \n", sizeof(someString));
  // for (int i = 0; i < sizeof(someString); i++)
  // {
  //   printf("Char atm: %c \n", someString[i]);
  // }
  /////////////////////////////////

  // char ime[50];
  // char prezime[MAX];
  // printf("Unesi ime: \n");
  // scanf("%s", ime);
  // printf("Unesi prezime: \n");
  // scanf("%s", prezime);
  // printf("Uneto ime je: %s\n", ime);
  // printf("Uneto prezime je: %s\n", prezime);

  /////////////////////////////////

  // int n;
  // printf("Unesi broj poglavlje knjige: ");
  // scanf("%d", &n);
  // const char poglavlja[10][100] =
  //     {"Operatori", "Ciklusi", "Skokovi", "Karakteri", "Nizovi",
  //      "Matrice", "Stringovi","Pokazivaci", "Strukture", "Datoteke"};
  // printf("Poglavlje broj %d je %s", n, poglavlja[n-1]);

  /////////////////////////////////

  // char string1[MAX],string2[MAX];
  // printf("Unesi prvi string: ");
  // gets(string1);
  // printf("Unesi drugi string: ");
  // gets(string2);
  // if (strcmp(string1, string2) == 0)
  // {
  //   printf("Stringovi su iste duzine. ");
  // }else if (strcmp(string1,string2) > 0)
  // {
  //   printf("Prvi string je veci od drugog.");
  // }else
  // {
  //   printf("Drugi string je veci od prvog.");
  // }

  /////////////////////////////////

  // int n;
  // printf("Unesi broj karaktera: ");
  // scanf("%d", &n);
  // char s1[MAX], s2[MAX];
  // printf("Unesi prvi string: ");
  // scanf("%s", s1);
  // printf("Unesi drugi string: ");
  // scanf("%s", s2);
  // if (strncmp(s1,s2,n) ==  0)
  // {
  //   printf("Prva %d karaktera od oba stringa su isti", n);
  // }

  /////////////////////////////////

  // char str1[MAX], str2[MAX];
  // printf("Unesi prvi string: ");
  // scanf("%99s", str1);
  // printf("Unesi drugi string: ");
  // scanf("%99s", str2);

  // strcat(str1, " ");
  // strcat(str1,str2);
  // printf("Novi string: %s", str1);

  /////////////////////////////////

  // int n;
  // printf("Unesi broj karaktera: ");
  // scanf("%d", &n);

  // char str1[MAX], str2[MAX];
  // printf("Unesi prvi string: ");
  // scanf("%99s", str1);
  // printf("Unesi drugi string: ");
  // scanf("%99s", str2);
  // strcat(str1, " ");
  // strncat(str1,str2, n);
  // printf("Novi string s dodatih %d karaktera je %s", n, str1 );

  /////////////////////////////////

  // char s[MAX];
  // printf("Unesi string: ");
  // gets(s);
  // printf("Ceo broj: %d \n", atoi(s));
  // printf("Realan broj: %f", atof(s));

  /////////////////////////////////

  // double broj1, broj2, rezultat;
  // char operacija;
  // while (1)
  // {
  //   printf("Unesi prvi broj: ");
  //   if (scanf("%lf", &broj1) != 1)
  //   {
  //     printf("Kraj programa, nije broj!");
  //     break;
  //   }
  //   printf("Unesi operator(+,-,*,/): ");
  //   scanf(" %c", &operacija);

  //   printf("Unesi drugi broj: ");
  //   if (scanf("%lf", &broj2) != 1)
  //   {
  //     printf("Kraj programa, nije broj!");
  //     break;
  //   }

  //   if (operacija == '+')
  //   {
  //     rezultat = broj1 + broj2;
  //   }
  //   else if (operacija == '-')
  //   {
  //     rezultat = broj1 - broj2;
  //   }
  //   else if (operacija == '*')
  //   {
  //     rezultat = broj1 * broj2;
  //   }
  //   else if (operacija == '/')
  //   {
  //     if (broj2 == 0)
  //     {
  //       printf("Delite s nulom.");
  //       continue;
  //     }
  //     rezultat = broj1 / broj2;
  //   }
  //   else
  //   {
  //     printf("Neispravan operator");
  //     continue;
  //   }
  //   printf("Rezultat: %.2lf \n", rezultat);
  // }

  /////////////////////////////////

  // char s[MAX], slovo;
  // int n, brojac = 0;
  // printf("Unesi string: ");
  // gets(s);
  // n = strlen(s);
  // printf("Unesi koje slovo pretrazujes: ");
  // scanf("%s", &slovo);
  // for (int i = 0; i < n; i++)
  // {
  //   if(s[i] == slovo || s[i] == toupper(slovo)){
  //     brojac++;
  //   }
  // }
  // if(brojac != 0){
  //   printf("Karakter %c se ponavlja %d puta", slovo, brojac);
  // }else
  // {
  //   printf("Znaka %c nema u stringu.",slovo);
  // }

  /////////////////////////////////

  // char s[MAX];
  // int n, brojac = 0;
  // printf("Unesi string: ");
  // gets(s);
  // n = strlen(s);
  // for (int i = 0; i < n; i++){
  //   if (s[i] == ' ' && s[i+1] != ' ')
  //   {
  //     brojac++;
  //   }
  // }
  // printf("Recenica ima %d reci.", brojac+1);

  /////////////////////////////////

  // char s[MAX];
  // char znak;
  // int n, brojac=1, max = 0;
  // printf("Unesi string: ");
  // gets(s);
  // n = strlen(s);
  // for(int i = 0; i < n; i++){
  //   if (s[i] == s[i+1])
  //   {
  //     brojac++;
  //     if(brojac > max){
  //       max = brojac;
  //       znak = s[i];
  //     }
  //   }else brojac = 1;
  // }
  // printf("Duzina najduzeg podniza: %d \n", max);
  // printf("Najduzi podniz: ");
  // for(int i = 0; i < max; i++){
  //   printf("%c", znak);
  // }

  /////////////////////////////////

  // char red[20][MAX];
  // int duzina[20];
  // int i = 0;
  // int najkraci = -1, najduzi = -1;
  // int indexNajkraci = -1, indexNajduzi = -1;
  // while (i < 20)
  // {
  //   printf("Unesi %d red: ", i + 1);
  //   gets(red[i]);
  //   if (red[i][0] == ' ')
  //   {
  //     break;
  //   }

  //   duzina[i] = strlen(red[i]);

  //   if (najkraci == -1 || duzina[i] < duzina[najkraci])
  //   {
  //     najkraci = i;
  //     indexNajkraci = i;
  //   }

  //   if (najduzi == -1 || duzina[i] > duzina[najduzi])
  //   {
  //     najduzi = i;
  //     indexNajduzi = i;
  //   }
  //   i++;
  // }

  // printf("Najkraci red je %s \n", red[indexNajkraci]);
  // printf("Najduzi red je %s \n", red[indexNajduzi]);

  /////////////////////////////////

  // char s[MAX], znak;
  // int n, brojac = 0;
  // printf("Unesite string: ");
  // gets(s);
  // printf("Unesi znak: ");
  // scanf("%c", &znak);
  // n = strlen(s);
  // for (int i = 0; i < n; i++)
  // {
  //   if (s[i] == znak || s[i] == toupper(znak))
  //   {
  //     brojac++;
  //   }
  // }
  // if (brojac != 0)
  // {
  //   printf("Slovo %c se ponavlja %d puta.", znak, brojac);
  // }

  /////////////////////////////////

  // char s[MAX];
  // int n, brojac = 0;
  // printf("Unesi string: ");
  // gets(s);
  // n = strlen(s);
  // for (int i = 0; i < n; i++)
  // {
  //   if (s[i] == ' ' && s[i + 1] != ' ')
  //   {
  //     brojac++;
  //   }
  // }
  // printf("Recenica ima %d reci.", brojac);

  /////////////////////////////////

  // char s[MAX], slovo;
  // int n, br = 1, max = 0;
  // printf("Unesi string: ");
  // gets(s);
  // n = strlen(s);
  // for (int i = 0; i < n; i++)
  // {
  //   if (s[i] == s[i + 1])
  //   {
  //     br++;
  //     if (br > max)
  //     {
  //       max = br;
  //       slovo = s[i];
  //     }
  //   }
  //   else
  //     br = 1;
  // }
  // printf("Duzina najveceg podniza je: %d \n", max);
  // printf("Najduzi podniz: ");
  // for (int i = 0; i < max; i++)
  // {
  //   printf("%c", slovo);
  // }

  /////////////////////////////////

  // char red[20][MAX];
  // int duzina[20];
  // int i = 0, najduzi = -1, najkraci = -1;
  // while (1)
  // {
  //   printf("Unesi red: ");
  //   gets(red[i]);
  //   if (red[i][0] == ' ')
  //   {
  //     printf("Uneli ste prazna string.");
  //     break;
  //   }
  //   duzina[i] = strlen(red[i]);

  //   if (najkraci == -1 || duzina[i] < duzina[najkraci])
  //   {
  //     najkraci = i;
  //   }
  //   if (najduzi == -1 || duzina[i] > duzina[najduzi])
  //   {
  //     najduzi = i;
  //   }
  //   i++;
  // }
  // printf("Najkraci red je: %s\n", red[najkraci]);
  // printf("Najduzi red je: %s\n", red[najduzi]);

  /////////////////////////////////

  // char s[MAX], noviStr[MAX];
  // int i = 0;
  // printf("Unesi string: ");
  // gets(s);
  // for (i = 0; i < strlen(s); i++)
  // {
  //   if (s[i] != '\0')
  //   {
  //     noviStr[i] =  toupper(s[i]);
  //   }
  // }
  // noviStr[i] = '\0';
  // printf("Sve velikim slovima: %s", noviStr);

  /////////////////////////////////

  // char str[MAX];
  // printf("Unesi recenicu: ");
  // gets(str);
  // int duzina = strlen(str);
  // if (!isupper(str[0]))
  // {
  //   printf("Recenica nije ispravna.");
  //   return 0;
  // }
  // if (str[duzina - 1] != '.')
  // {
  //   printf("Recenica nije ispravna.");
  //   return 0;
  // }
  // for (int i = 1; i < duzina - 1; i++)
  // {
  //   if (!islower(str[i]) && str[i] != ' ' && str[i] != ',' && str[i] != ';')
  //   {
  //     printf("Recenica nije ispravna.");
  //     return 0;
  //   }
  //   if (str[i] == ' ' && str[i + 1] == ' ')
  //   {
  //     printf("Recenica nije ispravna.");
  //     return 0;
  //   }
  // }
  // printf("Recenica je ispravna");

  /////////////////////////////////

  // char s[MAX];
  // int n, k, t = 0;
  // printf("Unesi string: ");
  // gets(s);
  // n = lenstr(s);
  // for (int i = 0; i < n; i++)
  // {
  //   if (s[i] == ' ' || s[i] == ',' || i == n)
  //   {
  //     for (k = t; k <= i; k++)
  //     {
  //       printf("%c", s[k]);
  //     }
  //     if (s[i] == ',' && s[i + 1] == ' ')
  //     {
  //       t = i + 2;
  //     }
  //     else
  //     {
  //       t = i + 1;
  //       printf("\n");
  //     }
  //   }
  // }

  /////////////////////////////////

  // char s[MAX];
  // int n;
  // printf("Unesi string: ");
  // gets(s);
  // n = strlen(s);
  // printf("Novi string: ");
  // for (int i = 0; i < n; i++)
  // {
  //   if (s[i] != ' ' && s[i] != '\t')
  //   {
  //     printf("%c", s[i]);
  //   }
  // }

  /////////////////////////////////

  return 0;
}