#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.14
#include <math.h>

// #define STATICNUMBER 200  //nacin definisanje constate

// const int staticNum = 500;
int main()
{
  // 1
  //  int x;
  //  printf("Unesite ceo broj: \n");
  //  scanf("%d", x);
  //  printf("Decimalan oblik: %d \n", x);
  //  printf("Oktalni oblik: %o \n", x);
  //  printf("Heksadecimalan oblik: %x \n", x);
  // 2
  //  double x;
  //  printf("Unesi realan broj: \n");
  //  scanf("%lf", &x);
  //  printf("Decimalan oblik %.2f \n", x);
  //  printf("Oblik s' eksponentom %e \n", x);
  //  printf("U naucnoj notaciji %g \n", x);
  // 3
  //  int ceoBr;
  //  float realanBr;
  //  printf("Unesi ceo br \n");
  //  scanf("%d", &ceoBr);
  //  printf("Unesi realan br \n");
  //  scanf("%f", &realanBr);
  //  printf("Uneti ceo broj: %d \n ", ceoBr);
  //  printf("Uneti realan broj: %f ", realanBr);
  // 4
  //  float realanBroj;
  //  printf("Unesi realan broj: \n");
  //  scanf("%f", &realanBroj);
  //  printf("Uneti broj je zaokruzen na 2 decimale: %.2f", realanBroj);
  // 5
  //  char x, y, z;
  //  printf("Unesi tri znaka: \n");
  //  scanf("%c %c %c",&x,&y,&z);
  //  printf("%c karakter u ASCII: %d \n",x,x);
  //  printf("%c karakter u ASCII: %d \n",y,y);
  //  printf("%c karakter u ASCII: %d \n",z,z);
  //  6
  //  char a;
  //  printf("Unesi jedan karakter: \n");
  //  scanf("%c" , &a);
  //  printf("%c je u ASCII: %d \n", a,a);
  //  printf("%c je u ASCII: %d \n", a + 1,a + 1);
  //  printf("%c je u ASCII: %d \n", a + 2,a + 2);
  //  printf("%c je u ASCII: %d \n", a + 3,a + 3);
  // 7
  //  printf("Tip CHAR = %d B memorije. \n", sizeof(char));
  //  printf("Tip Unsigned int = %d B memorije.\n", sizeof(unsigned int));
  //  printf("Tip INT = %d B memorije. \n", sizeof(int));
  //  printf("Tip LONG = %d B memorije. \n", sizeof(long));
  // 8
  //  int a, b, c;
  //  printf("Unesi a: \n");
  //  scanf("%d", &a);
  //  printf("Unesi b: \n");
  //  scanf("%d", &b);
  //  printf("Pre zamene:a = %d, b=%d \n",a,b);
  //  c = a;
  //  a = b;
  //  b = c;
  //  printf("Posle zamene a =%d, b=%d \n", a, b);
  // 9
  //  float a,b, obim, pov;
  //  printf("Unesi a stranicu: \n");
  //  scanf("%f", &a);
  //  printf("Unesi b stranicu: ");
  //  scanf("%f", &b);
  //  obim = 2*a + 2*b;
  //  printf("Obim: %.2f \n", obim);
  //  pov = a* b;
  //  printf("Povrsina: %.2f \n", pov);
  // 10
  //  float r;
  //  printf("Unesi poluprecnik: \n");
  //  scanf("%f", &r);
  //  printf("Obim : %.3f \n", 2*r* PI);
  //  printf("Povrsina: %.3f", r*r*PI);
  // 11
  //  float r, pov, zap,h;
  //  printf("Unesi poluprecnik valjka: \n");
  //  scanf("%f", &r);
  //  printf("Unesi visinu valjka: \n");
  //  scanf("%f", &h);
  //  pov = 2*r*PI*(r+h);
  //  zap = r*r*PI*h;
  //  printf("Povrsina: %.3f \n", pov);
  //  printf("Zapremina: %.3f \n", zap);
  // 12
  //  float temp1, temp2;
  //  printf("Unesi vrednost temperature u Farenhajtima <od 0 do 300>: \n");
  //  scanf("%f", &temp1);
  //  printf("Temperatura u Farenhajtima: %f \n", temp1);
  //  temp2 = (5.00/9.00) * (temp1-32.00);
  //  printf("Temperatura u Celzijusima: %f C", temp2);
  // 13
  //  float A,B, X;
  //  printf("Unesi koeficijent a <ne sme biti 0>: \n");
  //  scanf("%f" ,&A);
  //  printf("Unesi koeficijent b: \n");
  //  scanf("%f" ,&B);
  //  X = B/A;
  //  printf("Oblik jednacine je %.2fX + %.2f = 0 \n", A,B);
  //  printf("Resenje X = %.2f", X);
  // 14
  //  float x, y;
  //  printf("Unesi x za resavanje zadatka \n");
  //  scanf("%f", &x);
  //  y = sqrt( x + x*x + x*x*x);
  //  printf("Y= %.2f", y);
  // 15
  //  float a, b,z ;
  //  printf("Unesi a: \n");
  //  scanf("%f", &a);
  //  printf("Unesi b: \n");
  //  scanf("%f", &b);
  //  z = sqrt(a*a + b*b);
  //  printf("Modul od Z je %.3f \n", z);
  //  16
  //  float a,b,a1,b1,c,d,z1,z2, rz,rr, iz, ir;
  //  printf("Unesi a1:");
  //  scanf("%f", &a);
  //  printf("Unesi b1:");
  //  scanf("%f", &b);
  //  printf("Unesi a2:");
  //  scanf("%f", &a1);
  //  printf("Unesi b2:");
  //  scanf("%f", &b1);
  //  printf("Unesi c:");
  //  scanf("%f", &c);
  //  rz = a + b;
  //  rr = a - b;
  //  iz = b + b1;
  //  ir = a - a1;
  //  z1 = a + b;
  //  printf("z1+z2 = %.2f + %.2fi \n", rz, iz);
  //  printf("z1-z2 = %.2f + %.2fi \n", rr, ir);
  // 17
  //  double x1,x2,y1,y2,z1,z2,d;
  //  printf("Unesite koordinate prve tacke <x1,y1,z1>: \n");
  //  scanf("%lf %lf %lf",&x1,&y1,&z1);
  //  printf("Unesite koordinate druge tacke <x2,y2,z2>: \n");
  //  scanf("%lf %lf %lf",&x2,&y2,&z2);
  //  d = sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));
  //  printf("Rastojanje: %.2lf \n", d);
  //  18
  //  float Xa, Xb,Xc, Ya,Yb,Yc,a,b,c,s, P;
  //  printf("Unesi kordinate prvog temena ugla: <Xa, Ya>  \n");   scanf("%f %f", &Xa, &Ya);
  //  printf("Unesi kordinate drugog temena ugla: <Xb, Yb> \n");   scanf("%f %f", &Xb, &Yb);
  //  printf("Unesi kordinate treceg temena ugla: <Xc, Yc> \n");   scanf("%f %f", &Xc, &Yc);

  // a = sqrt(pow (Xb - Xc, 2) + pow (Yb - Yc, 2) );
  // b = sqrt(pow (Xc - Xa, 2) + pow (Yc - Ya, 2) );
  // c = sqrt(pow (Xa - Xb, 2) + pow (Ya - Yb, 2) );
  // s = (a + b + c) / 2;

  // P = sqrt( s*(s-a)*(s-b)*(s-c) );
  // printf("Povrsina trougla iznosi: %.3f \n", P);
  // 19
  // int broj, a,b,c;
  // printf("Unesi neki trocifreni broj: \n");
  // scanf("%d", &broj);
  // a = broj/100;
  // b = (broj/10) % 10;
  // c = broj % 10;
  // printf("Cifre su %d, %d, %d \n", a, b,c);
  // printf("Suma cifara je %d", a+b+c);
  // 20
  // int cenaProizvoda,a,b,c;
  // printf("Unesi cenu nekog proizvoda: \n");
  // scanf("%d", &cenaProizvoda);
  // a = cenaProizvoda / 500 ;
  // b = (cenaProizvoda % 500) /100 ;
  // c = (cenaProizvoda % 500) % 100;
  // printf("Da bi platili proizvod od %d din potrebno Vam je %d novcanica od 500din \n", cenaProizvoda, a);
  // printf("Da bi platili proizvod od %d din potrebno Vam je %d novcanica od 100din \n", cenaProizvoda, b);
  // printf("Da bi platili proizvod od %d din potrebno Vam je %d novcanica od 1din", cenaProizvoda, c);
  // 21
  // long sec, day, hour, min, s;
  // printf("Unesi vremenski interval u sekundam: \n");
  // scanf("%ld", &sec);
  // s = sec % 60;
  // min = sec / 60;
  // hour = min / 60;
  // min = min % 60;
  // day = hour /24;
  // hour = hour %24;
  // printf("<day, hour, min, s> %ld days %ld hours %ld min %ld sec", day, hour,min, s);
  // 22
  // double radijan;
  // int min, sec, stepen;
  // printf("Unesi ugao u radijanu: \n");
  // scanf("%lf", &radijan);
  // radijan = radijan * 180 / PI;
  // stepen = (int)radijan;
  // radijan = radijan - stepen;
  // radijan = radijan * 60;
  // min = (int)radijan;
  // radijan = radijan - min;
  // radijan = radijan * 60;
  // sec = (int)radijan;
  // printf("<stepeni, minuti, sekunde > %d %d %d \n", stepen, min, sec);
  // 23
  // int x, y, n;
  // printf("Unesi broj u heksadecimalnom zapisu: \n");
  // scanf("%i %i", &x, &y);
  // printf("Unesi broj pomeraja: \n");
  // scanf("%d", &n);
  // printf("%#x & %#x = %#x \n", x, y, x & y);
  // printf("%#x | %#x = %#x \n", x, y, x | y);
  // printf("%#x ^ %#x = %#x \n", x, y, x ^ y);
  // printf("%#x << %#x = %#x \n", x, y, x << n);
  // printf("%#x >> %#x = %#x \n", x, y, y >> n);
  // 24
  // int broj;
  // printf("Unesi broj neki: \n");
  // scanf("%d", &broj);
  // if (broj % 2 == 0)
  // {
  //   printf("Broj je paran");
  // }else {
  //   printf("Broj je neparan");
  // }
  // 25
  // int a;
  // printf("Unesi neki broj: \n");
  // scanf("%d", &a);
  // if (a < 0)
  // {
  //   printf("Broj je negativan.");
  // }
  // else if (a > 0)
  // {
  //   printf("Broj je pozitivan.");
  // }
  // else
  // {
  //   printf("Broj je jednak 0");
  // }
  // 26
  // int a,b;
  // printf("Unesi dva broja : \n");
  // scanf("%d %d", &a, &b);
  // if (a == b)
  // {
  //   printf("Brojevi su jednaki");
  // }
  // else if (a > b)
  // {
  //   printf("Broj %d je veci od %d", a, b);
  // }
  // else
  // {
  //   printf("Broj %d je veci od %d", b, a);
  // }
  // Lab vezbe
  // int n, m;
  // long long p = 1;
  // printf("Unesi vrednost N: \n");
  // scanf("%d", &n);
  // printf("Unesi vrednost M: \n");
  // scanf("%d", &m);
  // for (int i = 0; i < m; i++)
  // {
  //   p *= (n + i * m);
  // }
  // printf("P je: %lld ", p);
  // 27
  // int a,b,c, max;
  // printf("Unesi brojeve: \n");
  // scanf("%d %d %d", &a, &b, &c);
  // max = a;
  // if (b > max)
  // {
  //   max = b;
  // }else if (c > max)
  // {
  //   max = c;
  // }
  // printf("Najveci uneti broj je: %d \n", max);
  // 28
  // float x, y, z, pomocna;
  // printf("Unesi 3 realna broja: \n");
  // scanf("%f %f %f", &x, &y, &z);
  // if (x > y)
  // {
  //   pomocna = x;
  //   x = y;
  //   y = pomocna;
  // }
  // if (x > z)
  // {
  //   pomocna = x;
  //   x = z;
  //   z = pomocna;
  // }
  // if (y > z)
  // {
  //   pomocna = y;
  //   y = z;
  //   z = pomocna;
  // }
  // printf("Ispisi brojeve po velicini %.2f %.2f %.2f", x, y, z);
  // 29
  // int k, n;
  // printf("Unesite broj: \n");
  // scanf("%d", &n);
  // printf("Unesite poziciju tog broja za proveru: \n");
  // scanf("%d", &k);
  // if ((n & (1 << k)) != 0)
  // {
  //   printf("Bit je 1");
  // }
  // else
  // {
  //   printf("Bit je 0");
  // }
  // 30
  // int a;
  // printf("Unesi broj poena: \n");
  // scanf("%d", &a);
  // if (a > 91)
  // {
  //   printf("Ocena je 10");
  // }
  // else if (a > 81)
  // {
  //   printf("Ocena je 9");
  // }
  // else if (a > 71)
  // {
  //   printf("Ocena je 8");
  // }
  // else if (a > 61)
  // {
  //   printf("Ocena je 7");
  // }
  // else if (a > 51)
  // {
  //   printf("Ocena je 6");
  // }
  // else
  // {
  //   printf("Niste polozili ispit");
  // }
  // 31
  // int a, b, x;
  // printf("Unesi donju i gornju granicu opsega: \n");
  // scanf("%d %d", &a, &b);
  // printf("Unesi ceo br x: \n");
  // scanf("%d", &x);
  // if ((a <= x * x) && (x * x <= b))
  // {
  //   printf("Kvadrat broj %d pripada pripada opsegu [%d,%d ]", x, a, b);
  // }
  // 32
  // int num1, num2, sum;
  // printf("Unesi 2 broja: \n");
  // scanf("%d %d", &num1, &num2);
  // if (num1 > num2)
  // {
  //   sum = num1 - num2;
  // }
  // else if (num2 > num1)
  // {
  //   sum = num2 - num1;
  // }
  // else
  // {
  //   printf("Brojevi su isti");
  // }
  // printf("Suma: %d", sum);
  // 33
  // float x;
  // int y;
  // printf("Unesi broj: \n");
  // scanf("%f", &x);
  // if (x == 0)
  // {
  //   y = 0;
  // }
  // else if (x < 0)
  // {
  //   y = -1;
  // }
  // else
  // {
  //   y = 1;
  // }
  // printf("Y u signum funkciji je: %d", y);
  // 34
  // float x, y;
  // printf("Unesi x = \n");
  // scanf("%f", &x);
  // if ((x > -2) && (x <= 2))
  // {
  //   y = 2 * x;
  // }
  // else if ((x >= 5) && (x < 7))
  // {
  //   y = (3 * x) - 1;
  // }
  // else
  // {
  //   y = 1 / x;
  // }
  // printf("Y= %.2f", y);
  // 35
  // int x, y, z;
  // printf("Unesi x= \n");
  // scanf("%d", &x);
  // printf("Unesi y= \n");
  // scanf("%d", &y);
  // if (y <= 0)
  // {
  //   if ((x * x) < (y * y))
  //   {
  //     z = y * y;
  //   }
  //   else
  //   {
  //     z = x * x;
  //   }
  // }
  // else
  // {
  //   if (x < y)
  //   {
  //     z = x;
  //   }
  //   else
  //   {
  //     z = y;
  //   }
  // }
  // printf("Funkcija z= %d", z);
  // 36
  // float a, b, c, s, p;
  // printf("Unesi a= \n");
  // scanf("%f", &a);
  // printf("Unesi b= \n");
  // scanf("%f", &b);
  // printf("Unesi c= \n");
  // scanf("%f", &c);
  // if (a + b > c && b + c > a && a + c > b)
  // {
  //   s = (a + b + c) / 2;
  //   p = sqrt(s*(s - a) * (s - b) * (s - c));
  //   printf("Stranice formiraju trougao, povrsina = %f", p);
  // }else
  // {
  //   printf("Ove stranice ne oznacavaju stranice trougla.");
  // }
  // 37
  // double xa, ya, xb, yb, xc, yc, a, b, c, alfa, beta, gama;
  // printf("Unesi kordinate tacke A= (x,y)\n");
  // scanf("%lf %lf", &xa, &ya);
  // printf("Unesi kordinate tacke B= (x,y)\n");
  // scanf("%lf %lf", &xb, &yb);
  // printf("Unesi kordinate tacke C= (x,y)\n");
  // scanf("%lf %lf", &xc, &yc);
  // a = sqrt(pow((xb - xc), 2) - pow((yb - yc), 2));
  // b = sqrt(pow((xc - xa), 2) - pow((yc - ya), 2));
  // c = sqrt(pow((xa - xb), 2) - pow((ya - yb), 2));
  // printf("Stranice:\n a=%lf \n, b=%lf \n, c=%lf \n", a, b, c);
  // if (a + b > c && b + c > a && a + c > b)
  // {
  //   alfa = acos((b * b + c * c - a * a) / (2 * b * c));
  //   beta = acos((c * c + a * a - b * b) / (2 * c * a));
  //   gama = acos((a * a + b * b - c * c) / (2 * a * b));
  //   alfa = alfa * 180 / PI;
  //   beta = beta * 180 / PI;
  //   gama = gama * 180 / PI;
  //   printf("Uglovi: \n");
  //   printf("Alfa: %lf", alfa);
  //   printf("Beta: %lf", beta);
  //   printf("Gama: %lf", gama);
  // }
  // else
  // {
  //   printf("Ne moze se kreirati trougao");
  // }
  // 38
  // double a1, b1, a2, b2, x, y;
  // printf("A1 =");
  // scanf("%lf", &a1);
  // printf("B1 =");
  // scanf("%lf", &b1);
  // printf("A2 =");
  // scanf("%lf", &a2);
  // printf("B2 =");
  // scanf("%lf", &b2);
  // if (a1 == b2)
  // {
  //   if (b1 == b2)
  //   {
  //     printf("Prave se podudaraju");
  //   }
  //   else
  //   {
  //     printf("Prave su paralelne");
  //   }
  // } else
  // {
  //   x= (b2-b1) / (a1-a2);
  //   y = a1 * x + b1;
  //   printf("Tacka preseka je x=%lf, y = %lf", x, y);
  // }
  // 39
  // char z;
  // double a,b,x;
  // printf("Unesi znak [<,>]: \n"); scanf("%c", &z);
  // printf("A= \n "); scanf("%lf", &a);
  // printf("B= \n "); scanf("%lf", &b);
  // printf("Oblik nejednacine je %lf *x + %lf %c 0 ", a,b,z);
  // x = -b/a;
  // if (a>0)
  // {
  //   printf("Resenje x %c %lf", z,x);
  // }else
  // {
  //   printf("Resenje %c%x", z, x);
  // }
  // 40
  // int n, s;
  // printf("Unesi x= \n");
  // scanf("%d", &n);
  // s = 0;
  // for (int i = 0; i <= n; i++)
  // {
  //   s = s + i;
  // }
  // printf("Suma: %d", s);
  // 41
  // int n;
  // float a, s, ars;
  // s = 0;
  // printf("n= ");
  // scanf("%d", &n);
  // printf("Unesite %d brojeva:\n", n);
  // for (int i = 1; i <= n; i++)
  // {
  //   scanf("%f", &a);
  //   s += a;
  // }
  // ars = s / n;
  // printf("Suma: \n", s);
  // printf("Arihmeticka sredina: \n", ars)
  // 42
  // int x, faktorijel;
  // faktorijel = 1;
  // printf("Unesi x: \n");
  // scanf("%d", &x);
  // for (int i = 1; i <= x; i++)
  // {
  //   faktorijel = faktorijel * i;
  // }
  // printf("Faktorijel broja %d je %d", x,faktorijel);
  // 43
  // int n, f;
  // float s;
  // f = 1;
  // s = 0;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // for (int i = 1; i <= n; i++)
  // {
  //   f = f * i;
  //   s = s + f;
  // }
  // printf("Suma: %f \n", s);
  // 44
  // double a1, a2, b1, b2, c1, c2,x, D,Dx,Dy, y;
  // printf("Unesi a1= \n"); scanf("%lf", &a1);
  // printf("Unesi b1= \n"); scanf("%lf", &b1);
  // printf("Unesi c1= \n"); scanf("%lf", &c1);
  // printf("Unesi a2= \n"); scanf("%lf", &a2);
  // printf("Unesi b2= \n"); scanf("%lf", &b2);
  // printf("Unesi c2= \n"); scanf("%lf", &c2);
  // D = a1*b2 - a2 * b1;
  // Dx = c1*b2 - c2*b1;
  // Dy = a1*c2 - a2*c1;
  // if (D != 0)
  // {
  //   x = Dx /D;
  //   y = Dy /D;
  //   printf("Resenje sistema: x = %lf \n", x);
  //   printf("Resenje sistema: y = %lf \n", y);
  // }else if (D == Dx && Dy == 0)
  // {
  //   printf("Sistem ima beskonacno mnogo resnjena \n");
  // }else
  // {
  //   printf("Sistem nema resenja.");
  // }
  // 45
  // double a, b, c, D, x1, x2;
  // printf("Unesi koeficijent a: \n");
  // scanf("%lf", &a);
  // printf("Unesi koeficijent b: \n");
  // scanf("%lf", &b);
  // printf("Unesi koeficijent c: \n");
  // scanf("%lf", &c);
  // if (a != 0 && D > 0)
  // {
  //   D = pow(b, 2) - 4 * a * c;
  //   x1 = (-b + sqrt(D)) / 2 * a;
  //   x2 = (-b - sqrt(D)) / 2 * a;
  //   printf("Resenja su x1: %lf, x2: %lf", x1, x2);
  // }
  // else if (a != 0 && D == 0)
  // {
  //   D = pow(b, 2) - 4 * a * c;
  //   x1 = x2 = -b / 2 * a;
  //   printf("Resenja su ista, x1: %lf, x2: %lf", x1, x2);
  // }
  // else if (a != 0 && D < 0)
  // {
  //   D = pow(b, 2) - 4 * a * c;
  //   x1 = (-b + sqrt(D)) / 2 * a;
  //   x2 = (-b - sqrt(D)) / 2 * a;
  //   printf("Resenja su x1: %lf + i, x2: %lf + i", x1, x2);
  // }
  // else if (a == 0 & b != 0)
  // {
  //   x1 = x2 = -c / b;
  //   printf("Resenja su x1: %lf, x2: %lf", x1, x2);
  // }
  // else
  // {
  //   printf("Nema resenja ");
  // }
  // 46
  // int m, n;
  // float s;
  // printf("Unesi m= \n"); scanf("%d", &m);
  // printf("Unesi n= \n"); scanf("%d", &n);
  // s = 1;
  // for (int i = 0; i <= m; i++)
  // {
  //   s = s* (n+ i * m);
  // }
  // printf("S = %f \n", s);
  // 47
  // int n,faktorijel;
  // float s, q;
  // printf("Unesi n= \n");
  // scanf("%d", &n);
  // s = 0;
  // q = 0;
  // faktorijel = 1;
  // for (int i = 1; i <= n; i++)
  // {
  //   faktorijel = faktorijel * i;
  //   q = q+1./ (1+i); // ovo smo koristili da bi donji red racunali a inicilizovali smo s q
  //   s = s +  faktorijel / q;
  // }
  // printf("S = %f, faktorijel = %d", s,faktorijel);
  // 48
  // int n;
  // float x, s, p;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi x: \n");
  // scanf("%f", &x);
  // s = 0;
  // p = 1;
  // for (int i = 1; i <= n; i++)
  // {
  //   p = p * sin(x);
  //   s = s + p;
  // }
  // printf("S = %f", s);
  // 49
  // int n;
  // float x, s, p;
  // printf("Unesi n: \n");
  // scanf("%d", &n);
  // printf("Unesi x: \n");
  // scanf("%f", &x);
  // s = 0;
  // p = 1;
  // for (int i = 1; i <= n; i++)
  // {
  //   p = p * x;
  //   s = s + cos(p);
  // }
  // printf("S = %f", s);
  // 50
  // int n;
  // float s, proizvodKorena;
  // printf("n = \n");
  // scanf("%d", &n);
  // s = 1;
  // proizvodKorena = 0;
  // for (int i = 1; i <= n; i++)
  // {
  //   proizvodKorena = sqrt(proizvodKorena + 2);
  //   s = s / proizvodKorena;
  // }
  // printf("Prozivod korena: %f \n, Suma: %f \n", proizvodKorena,s);
  // int n;
  // float br, max;
  // printf("Unesi n = \n");
  // scanf("%d", &n);
  // printf("Unesi prvi br = \n");
  // scanf("%f", &br);
  // max = br;
  // for (int i = 2; i <= n; i++)
  // {
  //   printf("Unesite %d  brojeva \n", n);
  //   scanf("%f", &br);
  //   if (br > max)
  //   {
  //     max = br;
  //   }
  // }
  // printf("Najveci uneti broj je %f", max);
  // Zadaci za kolokvijum
  // 1
  // int x, y, z, q;
  // printf("Unesi sat poletanja aviona \n");
  // scanf("%d", &x);
  // printf("Unesi minute poletanja aviona \n");
  // scanf("%d", &y);
  // printf("Unesi sekunde poletanja aviona \n");
  // scanf("%d", &z);
  // printf("Unesite vreme leta (sekunde):\n");
  // scanf("%d", &q);

  // int ukupneSekunde = x * 3600 + y * 60 + z + q;

  // int noveSekunde = ukupneSekunde % 60;
  // int ukupniMinuti = ukupneSekunde / 60;
  // int noveMinute = ukupniMinuti % 60;
  // int noviSati = (ukupniMinuti / 60) % 24;

  // printf("Vreme prizemljenja aviona je %dH:%dM:%dS", noviSati, noveMinute, noveSekunde);
  // 2
  // float a, b, x1, x2, y1, y2, S, T;
  // printf("Unesi koeficijente prave a i b: \n");
  // scanf("%f %f", &a, &b);

  // printf("Unesite koordinate tacke S (X1, Y1):\n");
  // scanf("%f %f", &x1, &y1);
  // printf("Unesite koordinate tacke T (X2, Y2):\n");
  // scanf("%f %f", &x2, &y2);

  // float tackaS = a * x1 + b;
  // float tackaT = a * x2 + b;

  // if ((y1 > tackaS && y2 > tackaT) || (y1 < tackaS && y2 < tackaT))
  // {
  //   printf("Tacke S i T se nalaze s iste strane prave y = %.2f %.2f", a, b);
  // }else
  // {
  //   printf("Tacke S i T se nalaze s razlicite strane prave y = %.2f %.2f", a, b);
  // }
  // 3
  int n;
  long long faktorijel;
  printf("Unesi n broj: \n");
  scanf("%d", &n);
  float S = 0;
  faktorijel = 1;
  for (int i = 1; i <= n; i++)
  {
    int k = 3 * i;
    faktorijel = 1;
    for (int j = 1; j <= k; j++)
    {
      faktorijel *= j;
    }

    if (i % 2 == 0)
    {
      S = S + faktorijel;
    }
    else
    {
      S = S - faktorijel;
    }
  }
  printf("Suma= %.2f \n", S);
  printf("Faktorijel= %lld", faktorijel);

  return 0;
}
/*------------------------*/

