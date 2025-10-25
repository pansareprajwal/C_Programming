#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CheckEvenOdd
//  Description :   To check Even or Odd
//  Input :         int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if((num % 2) == 0)
    {
        printf("This number is Even");
    }
    else
    {
        printf("This number is Odd");
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int number = 0;

    printf("Even number : ");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}
