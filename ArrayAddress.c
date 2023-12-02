#include<stdio.h>
void main(){
     //Address of 1D array
    /* int A[10];
     int x;
     int i=7;
     x=i-0;
     printf("%u\n",&A[7]);
     printf("%u",A+x);


     //Address of 2D array


      int A[5][4];
     int x;
     int i=4,j=3;
     x=(i-0)*(3-0+1)+(j-0);
     printf("%u\n",&A[i][j]);
     printf("%u",A[0]+x);*/


     //Address of 3D Array



     int A[5][4][5];
     int x;
     int i=4,j=3,k=3;
     x=(i-0)*(3-0+1)*(4-0+1)+(j-0)*(4-0+1)+(k-0);
     printf("%u\n",&A[i][j][k]);
     printf("%u",A[0][0]+x);

}
