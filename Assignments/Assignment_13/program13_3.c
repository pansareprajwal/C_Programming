#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : print_Odd_number
//  Description :   To Display all Odd number to N
//  Input :         int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

void print_Odd_number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf(" %d ",iCnt);
        }
    }
}

/*
        Time Complexity : O(N)
*/

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int limit = 0;

    printf("Enter number : ");
    scanf("%d",&limit);

    print_Odd_number(limit);
  
    return 0;
}

