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
    static char ch = 'a';
    if(ch < 'g')
    {
        printf("%c\t", ch);
        ch++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}