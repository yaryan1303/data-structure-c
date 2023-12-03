#include<stdio.h>
#include"header.h"
#include<stdlib.h>
int max(struct stack s1,struct stack s2 ){
     int max,x;
     max=stackTop(&s1);
     while(!IsEmpty(&s1)){
          x=pop(&s1);
          if(x>max){
               max=x;
          }
          push(&s2,x);
     }
     while(!IsEmpty(&s2))
     {
         x=pop(&s2);
         push(&s1,x);
     }
     return max;

}
void main(){
     struct stack s1;
     struct stack s2;
     Initialise(&s1);
     Initialise(&s2);
     push(&s1,7);
     push(&s1,5);
     push(&s1,12);
     push(&s1,13);
     push(&s1,6);


     int x=max(s1, s2);
     printf("%d",x);





}


