#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayDigit
//  Description :   Display only digits from string
//  Input :         char 
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void DisplayDigit(char *src)
{
    while(*src != '\0')
    {
        if((*src >= '0') && (*src <= '9'))
        {
            printf("%c",*src);
        }
        src++;
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}