#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplayRev
//  Description :   To display all numbers between range in reverse order
//  Input :         int, int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    else if(iStart < 0)
    {
        printf("Invalid Range");
    }
    else
    {
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf(" %d ", iCnt);
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

    RangeDisplayRev(iValue1, iValue2);
    
    return 0;
}