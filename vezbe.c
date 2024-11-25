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
int NZD(int a, int b){
  int c;
  while (b != 0)
  {
    c = b;
    b = a % b;
    a = c;
  }
  return a;
}
float NZS(int a, int b){
  return a*b/NZD(a,b);
}
int main() {
  int a,b;
  while (1)
  {
     printf("Unesite dva prirodna broja (nula za prekid): ");
     scanf("%d %d", &a, &b);
       if (a == 0 || b == 0) {
            printf("Uneli ste nulu. Kraj programa.\n");
            break;
        }
    int nzs = NZS(a,b);
    int nzd = NZD(a,b);
    printf("Nzs = %d \n", nzs);
    printf("Nzd = %d \n", nzd);
  }
  
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