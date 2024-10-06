#include <stdio.h>

// #define STATICNUMBER 200  //nacin definisanje constate

// const int staticNum = 500;

int main()
{
  printf("#################### \n");
  printf("\n");
  printf("Dobro dosli u jednostavan calculator \n");
  printf("\n");
  printf("#################### \n");

  int firstNum = 13;
  int secondNum = 5;

  int add = firstNum + secondNum;
  int sub = firstNum - secondNum;
  int mul = firstNum * secondNum;
  int div = firstNum / secondNum;
  int rem = firstNum % secondNum;

  printf("Add: %d \n", add);
  printf("Sub: %d \n", sub);
  printf("Mul: %d \n", mul);
  printf("Div: %d \n", div);
  printf("Rem: %d \n", rem);

  return 0;
}
