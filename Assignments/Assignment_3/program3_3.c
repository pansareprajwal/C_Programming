#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayEvenFactor
//  Description :   print even factors of number
//  Input :         int
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
  int i = 0;
  
  if(iNo <= 0)
  {
    iNo = -iNo;
  }
  
  for(i = 1; i <= iNo/2; i++)
  {
    if(((iNo % i) == 0) && ((i % 2) == 0))
    {
      printf(" %d ",i);
    }
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
  
  printf("Enter number\n");
  scanf("%d", &iValue);
  
  DisplayEvenFactor(iValue);
  
  return 0;
}