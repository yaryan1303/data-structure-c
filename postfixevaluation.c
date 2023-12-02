#include<stdio.h>
#include<stdlib.h>
#include"header.h"
int power(int a,int b)
{
     if(b==1){
          return a;
     }
     else{
          return a*power(a,b-1);
     }
}
int Evaluation(int a,int b,char symb)
{

     switch(symb)
     {
     case '+': return(a+b);
     case '-': return(a-b);
     case '*': return(a*b);
     case '/': return(a/b);
     case '^': return power(a,b);
     }
}
int Postfix(char PostfixExp[])
{
     struct stack s;
     char symb;
     int value=0,answer,a,b;
     Initialise(&s);
     int i=0;
     while(PostfixExp[i]!='\0')
     {
          symb=PostfixExp[i];
          i++;
          if(symb>='0' && symb<='9')
          {
               push(&s,symb-'0');
          }
          else
          {
               b=pop(&s);
               a=pop(&s);
               value=Evaluation(a,b,symb);
               push(&s,value);
          }

     }
     answer=stackTop(&s);
     return answer;
}
void main()
{
     char str[100];
     printf("Enter the Postfix Expression:\n");
     scanf("%s",str);
     int x=Postfix(str);
     printf("%d",x);
}
