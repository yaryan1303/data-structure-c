#include<stdio.h>
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
int MidSquare(long long key,int ts)
{
     int d=DigitCount(ts-1);
     int l=DigitCount(key);
     int e=(2*l-d)/2;
     int r=pow(10,e);
     key=(key*key)/r;
     int mod=pow(10,d);
     return key%mod;
}
void main()
{
     int n=MidSquare(69844,100);
     printf("%d\n",n);
     n=MidSquare(59377,100);
     printf("%d",n);

}
