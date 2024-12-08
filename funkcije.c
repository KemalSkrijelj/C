#include <stdio.h>
// int sabiranje(int a, int b)
// {
//   int rezultat;
//   rezultat = a + b;
//   return rezultat;
// }
// int zbir (int a, int b){
//   return (a+b);
// }
// int proizvod (int a, int b){
//   return (a*b);
// }
// float kolicnik (float a, float b){
//   return (a/b);
// }
// int kvadrat(int a){
//   return (a*a);
// }
// int kub(int a){
//   return (a*a*a);
// }
// /////////////////////////////////////////
// double Stepen (double baza, int eksponanta ){
//   double s = 1.0;
//   for (int i = 0; i < eksponanta; i++)
//   {
//     s *= baza;
//   }
//   return s;
// }
//////////////////////////////////////////////
// int Prost(int n){
//   for (int i = 2; i < n - 1; i++)
//   {
//     if (n % i == 0)
//     {
//       return 1;
//     }
//   }
//   return 0;
// }
////////////////////////////////////////////
// int Suma (int n){
//   int s = 0;
//   while (n != 0)
//   {
//     int cifra = n % 10;
//     s += cifra;
//     n /= 10;
//   }
//   return s;
// }
////////////////////////////////////////////
// int sumaKubova(int n)
// {
//   int s = 0;
//   while (n != 0)
//   {
//     int cifra = n % 10;
//     s += cifra * cifra * cifra;
//     n /= 10;
//   }
//   return s;
// }
// int Amstrongov(int n)
// {
//   if (n == sumaKubova(n))
//   {
//     return n;
//   }
//   return 0;
// }
double Racunaj(int n)
{
  if (n == 0)
  {
    return 0.0;
  }
  else if (n == 1)
  {
    return 1.0;
  }
  double An = Racunaj(n - 1);
  return (1.0 / An) - ((An + 3) / 2.0);
}
int main()
{
  for (int i = 0; i < 20; i++)
  {
    printf("a_%d = %.2f \n", i, Racunaj(i));
  }

  ////////////////////////////////////////
  //   for (int i = 100; i <= 999; i++)
  //   {
  //     if (i == Amstrongov(i))
  //     {
  //       printf("%d \t", i);
  //     }
  //   }
  ////////////////////////////////////////////
  // int d, g;
  // printf("Unesi donju granicu: \n"); scanf("%d", &d);
  // printf("Unesi gornju granicu: \n"); scanf("%d", &g);
  // for (int i = d; i <= g; i++)
  // {
  //   printf("\n%d \t %d", i, Suma(i));
  // }
  ////////////////////////////////////////////
  // for (int i = 1; i <= 500; i++)
  // {
  //   if (Prost(i) == 0)
  //   {
  //     printf("%d \t" , i);
  //   }
  // }
  ////////////////////////////////////////////
  // int m;
  // double r,p,k, A;
  // printf("Unesi kredit: \n"); scanf("%lf", &p);
  // printf("Mesecna kamata: \n"); scanf("%lf", &k);
  // printf("Broj mesecnih rata: \n"); scanf("%d", &m);
  // A = Stepen(1+k, m);
  // r = (A * p * k) / (A - 1);
  // printf("Mesecna rata iznosi: %lf \n", r);
  ////////////////////////////////////////////
  // int x,y;
  // float z1,z2, z3;
  // printf("Unesi x: \n"); scanf("%d", &x);
  // printf("Unesi y: \n"); scanf("%d", &y);
  // z1 = x + kvadrat(y);
  // printf("Z1: %f \n", z1);
  // z2 = kub(x) - kolicnik(x, y);
  // printf("Z2: %f \n", z2);
  // z3 = proizvod(x,y) + (5 - y);
  // printf("Z3: %f \n", z3);
  ////////////////////////////////////////////
  // int a, b, zbir;
  // printf("Unesi a: \n");
  // scanf("%d", &a);
  // printf("Unesi b: \n");
  // scanf("%d", &b);
  // zbir = sabiranje(a,b);
  // printf("Zbir je: %d", zbir);
  // int a;
  // printf("Unesi a: \n");
  // scanf("%d", &a);
  // int faktorijel = 1;
  // for (int i = 1; i <= a; i++)
  // {
  //   faktorijel *= i;
  // }
  // printf("Faktorijel: %d", faktorijel);

  // float a, b, x, z1, y, z2, z3;
  // printf("Unesi a: \n");
  // scanf("%f", &a);
  // printf("Unesi b: \n");
  // scanf("%f", &b);
  // printf("Unesi x: \n");
  // scanf("%f", &x);
  // printf("Unesi y: \n");
  // scanf("%f", &y);
  // z1 = x + kvadrat(y);
  // printf("Z1 = %.2f \n", z1);
  // z2 = kub(x) - deljenje(x, y);
  // printf("Z2 = %.2f \n", z2);
  // z3 = proizvod(x,y) + oduzimanje(5, y);
  // printf("Z3 = %.2f \n", z3);

  // float proizvod_funkcija = proizvod(a, b);
  // float zbir_funkcija = zbir(a, b);
  // float deljenje_funkcija = deljenje(a, b);
  // float oduzimanje_funkcija = oduzimanje(a, b);

  // printf("Proizvod ova dva uneta broja je: %.2f \n", proizvod_funkcija);
  // printf("Zbir ova dva uneta broja je: %.2f \n", zbir_funkcija);
  // printf("Kolicnik ova dva uneta broja je: %.2f \n", deljenje_funkcija);
  // printf("Razlika ova dva uneta broja je: %.2f \n", oduzimanje_funkcija);
  // int a, b, c, d;
  // printf("a = \n");
  // scanf("%d", &a);
  // printf("b = \n");
  // scanf("%d", &b);
  // printf("c = \n");
  // scanf("%d", &c);
  // printf("d = \n");
  // scanf("%d", &d);
  // int max_ab = max(a, b);
  // int max_cd = max(c, d);
  // int najveci = max(max_ab, max_cd);

  // printf("Najveci uneti broj je broj je %d", najveci);
  return 0;
}