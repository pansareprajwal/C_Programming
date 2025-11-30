#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : StrCopyRev
//  Description :   copy the string in another string and reverse it
//  Input :         char, chr
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void StrCopyRev(char *src, char *dest)
{

    char temp = '\0';
    char *start = dest;
    char *end = dest;

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    
    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("\n");
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    StrCopyRev(arr,brr);

    printf("%s",brr);

    return 0;
}