// int main(){
//   char original_char;

//   printf("Enter a character: \n");
//   scanf("%c", &original_char );

//   printf("ASCII value for %c is: %d \n", original_char, original_char  );
//   return 0;
// }

/*------------------------*/

// int main(){
//   int num;
//   printf("Enter number: \n");
//   scanf("%d", &num);

//   if (num <= 0)
//   {
//     if (num == 0){
//       printf("You entered 0.");
//     }else{
//       printf("Negative Number");
//     }
//   }else {
//     printf("Postive Number");
//   }

//   return 0;
// }

/*------------------------*/

// int main(){
//   int num;
//   printf("Enter number: \n");
//   scanf("%d", &num);

//   if (num > 0)
//   {
//     printf("%d is a postive number", num);
//   }
//   else if (num < 0)
//   {
//     printf("%d is a negative number", num);
//   }else {
//     printf("Number is 0");
//   }

//   return 0;
// }

/*------------------------*/

// int main(){
//   int numberArr[] = {1,2,3,4,5,6,7,8};

//   int total = 0;
//   int lengthOfArr = sizeof(numberArr)/sizeof(numberArr[0]);

//   for (int i = 0; i < lengthOfArr; i++){
//     total = total + numberArr[i];
//     printf("%d \n",total);
//   }
//   printf("Total sum of integers: %d", total);
//   return 0;
// }

