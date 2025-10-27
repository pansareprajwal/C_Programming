#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please enter the name : ");
    scanf("%[^\n]s",&Name);

    printf("Your name is %s",Name);

    return 0;
}