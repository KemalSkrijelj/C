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
double Stepen (double x, int n){
  double s = 1.0;
  for (int i = 0; i < n; i++)
  {
    s *= x;
  }
  return s;
}
int main() {
  int m;
  double r, A, p, k;
  printf("Iznos kredita: \n"); scanf("%lf", &p);
  printf("Mesecna kamata: \n"); scanf("%lf", &k);
  printf("Broj mesecnih rata: \n"); scanf("%d", &m);
  A = Stepen(1+k, m);
  r = (A*p*k)/ (A - 1);
  printf("Mesecna rata za otplatu kredita je: %.2f",r);
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