/*------------------------*/

// int main(){

//   char source_file[100], new_file[100], c; //c sluzi da proveri svaki karakter

//   FILE *fp_source, *fp_output; //Kreirana 2 pointera odjednom.

//   printf("Source file: \n");
//   scanf("%s", source_file);

//   printf("Output file: \n");
//   scanf("%s", new_file);

//   if ((fp_source = fopen(source_file, "r")) == NULL)
//   {
//     printf("Unable to open source file! \n");
//   }
//   else if ((fp_output = fopen(new_file, "w")) == NULL)
//   {
//     printf("Unable to open output file for writing! \n");
//   }
//   else {
//    while ((c = getc(fp_source)) != EOF) { //Uzimace se podaci sve dok se ne dodje do kraja faila
//       putc(c, fp_output);
//    }
//    printf("Succesfully!!! \n");
//   }

//   fclose(fp_source);
//   fclose(fp_output);

//   return 0;
// }

/*------------------------*/

// struct Books {
//   char Title[50];//Max 50
//   char Author[50];
//   char Topic[100];
//   int id_book;
// };
// int main(){
//    struct Books Book_1;

//    FILE *fp = fopen("output_file.txt", "a"); //a-append sluzi da dodavanje u taj file koliko put mi to pozovemo u terminalu

