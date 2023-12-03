#include<stdio.h>
#include<math.h>
int NearestPrime(int ts)
{
          int i=0,j=0;
          int flag=0;
          for(i=ts;i>=2;i--)
          {
              for(j=2;j<=sqrt(i);j++)
               {
                    if(i%j==0)
                         break;
               }
               if(j>sqrt(i))
                    return i;

          }
          if(flag==1)
               return 0;
          else
               return 1;

}

int DivisionHash(int key,int ts)
{
         int p=0,l=0;
         p=NearestPrime(ts);
         l=key%p;
         return l;
}

void main()
{
     int n= DivisionHash(79658,1000);
     printf("%d",n);
}
