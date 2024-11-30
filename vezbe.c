#include <stdio.h>
#include <math.h>
#define PI 3.14
// int max(int a, int b){
//   int max;
//   if (a > b){
//     max = a;
//   }else{
//     max = b;
//   }
//   return max;
// }
///////////////////
// float Povrsina(int r){
//   return (4*PI*(r*r));
// }
// float Zapremina(int r){
//   return (4/3*PI*(r*r*r));
// }
///////////////////
// double stranica(double x1, double x2, double x3, double x4){
//   return (sqrt(pow(x1 - x2,2) + pow(x3 - x4,2) ));
// }
///////////////////
// int zbirKvadrata(int a, int b){
//   int S = 0;
//   for (int i = a; i <= b; i++)
//   {
//     S += i*i;
//   }
//   return S; 
// }
// int zbirParnihKvadrata(int a, int b){
//   int S = 0;
//   for (int i = a; i <= b; i++)
//   {
//     if (i % 2 == 0)
//     {
//        S += i*i;
//     }
    
//   }
//   return S; 
// }
// int zbirNeparnihKvadrata(int a, int b){
//   int S = 0;
//   for (int i = a; i <= b; i++)
//   {
//     if (i % 2 == 1)
//     {
//        S += i*i;
//     }
//   }
//   return S; 
// }
/////////////////////////////////////////////
// int sumaCifara (int a){
//   int s = 0;
//   while (a != 0)
//   {
//     s += a % 10;
//     a = a / 10;
//   }
//   return s;
// }
/////////////////////////////////////////////
// int NZD(int a, int b){
//   int c;
//   while (b != 0)
//   {
//     c = b;
//     b = a % b;
//     a = c;
//   }
//   return a;
// }
// float NZS(int a, int b){
//   return a*b/NZD(a,b);
// }
//////////////////////////////////////////////
// int faktorijel(int n){
//   int fakt = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     fakt *= i; 
//   }
//   return fakt;
// }
//////////////////////////////////////////////
// int faktorijel(int n){
//   int fakt = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     fakt *= i; 
//   }
//   return fakt;
// }
//////////////////////////////////////////////
// double stepen(double a, int b){
//   int i, negative;
//   double s=1.0;
//   negative = b < 0;
//   if(negative){
//     b = -b;
//   }
//   for(i=0; i<b; i++){
//     s*=a;
//   }
//   if(negative) {
//     return(1/s);
//   }  
//   else{
//     return(s);
//   }
// }
//////////////////////////////////////////////
// double Stepen (double x, int n){
//   double s = 1.0;
//   for (int i = 0; i < n; i++)
//   {
//     s *= x;
//   }
//   return s;
// }
//////////////////////////////////////////////
// int Prost(int broj){
//   for (int i = 2; i < broj; i++)
//   {
//     if (broj % i == 0){
//       return 0;
//     }
//   }
//   return 1;
// }
//////////////////////////////////////////////
// int sumaKubova (int n){
//   int s = 0;