//    if (fp == NULL)
//    {
//     printf("Unable to create file. \n");
//    } else {
//     strcpy(Book_1.Title, "Teorija C");
//     strcpy(Book_1.Author, "Kemal");
//     strcpy(Book_1.Topic, "C");
//     Book_1.id_book = 221;

// //Dodavanje u file, ne vidi se na ekranu.
//     fprintf(fp, "Title: %s \n", Book_1.Title);//fprintf sluzi za printanje u file
//     fprintf(fp, "Author: %s \n", Book_1.Author);
//     fprintf(fp, "Topic: %s \n", Book_1.Topic);
//     fprintf(fp, "Id of Book: %d \n", Book_1.id_book);
//     fprintf(fp, "----------------------- \n");

//     fclose(fp);

//     printf("----------------------- \n");
//     printf("Data succesfully added! \n");
//     printf("File closed! \n");
//   }

//   return 0;
// }

/*------------------------*/

// int main(){
//   int genericNum;

//   FILE *fp = fopen("target_file.txt", "r");

//   if (fp == NULL)
//   {
//     printf("Unable to open file in reading mode \n");
//   }
//   else
//   {
//     printf("Content: \n");
//     //  citanje iz fp      treba nam hard. adresa
//     while (fscanf(fp,"%d", &genericNum) == 1)
//     {
//       printf("Number: %d \n", genericNum);
//     }

