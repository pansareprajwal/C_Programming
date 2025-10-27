#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountEven
//  Description :   To check frequency of even digits in number
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit, iFreq = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if((iDigit % 2) == 0)
        {
            iFreq++;
        }
    }
    return iFreq;
}

/*
    Time Complexity:
        Best Case    : O(1)      
        Worst Case   : O(N)   
        Average Case : O(log N)   
*/

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);
  
    return 0;
}

