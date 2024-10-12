#include <stdio.h>

// #define STATICNUMBER 200  //nacin definisanje constate

// const int staticNum = 500;

int main()
{
  int number = 10;
  printf("Vrednost preko varijable: %d \n", number);

  printf("Prava hardverska adresa: %p \n", &number);

  int * ptrNumber = &number;//Kada pravimo pointer koristimo *

  printf("Pointer: %p \n", ptrNumber);//Adresa kontejnera

  printf("Vrednost preko pointera: %d \n", *ptrNumber);//Kad ga izvalcimo isto koristimo *

  return 0; 
}
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