//     fclose(fp);

//     printf("Done. \n");
//   }

//   return 0;
// }
/*------------------------*/

// int main(){
//   FILE *fp; //File pointer

//   char genericStorage[100];
//   fp = fopen("target_file.txt", "r"); //r znaci reading odnosno citanje file

//   if (fp == NULL)
//   {
//     printf("Unable to open file for reading. \n");
//   }else {
//     printf("The file is opened \n");

//     while (fgets(genericStorage, 100, fp) != NULL)
//     {
//       printf("%s", genericStorage);
//     }

//     fclose(fp);

//     printf("\n Data succesfully \n");
//     printf("File closed \n");
//   }

//   return 0;
// }
/*------------------------*/

// int main(){

//   FILE *fp; //File pointer

//   char newString[100] = "This is practice.";

//   fp = fopen("target_file.txt", "w"); //1 argument nam kaze kako ce da se zove fail koje ce se napravit, a w sluzi da ga napravi

//   if (fp == NULL)
//   {
//     printf("Unable to open a file \n");
//   }else
//   {
//     printf("File opened \n");

//     if (strlen(newString) > 0) {                    // proveravamo da li ima nesto u newString pomocu strlen metode
//       fputs(newString, fp); //Postavljanje sta ce biti ispisano u fajlu
//     }

