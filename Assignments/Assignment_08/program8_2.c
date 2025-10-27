#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   convert single digit number into word
//  Input :         int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("Zero");
    }

    else if(iNo == 1)
    {
        printf("One");
    }

    else if(iNo == 2)
    {
        printf("Two");
    }

    else if(iNo == 3)
    {
        printf("Three");
    }

    else if(iNo == 4)
    {
        printf("Four");
    }

    else if(iNo == 5)
    {
        printf("Five");
    }

    else if(iNo == 6)
    {
        printf("Six");
    }

    else if(iNo == 7)
    {
        printf("Seven");
    }

    else if(iNo == 8)
    {
        printf("Eight");
    }

    else if(iNo == 9)
    {
        printf("Nine");
    }

    else 
    {
        printf("Invalid Number");
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
    
    Display(iValue);

    return 0;
}