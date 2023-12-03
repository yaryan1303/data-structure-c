#include<stdio.h>
#include<stdlib.h>
#include"ststack.h"

void main()
{
     /*initialise();
     push(100);
     push(200);
     push(300);
     push(400);
     //push(500);
     int x=pop();
     printf("\nThe deleted item is %d",x);
      x=pop();
     printf("\nThe deleted item is %d",x);
      x=pop();
     printf("\nThe deleted item is %d",x);
      x=pop();
     printf("\nThe deleted item is %d",x);
      x=pop();
     printf("\nThe deleted item is %d",x);*/
     struct stack S;

     int N,x;
     char DAT[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

     scanf("%d",&N);
     initialise(&S);
     while(N>0){
          x=N%2;
          push(&S,x);
          N=N/2;
     }
     while(!IsEmpty(&S)){
       x=pop(&S);
       printf("%c",DAT[x]);


     }



}

