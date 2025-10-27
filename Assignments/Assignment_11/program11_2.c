#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplayEven
//  Description :   To display even numbers between range
//  Input :         int, int
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    else
    {
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf(" %d ",iCnt);
        }
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
    int iValue1, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}