//   while (n != 0)
//   {
//     int cifra = n % 10;
//     s += cifra * cifra * cifra;
//     n = n / 10; 
//   }
//   return s;
// }
// int Amstrongov(int n){
//   if (n == sumaKubova(n))
//   {
//     return 1;
//   }
//   return 0;
// }
//////////////////////////////////////////////
// int sumaCifara(int n){
//   int suma = 0;
//   while (n != 0)
//   {
//     int cifra = n % 10;
//     suma += cifra;
//     n /= 10;
//   }
//   return suma;
// }
// int Nivenov(int n){
//   if(n % sumaCifara(n) == 0){
//     return 1;
//   }
//   return 0;
// }
//////////////////////////////////////////////
//   float x, xmin, dx;
// float f1(float x){
//   return sin(x)/ x;
// }
// float f2(float x){
//   return f1(x) * f1(x);
// }
//////////////////////////////////////////////
// int komb(int n, int k){
//   int proizvod = 1;
//   for(int i = 1; i <= k; i++){
//     proizvod *= (n - i + 1) / i;
//   }
//   return proizvod;
// }
//////////////////////////////////////////////
// int dvostrukiFakt(int n){
//   int proizvod = 1;
//   if (n % 2 == 0)
//   {
//     while (n >= 2)
//     {
//       proizvod *= n;
//       n -= 2;
//     } 
//   }else
//   {
//     while (n >= 1)
//     {
//       proizvod *= n;
//       n -= 2;
//     }
//   }
//   return proizvod;
// }
//////////////////////////////////////////////
// double Povrsina (double r){
//   return (4*r*r*PI);
// }
// double Zapremina (double r){
//   return ((4./3.)*r*r*r*PI);
// }
//////////////////////////////////////////////
// REKURZIVNE FUNKCIJE
//////////////////////////////////////////////
// int Faktorijel(int n){
//   if (n == 1) return 1;
//   return n*Faktorijel(n-1);
// }
//////////////////////////////////////////////
// int stepen(int a, int b){
//   if (b == 0){
//    return 1;
//   }
//   else{
//     return a*stepen(a,b-1);
//   } 
// }
//////////////////////////////////////////////
// int Prost(int n){
//   for (int i = 2; i < n; i++)
//   {
//     if (n % i == 0)  return 0;
//   }
//     return 1;
  
