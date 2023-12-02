#include<stdio.h>

struct Node
{
    int coef;
    int exp;
    struct node *Next;
};

struct Node *GetNode()
{

     struct Node *P;
     P=(struct Node*)malloc(sizeof(struct Node));
     P->Next=NULL;
     return P;

};
void FreeNode(struct Node *P)
{
    free(P);
}
void InsBeg(struct Node **start, int c,int p)
{
    struct Node *P = GetNode();
    P->coef = c;
    P->exp=p;
    P->Next = *start;
    *start = P;
}
void Transverse(struct Node *start)
{
    struct Node *P = start;
    while (P != NULL)
    {
        printf("%dx^%d+ ", P->coef,P->exp);
        P = P->Next;
    }
    printf("\n");
}

struct Node *AddPolonomial(struct node *Poly1,struct node *Poly2)
{
    struct Node *Poly3=NULL;
    struct Node *P = Poly1;
    struct Node *Q = Poly2;

    while(P!=NULL && Q!=NULL)
    {
         if(P->exp == Q->exp)
         {
              InsBeg(&Poly3,P->coef+Q->coef,P->exp);
              P=P->Next;
              Q=Q->Next;
         }
         else{
          if(P->exp > Q->exp)
          {
               InsBeg(&Poly3,P->coef,P->exp);
              P=P->Next;
          }
          else
          {
              InsBeg(&Poly3,Q->coef,Q->exp);
              Q=Q->Next;
          }
         }
    }
    while(P!=NULL)
    {
         InsBeg(&Poly3,P->coef,P->exp);
         P=P->Next;
    }
    while(P!=NULL)
    {
         InsBeg(&Poly3,Q->coef,Q->exp);
         Q=Q->Next;
    }
    return Poly3;



};
struct Node *SubPolonomial(struct node *Poly1,struct node *Poly2)
{
    struct Node *Poly3=NULL;
    struct Node *P = Poly1;
    struct Node *Q = Poly2;

    while(Q!=NULL)
    {
         Q->coef=Q->coef *(-1);
         Q=Q->Next;

    }
    Poly3=AddPolonomial(Poly1,Poly2);
    return Poly3;

};


void main()
{
     struct node *Poly1=NULL,*Poly2=NULL;
     InsBeg(&Poly1,1,0);
     InsBeg(&Poly1,2,1);
     InsBeg(&Poly1,3,2);


     Transverse(Poly1);

     printf("\n\n\n");

     InsBeg(&Poly2,1,0);
     InsBeg(&Poly2,2,1);


     Transverse(Poly2);

     printf("\n\n\n");
     struct node *Poly3=AddPolonomial(Poly1,Poly2);

     Transverse(Poly3);

     printf("\n\n\n");

     struct node *Poly4=SubPolonomial(Poly1,Poly2);

     Transverse(Poly4);










}


