#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : StrCpyToggle
//  Description :   copy the string in another string and toggle there cases
//  Input :         char, chr
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void StrCpyToggle(char *src, char *dest)
{

    char temp = '\0';
    char *start = dest;
    char *end = dest;

    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else 
        {
            *dest = *src;
        }
        dest++;
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

    StrCpyToggle(arr,brr);

    printf("%s",brr);

    return 0;
}