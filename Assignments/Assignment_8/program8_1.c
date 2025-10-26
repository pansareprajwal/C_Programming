#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Number
//  Description :   To print positon of input number
//  Input :         int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("small");
    }
    else if(iNo < 100)
    {
        printf("medium");
    }
    else
    {
        printf("large");
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
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    Number(iValue);

    return 0;
}