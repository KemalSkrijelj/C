#include <stdio.h>

// #define STATICNUMBER 200  //nacin definisanje constate

// const int staticNum = 500;

int main()
{
  int first;
  int second;

  printf("Please, enter first num: ");
  scanf("%d", &first);

  printf("Please, enter second num: ");
  scanf("%d", &second);

  if (first < second)
  {
    printf("%d is smaller than %d", first, second);
  }
  else if (first > second)
  {
    printf("%d is larger than %d", first, second);
  }
  else {
    printf("%d is equal to %d", first, second);
  }
  
  

  return 0;
}