//     fclose(fp);// Zatvaranje funkcije upisa podataka

//     printf("Data succesfully writen to file!! \n");
//     printf("File closed. \n") ;
//   };

//   return 0;
// }

/*------------------------*/

// int main(){
//   char longString[100];

//   printf("Enter string: \n");
//   gets(longString);

//   printf("You entered: \n");
//   puts(longString);

//   return 0;
// }

/*------------------------*/

// void getOneChar() {
//   int x;

//   printf("Enter character: \n");
//   x = getchar();

//   printf("You entered: \n");
//   putchar(x);
// };

// MAIN
//  int main(){

//   getOneChar();

//   return 0;
// }

/*------------------------*/
// union Rectangle{
//   int x;
//   int y;
//   char name [50];
// };

// U main-u
//  union Rectangle first; //Davanje imena

// first.x = 10;//U unionu da bi dobili vrednost koju smo iskucali, moramo odma nakon nje da je printf(), inace cemo dobiti random br
// printf("%d \n", first.x);

// first.y = 20;
// printf("%d \n", first.y);

// strcpy(first.name, "First Name");
// printf("Name: %s \n", first.name);

/*--------------------------*/

// Typedef

// typedef char Character;
// typedef char Longlines[];
// typedef int Sizes;

// U main-u
//  Character onlyOne = 'A';
//  printf("%c \n", onlyOne);

