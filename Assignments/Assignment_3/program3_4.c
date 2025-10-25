#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayConvert
//  Description :   convert case of the input character
//  Input :         char
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
  if((cValue >= 'a') && (cValue <= 'z'))
  {
    printf("%c", cValue - 32);
  }
  else if((cValue >= 'A') && (cValue <= 'Z'))
  {
    printf("%c", cValue + 32);
  }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
  char cValue = '\0';
  
  printf("Enter character\n");
  scanf("%c", &cValue);
  
  DisplayConvert(cValue);
  
  return 0;
}