#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define STATICNUMBER 200  //nacin definisanje constate

// const int staticNum = 500;

union Rectangle{
  int x;
  int y;
  char name [50];
};

int main(){
  union Rectangle first;

  first.x = 10;//U unionu da bi dobili vrednost koju smo iskucali, moramo odma nakon nje da je printf(), inace cemo dobiti random br
  printf("%d \n", first.x);

  first.y = 20;
  printf("%d \n", first.y);

  strcpy(first.name, "First Name");
  printf("Name: %s \n", first.name);


  return 0; 
}

/*--------------------------*/
//Typedef

// typedef char Character;
// typedef char Longlines[];
// typedef int Sizes;

  //U main-u
  // Character onlyOne = 'A';
  // printf("%c \n", onlyOne);

  // Longlines headerStart = {"---------------------- \n"};
  // printf("%s \n", headerStart);

  // Sizes newSize = 10;
  // Sizes l = 20;

  // int area = newSize * l;
  // printf("Area: %d \n", area);
  // printf("%s \n", headerStart);

/*-----------------------------------*/
//Strukture

// typedef struct Books {
//   char Title[50];//Max 50
//   char Author[50];
//   char Topic[100];
//   int id_book;
// } genericBook;

  //U main-u
  // struct Books Book_1;
  // strcpy(Book_1.Title, "Teorija C"); //Korisitimo za strignove
  // strcpy(Book_1.Author, "Kemal");
  // strcpy(Book_1.Topic, "C");
  // Book_1.id_book = 221;

  // printf("Title: %s \n", Book_1.Title);
  // printf("Author: %s \n", Book_1.Author);
  // printf("Topic: %s \n", Book_1.Topic);
  // printf("Id of Book: %d \n", Book_1.id_book);

  /* ************************ */
//Funkcije

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
