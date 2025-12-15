#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function name : AdditionEven
//  Description :   To get addition of even element of singly linear linked list
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          16/12/2025
//
//////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

struct node
{
    int Data;
    struct node *Next;
};

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn-> Next = *Head;
        *Head = newn;
    }
}

int AdditionEven(PNODE Head)
{
    int i, iSum = 0;

    while (Head != NULL)
    {
        if(((Head->Data) % 2) == 0)
        {
            iSum = iSum + (Head->Data);
        }
        Head = Head->Next;
    }

    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    iRet = AdditionEven(First);

    printf("%d\n",iRet);

    return 0;
}