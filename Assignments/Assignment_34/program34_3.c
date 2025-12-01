#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   display the characte as per user input
//  Input :         char
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void Display(char ch)
{
    char cCnt = '\0';

    if((ch >= 'a') && (ch <= 'z'))
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t",cCnt);
        }
    }  
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t",cCnt);
        }
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