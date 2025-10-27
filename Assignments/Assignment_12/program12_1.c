#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : print_factors
//  Description :   To display all positive factors of number
//  Input :         int
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

void print_factors(int iNumber)
{
    if(iNumber < 0)
    {
        iNumber = -iNumber;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNumber/2; iCnt++)
    {
        if((iNumber % iCnt) == 0)
        {
            printf(" %d ",iCnt);
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
    int iValue= 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    print_factors(iValue);
    
    return 0;
}