#include<stdio.h>
#include<math.h>
int DigitCount(int N)
{
     int c=0;
     while(N!=0)
     {
          c++;
          N=N/10;
     }
     return c;
}
int FoldingHash(long long key,int ts)
{
     long long N=key;
     int d=DigitCount(ts-1);
     int s=pow(10,d);
     int sum=0;
     while(N!=0)
     {
          int r=N%s;
          sum=sum+r;
          N=N/s;
     }
     return sum%ts;
}
void main()
{
     int n =FoldingHash(2200320100061,100);
     printf("%d\n",n);
     n =FoldingHash(2200320100004,100);
     printf("%d",n);
}
