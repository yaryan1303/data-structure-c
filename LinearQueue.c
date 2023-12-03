#include<stdio.h>
#include<stdlib.h>
#define SIZE 8
#define TRUE 1
#define FALSE 0

struct queue {
     char item[SIZE];
     int FRONT;
     int REAR;
};

struct queue Q;

void Initialise()
{
     Q.REAR= -1;
     Q.FRONT =0;

}
int IsEmpty()
{
     if(Q.REAR-Q.FRONT+1==0)
     {
          return TRUE;
     }
     else
          return FALSE;
}


void EnQueue(char x)
{
     if(Q.REAR==SIZE-1)
     {
          printf("Overflow");
          exit(1);
     }
     else{
          Q.REAR++;
          Q.item[Q.REAR]=x;



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
          x=Q.item[Q.FRONT];
          Q.FRONT++;
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
     printf("%c\n",x);
     EnQueue('P');
     EnQueue('Q');
      x=DeQueue();
     printf("%c\n",x);
     EnQueue('I');
     EnQueue('J');





}
