#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   print even number from double value of input
//  Input :         int
//  Output :        void, string
//  Author :        Prajwal Sanjay Pansare
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
  if(iNo <= 0)
  {
    return;
  }
  
  int iCnt = 0;

  for(iCnt = 2; iCnt <= 2*iNo; iCnt+=2)
  {
    printf(" %d ",iCnt);
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
  scanf("%d",&iValue);
  
  PrintEven(iValue);
  
  return 0;
}