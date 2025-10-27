#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Check whether input is even or odd
//  Input :         int
//  Output :        bool
//  Author :        Prajwal Sanjay Pansare
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
  if((iNo % 2) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter number : ");
  scanf("%d", &iValue);

  bRet = ChkEven(iValue);

  if (bRet == true)
  {
    printf("%d is Even number",iValue);
  }
  else
  {
    printf("%d is Odd number",iValue);
  }
  
  return 0;
}