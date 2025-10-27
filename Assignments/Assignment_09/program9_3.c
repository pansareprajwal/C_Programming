#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : EvenFactorial
//  Description :   To get event facotrial of input number
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    int iCnt, iTotal = 0;

    iTotal = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iTotal = iTotal*iCnt;
        }
    }

    return iTotal;
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

    iRet = EvenFactorial(iValue);

    printf("Event Factorial of number is %d", iRet);

    return 0;
}