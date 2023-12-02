#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *Next;
};

struct Node *START1 = NULL;
struct Node *START2 = NULL;
struct Node *START3 = NULL;

struct Node *GetNode()
{
    return (struct Node *)malloc(sizeof(struct Node));
}

void Transverse(struct Node *start)
{
    struct Node *P = start;
    while (P != NULL)
    {
        printf("%d ", P->info);
        P = P->Next;
    }
    printf("\n");
}

void InsBeg(struct Node **start, int x)
{
    struct Node *P = GetNode();
    P->info = x;
    P->Next = *start;
    *start = P;
}

struct Node *AdditionofNumber()
{
    struct Node *P = START1;
    struct Node *Q = START2;

    int carry = 0, total, sum;

    while (P != NULL && Q != NULL)
    {
        total = P->info + Q->info + carry;
        sum = total % 10;
        carry = total / 10;
        InsBeg(&START3, sum);
        P = P->Next;
        Q = Q->Next;
    }

    while (P != NULL)
    {
        total = P->info + carry;
        sum = total % 10;
        carry = total / 10;
        InsBeg(&START3, sum);
        P = P->Next;
    }

    while (Q != NULL)
    {
        total = Q->info + carry;
        sum = total % 10;
        carry = total / 10;
        InsBeg(&START3, sum);
        Q = Q->Next;
    }

    if (carry == 1)
    {
        InsBeg(&START3, carry);
    }

    return START3;
}

int main()
{
    // first number: 724
    InsBeg(&START1, 4);
    InsBeg(&START1, 2);
    InsBeg(&START1, 7);

    //second number: 519
    InsBeg(&START2, 9);
    InsBeg(&START2, 1);
    InsBeg(&START2, 5);

    printf("Number 1: ");
    Transverse(START1);

    printf("Number 2: ");
    Transverse(START2);


    struct Node *result = AdditionofNumber();

    printf("Sum: ");
    Transverse(result);

    return 0;
}

