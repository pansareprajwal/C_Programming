#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Displaying pattern using recursion
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          01/12/2025
//
//////////////////////////////////////////////////////////////

int Display(int iNo)
{
    if(iNo == 1)
    {
        return 1;
    }
    else
    {
        return (iNo * (Display(iNo-1)));
    }
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