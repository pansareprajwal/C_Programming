#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : FactorialDiff
//  Description :   To get facotrial differcne of input
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    int iCnt, iEven, iOdd = 0;

    iEven = 1;
    iOdd = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEven = iEven*iCnt;
        }
        else
        {
            iOdd = iOdd*iCnt;
        }
    }

    return iEven-iOdd;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}