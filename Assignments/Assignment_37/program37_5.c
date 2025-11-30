#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : StrRevX
//  Description :   Reversing the string in array
//  Input :         char, chr
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char temp = '\0';
    char *start = str;
    char *end = str;
    
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
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("%s",arr);

    return 0;
}