// Longlines headerStart = {"---------------------- \n"};
// printf("%s \n", headerStart);

// Sizes newSize = 10;
// Sizes l = 20;

// int area = newSize * l;
// printf("Area: %d \n", area);
// printf("%s \n", headerStart);

/*-----------------------------------*/
// Strukture

// typedef struct Books {
//   char Title[50];//Max 50
//   char Author[50];
//   char Topic[100];
//   int id_book;
// } genericBook;

// U main-u
//  struct Books Book_1;
//  strcpy(Book_1.Title, "Teorija C"); //Korisitimo za strignove
//  strcpy(Book_1.Author, "Kemal");
//  strcpy(Book_1.Topic, "C");
//  Book_1.id_book = 221;

// printf("Title: %s \n", Book_1.Title);
// printf("Author: %s \n", Book_1.Author);
// printf("Topic: %s \n", Book_1.Topic);
// printf("Id of Book: %d \n", Book_1.id_book);

/* ************************ */
// Funkcije

// int exportFunc (int x, int y) {
//   int addition = x + y;
//   return addition;
// }
// int simpleMulti() {
//   int x,y;

//   printf("Unesi x: \n");
//   scanf("%d", &x);

//   printf("Unesi y: \n");
//   scanf("%d", &y);

//   int multiplication = x * y;

