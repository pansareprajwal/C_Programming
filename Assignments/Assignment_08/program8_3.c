#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Factorial
//  Description :   To get facotrial of the input number
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iCount = 0;

    iCount = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iCount = iCount*iCnt;
    }

    return iCount;
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

    iRet = Factorial(iValue);
    
    printf("Factorial of number is %d", iRet);

    return 0;
}