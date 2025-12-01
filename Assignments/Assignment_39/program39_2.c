#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Displaying pattern using recursion
//  Input :         void
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          01/12/2025
//
//////////////////////////////////////////////////////////////

void Display()
{
    static int iCnt = 0;
    if(iCnt < 5)
    {
        iCnt++;
        printf("%d\t", iCnt);
        Display();
    }
}

int main()
{
    Display();

    return 0;
}