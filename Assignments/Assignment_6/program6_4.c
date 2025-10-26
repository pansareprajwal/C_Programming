#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Multiply
//  Description :   To get multiplicaton of three numbers 
//  Input :         int, int, int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }

    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    return iNo1*iNo2*iNo3;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1, iValue2, iValue3, iRet = 0;

    printf("Please enter three numbers : ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of this three numbers : %d", iRet);

    return 0;
}