#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : FndMax
//  Description :   To find larger number
//  Input :         int, int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

int FindMax(int a,int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int num1, num2, result = 0;

    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    result = FindMax(num1, num2);

    printf("Maximum is : %d\n",result);

    return 0;
}
