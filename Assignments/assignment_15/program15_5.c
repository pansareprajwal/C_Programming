#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountDiff
//  Description :   To get difference between summation of even and odd frequnecies
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if((iDigit % 2) == 0)
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }
        
    }
    return iEvenSum-iOddSum;
}

/*
    Time Complexity: O(N)  
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

    iRet = CountDiff(iValue);

    printf("%d",iRet);
  
    return 0;
}

