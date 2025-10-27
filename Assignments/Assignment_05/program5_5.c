#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : FindLargest
//  Description :   To find largest among three numbers
//  Input :         int, int, int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
        if((x > y) && (x > z))
        {
            return x;
        }
        else if((y > x) && (y > z))
        {
            return y;
        }
        else if((z > x) && (z > y))
        {
            return z;
        }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int a, b, c, result;

    printf("Enter three number : ");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);

    printf("Largest number is : %d\n", result);

    return 0;
}
