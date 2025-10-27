#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : MultiDigits
//  Description :   To get multiplication of all in frequencies in number
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

int MultiDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit, iMult = 0;

    iMult = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iMult *= iDigit;
        
    }
    return iMult;
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

    iRet = MultiDigits(iValue);

    printf("%d",iRet);
  
    return 0;
}

