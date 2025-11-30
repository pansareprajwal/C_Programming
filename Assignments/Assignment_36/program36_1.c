#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : strlwrx
//  Description :   Convert string to lower case
//  Input :         char 
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void strlwrx(char *src)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
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

    strlwrx(arr);

    return 0;
}