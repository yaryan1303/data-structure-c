#include<stdio.h>
#include<stdlib.h>
#include"header.h"
int prcd(char a,char b)
{
     if(a=='(')
          return FALSE;
     else{
          if(b=='(')
               return FALSE;
          else{
               if(b==')')
                    return TRUE;
               else{
                         if(a=='^'||a=='*'||a=='/'||a=='%')
                         {
                            if(b=='^')
                                return FALSE;
                            else
                                 return TRUE;
                          }
                         else{
                             if(b=='+'||b=='-')
                                return TRUE;
                             else
                                 return FALSE;
                              }

               }
          }
     }


}
void InfixToPostfix(char Infix[])
{
     int i=0,j=0;
     char symb,x;
     char Postfix[100];
     struct stack s;
     Initialise(&s);
     while( Infix[i]!='\0'){
          symb=Infix[i];
          i++;
     if(symb>='a' && symb<='z')
     {
          Postfix[j]=symb;
          j++;
     }
     else{
          while(!IsEmpty(&s) && prcd(stackTop(&s),symb))
          {
               x=pop(&s);
               Postfix[j]=x;
               j++;

          }
          if(symb!=')')
               push(&s,symb);
          else
               pop(&s);
     }
     }
     while(!IsEmpty(&s))
     {
         x=pop(&s);
         Postfix[j]=x;
         j++;
     }
     Postfix[j]='\0';
     printf("%s",Postfix);


}
void main()
{
     char Infix[100];
     scanf("%s",Infix);
     InfixToPostfix(Infix);
}