//   return multiplication;
// }

/*------------------------------*/

// void simpleCalc(int x, int y){
//   printf("Vrednost x: %d \n", x);
//   printf("Vrednost y: %d \n", y);

//   int addition = x + y;
//   printf("-----------\n");
//   printf("Addition: %d \n", addition);
// }

// void charFormat(char a, char b) {
//   printf("####### %c ####### \n", a);
//   printf("####### %c ####### \n", b);
// }

/*-----------------------*/

// void someFunction() {
//   printf("I am from some function \n");
// }

// void callerMITM() {
//   someFunction();
//   someFunction();
//   someFunction();
// }

// void simpleCalc() {
//   int x = 10;
//   int y = 20;
//   int result = x + y;

//   printf("--------------- \n");
//   printf("Result: %d \n", result);
//   printf("--------------- \n");
// }

// void pingGoogle() {
//   system("ping google.com");
// }

/* ************************ */

// int orginal = 5;

// int * priPointer = &orginal;
// int ** secondPointer = &priPointer;

// printf("Preko orginala: %d \n", orginal);
// printf("Vrednost preko pointera: %d \n", *priPointer);

// printf("Hardverska adresa varijable %p \n", priPointer);
// printf("Hardverska adresa direktno: %p \n", &orginal);

// printf("Adresa primarnog pointera preko sekundarnog pointera %p \n", secondPointer);
// printf("Adresa primarnog pointera bez pravljenja sekundarnog pointera: %p \n", &priPointer);

// printf("Vrednost preko sekundarnog pointera: %d \n", **secondPointer);

/* ************************ */
// int number = 10;
// printf("Vrednost preko varijable: %d \n", number);

// printf("Prava hardverska adresa: %p \n", &number);

// int * ptrNumber = &number;//Kada pravimo pointer koristimo *

// printf("Pointer: %p \n", ptrNumber);//Adresa kontejnera

// printf("Vrednost preko pointera: %d \n", *ptrNumber);//Kad ga izvalcimo isto koristimo *

/* ************************ */
// char someString[] = "Hack the Planet";

// printf("Some string: %s \n", someString);
// printf("Value: %c \n", someString[0]);// [] koristimo da bi nam printf bilo neko slovo

// someString[0] = 'W'; //Izmena slova u recenici
// printf("Value: %c \n", someString[0]);

// printf("String size: %d \n", sizeof(someString));

// //For petlja za svako slovo
// for (int x = 0; x < sizeof(someString); x++)
// {
//   printf("Char atm: %c \n", someString[x]);
// }

/* ************************ */
// int someNumbers[] = {5,25,100, 500};
// char someChars[] = {'A', 'B','C'};

// int x = 0;

// for (x; x < 4; x++)
// {
//   printf("Number: %d \n", someNumbers[x]);
// };

// printf("Number: %d \n", someNumbers[0]);
// printf("Number: %d \n", someNumbers[1]);
// printf("Number: %d \n", someNumbers[3]);

// someChars[0] ='K';
// printf("Number: %c \n", someChars[0]);

/* ************************ */
// while (x <= 10)
// {
//   if (x == 7)
//   {
//     x++;
//     continue;
//   }

//    printf("X je u ovom momentu broj - %d \n", x);
//    x++;

/* ************************ */
// int x;
// for ( x = 0; x < 10; x++)
// {
//   if (x == 5)
//   {
//     continue;
//   }
//   printf("Ovo su brojevi %d \n", x);
// }

/* ************************ */
// int x = 0;
// do
// {
//   printf("x in this moment of time: %d \n", x);
//   x++;
// } while (x < 20);

/* ************************ */
// int x = 0;

// while (x < 10)
// {
//   printf("x in this moment of time: %d \n", x);
//   x++;
// }
// int x;

// for (x = 0; x <= 10; x++)
// {
//   printf("X at the moment: %d \n", x);
// }

// return 0;
// }
