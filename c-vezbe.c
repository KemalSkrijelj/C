#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define STATICNUMBER 200  //nacin definisanje constate

// const int staticNum = 500;
int main(){
  int num;
  printf("Enter number: \n");
  scanf("%d", &num);

  if (num > 0)
  {
    printf("%d is a postive number", num);
  }
  else if (num < 0)
  {
    printf("%d is a negative number", num);
  }else {
    printf("Number is 0");
  }
  
  return 0;
}
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

//int main(){

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

//MAIN
// int main(){

//   getOneChar();

//   return 0; 
// }

/*------------------------*/
// union Rectangle{
//   int x;
//   int y;
//   char name [50];
// };

//U main-u
// union Rectangle first; //Davanje imena

// first.x = 10;//U unionu da bi dobili vrednost koju smo iskucali, moramo odma nakon nje da je printf(), inace cemo dobiti random br
// printf("%d \n", first.x);

// first.y = 20;
// printf("%d \n", first.y);

// strcpy(first.name, "First Name");
// printf("Name: %s \n", first.name);

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
