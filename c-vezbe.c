#include <stdio.h>

// #define STATICNUMBER 200  //nacin definisanje constate

// const int staticNum = 500;

int main()
{
  int firstNumber;
  float secondNumber;
  char someWord[30];

  printf("Enter first num: \n");
  scanf("%d", &firstNumber);

  printf("Enter second num: \n");
  scanf("%f", &secondNumber);

  printf("Enter Some Word: \n");
  scanf("%s", &someWord);

  printf("###################### \n");

  printf("First num: %d \n", firstNumber);
  printf("Second num: %d \n", secondNumber);
  printf("Some Word : %s \n", someWord);

  printf("###################### \n");

  return 0;
}
