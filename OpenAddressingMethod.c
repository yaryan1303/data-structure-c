
#include<stdio.h>
int LinearProbing(int TableLL[],int ts,int x)
{
     int m=x%ts;
     int flag=1;
     if(TableLL[m]==0)
     {
          TableLL[m]=x;
     }
     else
     {
          flag=0;
          for(int i=1;i<ts;i++)
          {
               int newPos=(m+1)%ts;
               if(TableLL[newPos]==0)
               {
                    TableLL[newPos]=x;
                    flag=1;
                    break;
               }

          }
          return flag;
     }
}
/******************************************************/
int QuadraticProbing(int TableLL[],int ts,int x)
{
     int m=x%ts;
     int flag=1;
     if(TableLL[m]==0)
     {
          TableLL[m]=x;
     }
     else
     {
          flag=0;
          for(int i=1;i<ts;i++)
          {
               int newPos=(m+i*i)%ts;
               if(TableLL[newPos]==0)
               {
                    TableLL[newPos]=x;
                    flag=1;
                    break;
               }

          }
          return flag;
     }
}

/******************************************************/
int DoubleHashingProbing(int TableLL[],int ts,int x)
{
     int m=x%ts;
     int flag=1;
     if(TableLL[m]==0)
     {
          TableLL[m]=x;
     }
     else
     {
          flag=0;
          int mdash=(2*x-7)%ts;
          for(int i=1;i<ts;i++)
          {
               int newPos=(m+i*mdash)%ts;
               if(TableLL[newPos]==0)
               {
                    TableLL[newPos]=x;
                    flag=1;
                    break;
               }

          }
          return flag;
     }
}
void main()
{
     int TableLL[15]={0};
     int x,n,ts=15;

     printf("Enter the number of the element :\n");
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
          scanf("%d",&x);
          DoubleHashingProbing(TableLL,ts,x);
     }
     for(int i=0;i<ts;i++)
     {
          printf("%d",i);
          printf("   ");

     }
     printf("\n");
     for(int i=0;i<ts;i++)
     {
          printf("-----");


     }
     printf("\n");
      for(int i=0;i<ts;i++)
     {
          printf("%d",TableLL[i]);
          printf("   ");


     }



}
