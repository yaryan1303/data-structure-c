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
struct Node *PolyMultiplication(struct Node *Poly1,struct Node *Poly2)
{
     struct Node *Poly3=NULL;
     int N=Poly1->exp+Poly2->exp;
     int *DAT = (int *)calloc(N+1, sizeof(int));
     struct Node *P=Poly1,*Q;
     int x,i;



     while(P!=NULL)
     {
           Q=Poly2;

          while(Q!=NULL)
          {
               x=P->exp+Q->exp;

               DAT[x] +=P->coef*Q->coef;;
               Q=Q->Next;
          }
          P=P->Next;

     }
     for(i=0;i<=N;i++)
     {
          if(DAT[i]!=0)
          {
               InsBeg(&Poly3,DAT[i],i);
          }
     }
     //free(DAT);
     return Poly3;
};
void main()\
{
     struct node *Poly1=NULL,*Poly2=NULL,*Poly3=NULL;
     InsBeg(&Poly1,9,0);
     InsBeg(&Poly1,-8,3);
     InsBeg(&Poly1,6,4);
     InsBeg(&Poly1,-8,5);
     InsBeg(&Poly1,7,8);
     Transverse(Poly1);

     InsBeg(&Poly2,-2,0);
     InsBeg(&Poly2,5,1);
     InsBeg(&Poly2,-4,3);
     InsBeg(&Poly2,2,4);
     InsBeg(&Poly2,5,5);
     Transverse(Poly2);

     Poly3=PolyMultiplication(Poly1,Poly2);
     Transverse(Poly3);

}
