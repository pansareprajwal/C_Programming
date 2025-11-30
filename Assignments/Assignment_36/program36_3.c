#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : strtogglex
//  Description :   togglig string to upper to lower and lower and upper
//  Input :         char 
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void strtogglex(char *src)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *src = *src - 32;
            printf("%c",*src);
        }
        else if((*src >= 'A') && (*src <= 'Z'))
        {
            *src = *src + 32;
            printf("%c",*src);
        }
        else
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

    strtogglex(arr);

    return 0;
}