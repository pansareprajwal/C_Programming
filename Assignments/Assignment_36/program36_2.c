#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : struprx
//  Description :   Convert string to upper case
//  Input :         char 
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void struprx(char *src)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *src = *src - 32;
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

    struprx(arr);

    return 0;
}