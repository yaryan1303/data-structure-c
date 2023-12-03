#include<stdio.h>
void Transverse(int A[],int N){
     for(int i=0;i<N;i++){
          printf("%d ",A[i]);
     }

}
/************************/
void MergeArray(int A[],int N,int B[],int M){
     int i=0,j=0,k=0;
     int C[13];
     while(i<N && j<M){
          if(A[i]<B[j]){
               C[k]=A[i++];
               k++;
          }
          else{
               C[k++]=B[j++];
     }
     }


   while(i<N){
     C[k++]=A[i++];
   }
   while(j<M){
     C[k++]=B[j++];
   }
   printf("Merged Array is:");
   Transverse(C,k);

}
/************************/
void Union(int A[],int N,int B[],int M){
     int i=0,j=0,k=0;
     int C[13];
     while(i<N && j<M){
          if(A[i]<B[j]){
               C[k++]=A[i++];
          }
          else{
               if(A[i]>B[j]){
                  C[k++]=B[j++];
               }
               else{
                    C[k]=B[j];
                    i++;
                    j++;
                    k++;
               }

     }
     }


   while(i<N){
     C[k++]=A[i++];
   }
   while(j<M){
     C[k++]=B[j++];
   }
   printf("Union is:");
   Transverse(C,k);

}
/************************/
void Intersection(int A[],int N,int B[],int M){
     int i=0,j=0,k=0;
     int C[13];
     while(i<N && j<M){
          if(A[i]<B[j]){
               i++;
          }
          else{
               if(A[i]>B[j]){
                  j++;
               }
               else{
                    C[k]=B[j];
                    i++;
                    j++;
                    k++;
               }

     }
     }



   printf("Intersection is:");
   Transverse(C,k);

}
/************************/
void Difference(int A[],int N,int B[],int M){
     int i=0,j=0,k=0;
     int C[13];
     while(i<N && j<M){
          if(A[i]<B[j]){
               C[k++]=A[i++];
          }
          else{
               if(A[i]>B[j]){
                  //C[k++]=B[j++];
                  j++;
               }
               else{
                    //C[k]=B[j];
                    i++;
                    j++;

               }

     }
     }


   while(i<N){
     C[k++]=A[i++];
   }

   printf("Differnece is:");
   Transverse(C,k);

}
/************************/
/************************/
void SymetricDiffernece(int A[],int N,int B[],int M){
     int i=0,j=0,k=0;
     int C[13];
     while(i<N && j<M){
          if(A[i]<B[j]){
               C[k++]=A[i++];
          }
          else{
               if(A[i]>B[j]){
                  C[k++]=B[j++];
               }
               else{
                   // C[k]=B[j];
                    i++;
                    j++;

               }

     }
     }


   while(i<N){
     C[k++]=A[i++];
   }
   while(j<M){
     C[k++]=B[j++];
   }
   printf("SymetricDiffernece is:");
   Transverse(C,k);

}
/************************/
void main(){
     int A[]={2,4,6,8,10,12};
     int B[]={1,3,4,5,6,7,8};
     int N=6;
     int M=7;
     Transverse(A,N);
     printf("\n");
     Transverse(B,M);
     printf("\n\n");
     MergeArray(A,N,B,M);
     printf("\n\n");
     Union(A,N,B,M);
     printf("\n\n");
     Intersection(A,N,B,M);
     printf("\n\n");
     Difference(A,N,B,M);
     printf("\n\n");
     SymetricDiffernece(A,N,B,M);
}
