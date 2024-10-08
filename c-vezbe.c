#include <stdio.h>

// #define STATICNUMBER 200  //nacin definisanje constate

// const int staticNum = 500;

int main()
{
  printf("1 - Start Game \n");
  printf("2 - Audio Settings \n");
  printf("3 - Video Settings \n");
  printf("################### \n");

  int choice;

  printf("Enter choice: \n");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("Game Started \n");
    break;
  case 2: 
    printf("Audio Settings open \n");
    break;
  case 3:
    printf("Video Settings open \n");
    break;
  default:
    printf("---------------------- \n");
    printf("Check your input \n");
    printf("1-Start, 2-Audio, 3-Video \n");
    printf("---------------------- \n");
    break;
  }

  return 0;
}
