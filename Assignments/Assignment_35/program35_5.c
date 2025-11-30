#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : ChkVowel
//  Description :   display the reverse string
//  Input :         char 
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void Reverse(char *src)
{
    char *temp = src;

    while(*temp != '\0')
    {
        temp++;
    }

    temp--;

    while(*src != '\0')
    {
        printf("%c",*temp);

        temp--;
        src++;
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}