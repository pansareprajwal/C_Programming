#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : ChkGreater
//  Description :   To check whether the value greater than 100 
//  Input :         int
//  Output :        bool
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if (iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if (bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}