// }
//////////////////////////////////////////////
// int sumaKubova(int n){
//   int s = 0;
//   while (n != 0)
//   {
//     int cifra = n % 10;
//     s += cifra * cifra * cifra;
//     n = n / 10; 
//   }
//   return s;
// }
// int Amstrongov(int n){
//   if (n == sumaKubova(n))
//   {
//     return 0;
//   }
//   return 1;
// }
//////////////////////////////////////////////
// int sumaCifara (int n){
//   int s = 0;
//   while (n != 0)
//   {
//     int cifra = n % 10;
//     s += cifra;
//     n /= 10;
//   }
//   return s;
// }
// int Nivenov(int n){
//   if (n % sumaCifara(n)  == 0)
//   {
//     return 0;
//   }
//   return 1;
// }
//////////////////////////////////////////////
// double Stepen(double baza, int eksponanta) {
//   double suma = 1.0;
//   for (int i = 0; i < eksponanta ; i++)
//   {
//     suma *= baza;
//   }
//   return suma;
// }
//////////////////////////////////////////////
int main() {
  int a=2, b=0, c=1, d=1;
  int pozicija = 4;
  int pocetnaA = 2, pocetnaB = 0, pocetnaC = 1, pocetnaD = 1;
  int pocetniBroj = a+b+c+d;
  while (1){
    int sledeca = (a+b+c+d) % 10;

    a = b;
    b = c;
    c = d;
    d = sledeca;

    pozicija++;

    if (a == pocetnaA && b == pocetnaB && c == pocetnaC && d == pocetnaD)
    {
      printf("Pocetna sekvenca 2011 ponavlja se na poziciji: %d", pozicija - 3);
      break;
    }
    
  }
  
/////////////////////////////////////////
// int k,i = 1, niz = 1;
// printf("k = \n"); scanf("%d", &k);
// while (i <= k)
// {
//   niz = niz*10;
//   i++;
// }
// printf("Na %d se nalazi broj %d: \n",k, niz);
// ////////////////////////////////////////////////
// int x, obrnuti = 0;
// printf("Unesi broj: \n"); scanf("%d", &x);
// while (x != 0)
// {
//   obrnuti = obrnuti * 10 + x % 10;
//   x /= 10; 
// }
// printf("Obrnuti: %d \n", obrnuti);
//////////////////////////////////////////////
  // double baza;
  // int eksponanta;
  // printf("Unesi broj: \n"); scanf("%lf", &baza);
  // printf("Unesi stepen: \n"); scanf("%d", &eksponanta);
  // printf("Baza %.2lf stepenovana brojem %d je %.2lf",baza,eksponanta, Stepen(baza, eksponanta));
//////////////////////////////////////////////
  // for(int i = 101; i <= 200; i++){
  //   if (Nivenov(i) == 0)
  //   {
  //     printf("%d \t", i);
  //   }
  // }
//////////////////////////////////////////////
  // for (int i = 100; i <= 999; i++)
  // {
  //   if (Amstrongov(i) == 0)
  //   {
  //     printf("%d \t", i);
  //   }
  // }
//////////////////////////////////////////////
  // int n;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // for (int i = 1; i <= 500; i++)
  // {
  //   if (Prost(i) == 1)
  //   {
  //     printf("%d \t", i);
  //   }
    
  // }
//////////////////////////////////////////////
  // float r, p, z;
  // printf("Unesi r poluprecnik: \n");
  // scanf("%f", &r);
  // p = Povrsina(r);
  // z = Zapremina(r);
  // printf("Povrsina: %.2f \n", p);
  // printf("Zapremina: %.2f", z);
//////////////////////////////////////////////
  // int a, b;
  // printf("Unesi osnovu a: \n");
  // scanf("%d", &a);
  // printf("Unesi stepen b: \n");
  // scanf("%d", &b);
  // printf("Stepen broja %d je %d", a, stepen(a,b));
//////////////////////////////////////////////
  // int n;
  // printf("n = \n");
  // scanf("%d", &n);
  // printf("Faktorijel = %d", Faktorijel(n));
//////////////////////////////////////////////

  // int znak = 1, i = 2;
  // float S = 1,  clan = 1, eps;
  // printf("Eps: \n");
  // scanf("%f", &eps);
  // while (fabs(clan) >= eps)
  // {
  //   clan = (float) znak / dvostrukiFakt(i);
  //   S = S + clan;
  //   i++;
  //   znak = -znak;
  // }
  // printf("S = %.2f", S);
//////////////////////////////////////////////
  // float s;
  // int n,k,t, znak = 1;  //t-broj ponavljanje petlje
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi k: \n");
  // scanf("%d", &k);
  // printf("Unesi t: \n");
  // scanf("%d", &t);
  // for (int i = 0; i < t; i++)
  // {
  //   s += znak*komb(n,k);
  //   znak = -znak;
  // }
  // printf("Suma = %.2f", s);
  
//////////////////////////////////////////////
  // printf("Unesi x-min: \n"); scanf("%f", &xmin);
  // printf("Unesi dx: \n"); scanf("%f", &dx);
  // printf("\nx   f1(x)   f2(x)");
  // for ( x = 1; x >= xmin; x= x-dx)
  // {
  //   printf("\n %.2f   %.2f    %.2f ", x, f1(x), f2(x));
  // }
  
//////////////////////////////////////////////
  // for (int i = 99; i <= 199; i++)
  // {
  //   if (Nivenov(i)){
  //     printf("%d \t", i);
  //   }
  // }
  
//////////////////////////////////////////////

  // for (int i = 99; i <= 999; i++)
  // {
  //   if (Amstrongov(i)){
  //     printf("%d \n", i);
  //   }
  // }
  
//////////////////////////////////////////////
  // for (int i = 1; i <= 500 ; i++)
  // {
  //   if(Prost(i) == 1){
  //     printf("%d \n", i);
  //   }
  // }
  
//////////////////////////////////////////////
  // int m;
  // double r, A, p, k;
  // printf("Iznos kredita: \n"); scanf("%lf", &p);
  // printf("Mesecna kamata: \n"); scanf("%lf", &k);
  // printf("Broj mesecnih rata: \n"); scanf("%d", &m);
  // A = Stepen(1+k, m);
  // r = (A*p*k)/ (A - 1);
  // printf("Mesecna rata za otplatu kredita je: %.2f",r);
//////////////////////////////////////////////

  // double a, rezultat; 
  // int b;
  // printf("\n Osnova: ");
  // scanf("%lf", &a);
  // printf("\n Stepen: ");
  // scanf("%d", &b);
  // rezultat=stepen(a,b);
  // printf("\n Rezultat= %.2f", rezultat);
//////////////////////////////////////////////
  // int a, b, c;
  // for (a = 1; a <=9; a++){
  //   for (b = 1; b <= 9; b++){
  //     for (c = 1; c <= 9; c++)
  //     {
  //       if ((a*100+b*10+c) == (faktorijel(a)+faktorijel(b)+faktorijel(c)) )
  //       {
  //           printf("%d", a*100+b*10+c);
  //       }
  //     }
  //   }
  // }
  
//////////////////////////////////////////////
  // int n, s = 0;
  // printf("Unesi n: \n"); scanf("%d", &n);
  // for (int i = 1; i <= n; i++)
  // {
  //   s += faktorijel(i);
  // }
  // printf("Suma = %d", s);
//////////////////////////////////////////////
  // int n, k,c;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi k: \n");
  // scanf("%d", &k);
  // c = faktorijel(n) / (faktorijel(k) * faktorijel(n - k));
  // printf("C = %d \n", c);
  ////////////////////////////////////////////
  // int a,b;
  // while (1)
  // {
  //    printf("Unesite dva prirodna broja (nula za prekid): ");
  //    scanf("%d %d", &a, &b);
  //      if (a == 0 || b == 0) {
  //           printf("Uneli ste nulu. Kraj programa.\n");
  //           break;
  //       }
  //   int nzs = NZS(a,b);
  //   int nzd = NZD(a,b);
  //   printf("Nzs = %d \n", nzs);
  //   printf("Nzd = %d \n", nzd);
  // }
  
  ////////////////////////////////////////////
  // int donjaGranica, gornjaGranica;
  // printf("Donja granica: \n");
  // scanf("%d", &donjaGranica);
  // printf("Gornja granica: \n");
  // scanf("%d", &gornjaGranica);
  // for (int i = donjaGranica; i <= gornjaGranica; i++)
  // {
  //   printf("%d %d \n",i, sumaCifara(i));
  // }
  ////////////////////////////////////////////
  // int a,b;
  // printf("Unesi donju granicu a: \n"); scanf("%d", &a);
  // printf("Unesi gornju granicu b: \n"); scanf("%d", &b);  
  // printf(" Zbir kvadrata svih brojeva: %d \n", zbirKvadrata(a, b));
  // printf(" Zbir kvadrata parnih brojeva: %d \n", zbirParnihKvadrata(a, b));
  // printf(" Zbir kvadrata neparnih brojeva: %d", zbirNeparnihKvadrata(a, b));
  ////////////////////////////////////////////
  // double Xa,Xb,Xc,Ya,Yb,Yc,P,S, a,b,c;
  //  printf("Prvo teme <xA,yA>: ");
  //  scanf("%lf %lf",&Xa,&Ya);
  //  printf("Drugo teme <xB,yB>: ");
  //  scanf("%lf %lf",&Xb,&Yb);
  //  printf("Trece teme <xC,yC>: ");
  //  scanf("%lf %lf",&Xc,&Yc); 
  // a = stranica(Xb,Xc, Yb,Yc);
  // b = stranica(Xc,Xa, Yc,Ya);
  // c = stranica(Xa,Xb, Ya,Yb);
  // S = (a + b + c) / 2;
  // P = sqrt(S*(S-a)*(S-b)*(S-c));
  // printf("Suma: %.2lf \n",S);
  // printf("Povrsina: %.2lf",P);
  ////////////////////////////////////////////
  // float povrsina, zapremina;
  // int r;
  // printf("Unesi r: \n");
  // scanf("%d", &r);
  // povrsina = Povrsina(r);
  // zapremina = Zapremina(r);
  // printf("Povrsina: %f \n", povrsina);
  // printf("Zapremina: %f", zapremina);
  //////////////////////////////////////////////
  // int a,b,c,d, m, prvaProvera, drugaProvera;
  // printf("Unesi cetiri broja: \n");
  // scanf("%d %d %d %d", &a,&b,&c,&d);
  // prvaProvera = max(a,b);
  // drugaProvera = max(c,d);
  // m = max(prvaProvera, drugaProvera);
  // printf("Maximum = %d", m);
  return 0;
}