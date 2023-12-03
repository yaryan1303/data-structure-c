 #include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *Next;
};

struct Node *GetNode() {
    struct Node *P;
    P = (struct Node *)malloc(sizeof(struct Node));
    P->Next = NULL;
    return P;
}

void InsBeg(struct Node **list, int x) {
    struct Node *P;
    P = GetNode();
    P->info = x;
    P->Next = *list;
    *list = P;
}

void InsEnd(struct Node **list, int x) {
    struct Node *P = *list;
    struct Node *Q;
    while (P->Next != NULL) {
        P = P->Next;
    }
    Q = GetNode();
    Q->info = x;
    Q->Next = NULL;
    P->Next = Q;
}

void Transverse(struct Node *start) {
    struct Node *P = start;
    while (P != NULL) {
        printf("%d\t", P->info);
        P = P->Next;
    }
    printf("\n");
}

void reverseLinkedList(struct Node **head) {
    struct Node *prev = NULL;
    struct Node *current = *head;
    struct Node *nextNode = NULL;

    while (current != NULL) {
        nextNode = current->Next;
        current->Next = prev;
        prev = current;
        current = nextNode;
    }

    *head = prev;
}

struct Node *MergeLL(struct Node *Start1, struct Node *Start2) {
    struct Node *START3 = NULL;
    struct Node *P = Start1;
    struct Node *Q = Start2;

    while (P != NULL && Q != NULL) {
        if (P->info < Q->info) {
            InsBeg(&START3, P->info);
            P = P->Next;
        } else {
            InsBeg(&START3, Q->info);
            Q = Q->Next;
        }
    }

    while (P != NULL) {
        InsBeg(&START3, P->info);
        P = P->Next;
    }

    while (Q != NULL) {
        InsBeg(&START3, Q->info);
        Q = Q->Next;
    }

    reverseLinkedList(&START3);
    return START3;
}

struct Node *Union(struct Node *Start1, struct Node *Start2)
{
    struct Node *START3 = NULL;
    struct Node *P = Start1;
    struct Node *Q = Start2;

    while (P != NULL && Q != NULL) {
        if (P->info < Q->info) {
            InsBeg(&START3, P->info);
            P = P->Next;
        }else
        {
            if (P->info > Q->info) {
            InsBeg(&START3, Q->info);
            Q = Q->Next;
        }
        else
        {
             InsBeg(&START3, Q->info);
             Q = Q->Next;
             P = P->Next;

        }
        }
    }

    while (P != NULL) {
        InsBeg(&START3, P->info);
        P = P->Next;
    }

    while (Q != NULL) {
        InsBeg(&START3, Q->info);
        Q = Q->Next;
    }

    reverseLinkedList(&START3);
    return START3;
};
struct Node *Intersection(struct Node *Start1, struct Node *Start2)
{
    struct Node *START3 = NULL;
    struct Node *P = Start1;
    struct Node *Q = Start2;

    while (P != NULL && Q != NULL) {
        if (P->info < Q->info) {

            P = P->Next;
        }else
        {
            if (P->info > Q->info) {

            Q = Q->Next;
        }
        else
        {
             InsBeg(&START3, Q->info);
             Q = Q->Next;
             P = P->Next;

        }
        }
    }


    reverseLinkedList(&START3);
    return START3;
};

struct Node *Diifernce(struct Node *Start1, struct Node *Start2)
{
    struct Node *START3 = NULL;
    struct Node *P = Start1;
    struct Node *Q = Start2;

    while (P != NULL && Q != NULL) {
        if (P->info < Q->info) {
            InsBeg(&START3, P->info);
            P = P->Next;
        }else
        {
            if (P->info > Q->info) {

            Q = Q->Next;
        }
        else
        {

             Q = Q->Next;
             P = P->Next;

        }
        }
    }

    while (P != NULL) {
        InsBeg(&START3, P->info);
        P = P->Next;
    }


    reverseLinkedList(&START3);
    return START3;
};

struct Node *Diifernce1(struct Node *Start1, struct Node *Start2)
{
    struct Node *START3 = NULL;
    struct Node *P = Start1;
    struct Node *Q = Start2;

    while (P != NULL && Q != NULL) {
        if (Q->info < P->info) {
            InsBeg(&START3, P->info);
            Q = Q->Next;
        }else
        {
            if (Q->info > P->info) {

            P = P->Next;
        }
        else
        {

             Q = Q->Next;
             P = P->Next;

        }
        }
    }

    while (Q != NULL) {
        InsBeg(&START3, Q->info);
        Q = Q->Next;
    }


    reverseLinkedList(&START3);
    return START3;
};


struct Node *SymmetricDiff(struct Node *Start1, struct Node *Start2)
{
    struct Node *START3 = NULL;
    struct Node *P = Start1;
    struct Node *Q = Start2;

    while (P != NULL && Q != NULL) {
        if (P->info < Q->info) {
            InsBeg(&START3, P->info);
            P = P->Next;
        }else
        {
            if (P->info > Q->info) {
            InsBeg(&START3, Q->info);
            Q = Q->Next;
        }
        else
        {

             Q = Q->Next;
             P = P->Next;

        }
        }
    }

    while (P != NULL) {
        InsBeg(&START3, P->info);
        P = P->Next;
    }

    while (Q != NULL) {
        InsBeg(&START3, Q->info);
        Q = Q->Next;
    }

    reverseLinkedList(&START3);
    return START3;
};

int main() {
    struct Node *START1 = NULL, *START2 = NULL;

    InsBeg(&START1, 1);
    InsBeg(&START1, 4);
    InsBeg(&START1, 6);
     InsBeg(&START1, 13);
     reverseLinkedList(&START1);
    Transverse(START1);
    printf("\n\n");

    InsBeg(&START2, 5);
    InsBeg(&START2, 10);
    InsBeg(&START2, 11);
    InsBeg(&START2, 13);
     reverseLinkedList(&START1);
    Transverse(START2);
    printf("\n\n");

    struct Node *START3 = MergeLL(START1, START2);

    Transverse(START3);
    printf("\n\n");
     struct Node *START4 = Union(START1, START2);

    Transverse(START4);
    printf("\n\n");
     struct Node *START5 = Intersection(START1, START2);

    Transverse(START5);
     printf("\n\n");
    struct Node *START6 = Diifernce(START1, START2);

    Transverse(START6);
    printf("\n\n");
    struct Node *START7 = Diifernce1(START1, START2);

    Transverse(START7);

    printf("\n\n");
    struct Node *START8 = SymmetricDiff(START1, START2);

    Transverse(START8);

    return 0;
}
