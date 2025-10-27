#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountRange
//  Description :   To check frequency of digits between 3 & 7 in number
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

int CountRange(int iNo)
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
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("%d",iRet);
  
    return 0;
}

