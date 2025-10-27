#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : print_number
//  Description :   To Display all number to N
//  Input :         int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

void print_number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" %d ",iCnt);
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

    print_number(limit);
  
    return 0;
}

