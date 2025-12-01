#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Displaying products of digits using recursion
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          01/12/2025
//
//////////////////////////////////////////////////////////////

int Display(int iNo)
{
    static int iProduct = 1;
    static int iDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iProduct = iProduct * iDigit;
        iNo = iNo / 10;
        Display(iNo);
    }

    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Display(iValue);

    printf("%d",iRet);

    return 0;
}