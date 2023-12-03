#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define TRUE 1
#define FALSE 0

struct queue {
     char item[SIZE];
     int FRONT;
     int REAR;
};

struct queue CQ;

void Initialise()
{
     CQ.REAR= 0;
     CQ.FRONT =0;

}
int IsEmpty()
{
     if(CQ.REAR==CQ.FRONT)
     {
          return TRUE;
     }
     else
          return FALSE;
}


void EnQueue(char x)
{
     if((CQ.REAR+1)%SIZE==CQ.FRONT)
     {
          printf("Overflow");
          exit(1);
     }
     else{
          CQ.REAR=(CQ.REAR+1)%SIZE;
          CQ.item[CQ.REAR]=x;



     }
}
int DeQueue()
{
     char x;
     if(IsEmpty())
     {
          printf("Underflow");
     }
     else
     {
          CQ.FRONT=(CQ.FRONT+1)%SIZE;
          x=CQ.item[CQ.FRONT];
          return x;
     }
}
int main()
{
     Initialise();
     EnQueue('A');
     EnQueue('B');
     EnQueue('C');
     char x=DeQueue();
     printf("%c \n",x);
     EnQueue('X');
     EnQueue('Y');
     x=DeQueue();
     printf("%c \n",x);
     EnQueue('P');

     EnQueue('Q');

}
