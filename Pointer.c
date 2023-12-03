#include<stdio.h>
void main()
{
    /* int *t;
     int x=70;
     printf("%u\n",&x);
     t=&x;
     printf("%u\n",t);
     printf("%d\n",*t);

     int *t;
     int A[10]={1,2,3,4,5,6,7,8,9};
     for(int i=0;i<9;i++)
     {
          printf("%d ",A[i]);
     }
     printf("\n");
     t=A;
     for(int i=0;i<9;i++)
     {
          printf("%d ",*(t+i));
     }*/

     int *t;
     int N;
     scanf("%d",&N);
     t=(int*)malloc(N*sizeof(int));

     for(int i=0;i<N;i++)
     {
          scanf("%d",(t+i));
     }

    // printf("\n");
     for(int i=0;i<N;i++)
     {
          printf("%d ",*(t+i));
     }
}
