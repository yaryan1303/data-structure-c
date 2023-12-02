#include<stdio.h>
void ToH(int n,char A,char B,char C){
     if(n==1){
          printf("%c --> %c\n",A,C);
     }
     else{
          ToH(n-1,A,C,B);
          printf("%c --> %c\n",A,C);
          ToH(n-1,B,A,C);
     }
}
void main(){
     ToH(4,'A','B','C');

}
