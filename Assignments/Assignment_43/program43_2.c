#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayPrime
//  Description :   To get Prime number from singly linear linked list
//  Input :         int
//  Output :        void
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

void DisplayPrime(PNODE Head)
{
    int i, iNo = 0;

    while (Head != NULL)
    {
        iNo = 0;
        for (i = 2; i <= Head->Data / 2; i++)
        {
            if (Head->Data % i == 0)
            {
                iNo = 1;
                break;
            }
        }

        if (iNo == 0)
        {
            printf("%d\t", Head->Data);
        }

        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayPrime(First);

    return 0;
}