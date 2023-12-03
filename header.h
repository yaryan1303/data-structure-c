#define STACKSIZE 100
#define TRUE 1
#define FALSE 0
struct stack{
     char item[STACKSIZE];
     int top;

};

void Initialise(struct stack *s)
{
     s->top=-1;
}
int IsEmpty(struct stack *s)
{
     if(s->top==-1)
     {
          return TRUE;
     }
     else
     {
          return FALSE;
     }
}
void push(struct stack *s,char x)
{
    if(s->top==STACKSIZE-1){
     printf("OverFlow");
     exit(1);
    }
    else
    {
      s->top++;
      s->item[s->top]=x;
    }
}

char pop(struct stack *s)
{
     char x;
     if(s->top==-1){
          printf("Underflow");
          exit(1);
     }
     else
     {
       x=s->item[s->top];
       s->top--;

       return x;

     }
}
 char stackTop(struct stack *s)
{
     char x;
    x=s->item[s->top];
       return x;
}
