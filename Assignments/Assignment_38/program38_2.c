#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : StrCpyX
//  Description :   copy the string in another string and remove all spaces
//  Input :         char, chr
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void StrCpyX(char *src, char *dest)
{

    char temp = '\0';
    char *start = dest;
    char *end = dest;

    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';

    printf("\n");
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}