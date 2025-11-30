#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   toggling small to capital and capital to small
//  Input :         char
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void Display(char ch)
{
    char str = '\0';
    if((ch >= 'a') && (ch <= 'z'))
    {
        str = ch - 32;
        printf("%c",str);
    }  
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        str = ch + 32;
        printf("%c",str);
    }
    else
    {
        str = ch;
        printf("%c",str);
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}