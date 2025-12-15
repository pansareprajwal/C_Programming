#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Minimum
//  Description :   To get smallest element from singly linear linked list
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

int Minimum(PNODE Head)
{
    int Min = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data < Min)
        {
            Min = Head->Data;
        }
        Head = Head->Next;
    }

    return Min;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = Minimum(First);

    printf("%d",iRet);

    return 0;
}