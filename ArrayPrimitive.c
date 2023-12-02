#include<stdio.h>
void Transverse(int *x,int N){
     int arr[30];
     printf("Printing the element from the array");
     for(int i=0;i<N;i++){
     printf("%d\n",x[i]);
}
}
//Deleting the element in the matrix
int findElement(int arr[],int n,int key);

int deleteElement(int arr[],int n,int key){
     int pos=findElement(arr,n,key);
     if(pos == -1){
          return n;
     }
     for(int i=pos;i<n-1;i++){
          arr[i]=arr[i+1];
     }
     return n-1;
}

int findElement(int arr[],int n,int key){
     for(int i=0;i<n;i++)
          if(arr[i]==key)
               return i;


     return -1;



}
//Inserting in the array
void Insert(int arr[],int n,int index,int key,int capacity){
     if(n>=capacity){
          return -1;
     }
     for(int i=n-1;i>=index;i--){
          arr[i+1]=arr[i];
     }
     arr[index]=key;
     return 1;

}
//Inserting in the sorted Array
int insertsorted(int arr[],int n,int capacity,int key){
     if(n>=capacity)
          return n;


     int i;
     for( i=n-1;(i>=0&&key<arr[i]);i--)
          arr[i+1]=arr[i];

     arr[i+1]=key;
     return (n+1);





}
void MissingNumberNonMissingNumber(int *A,int N){
     int DAT[20]={0};
     int x;
     for(int i=0;i<N;i++){
        x=A[i];
        DAT[x]++;

     }
     for(int i=0;i<10;i++){
         //printf("%d: %d\n",i,DAT[i]);

     if(DAT[i]==0){
          printf("MIssing");
     }
     if(DAT[i]==1){
          printf("Non Repeating");
     }
     if(DAT[i]>1){
          printf(" Repeating");
     }
     printf("%d: %d\n ",i,DAT[i]);
     }
}

void main(){
     //Array deleletion
    /* int arr[]={3,5,6,4};
     int n=sizeof(arr[0]);
    // printf("Print");
     //printf("%d",n);
     int key=6;
     printf("Array before deletion");
     for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
     }

     printf("\n");


     n= deleteElement(arr,n,key);
      printf("After deletion:");
     for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
     }*/
    /* printf("**************************************\n");
    //Array Insertion........
     int arr[100]={2,3,4,5,3};
     int n=5;
     int index=3;
     int capacity;
     int key=34;
     printf("Before Insertion\n");
     for(int i=0;i<n;i++){
          printf("%d\n",arr[i]);
     }

     Insert(arr,n,index,key,100);
     n++;
     printf("after Insertion\n");
     for(int i=0;i<n;i++){
          printf("%d\n",arr[i]);
     }

     printf("**************************************");*/
     /*printf("**************************************\n");
     int arr[100]={2,4,6,8,10,12};
     int n=6;
     int key=9;
     int capacity=100;
     printf("Array before Insertion: ");
     for(int i=0;i<n;i++){
          printf("%d ",arr[i]);

     }
     n=insertsorted(arr,n,capacity,key);
     printf("Array after Insertion:");
     for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
     }*/
     /*
     //Array Traversing
     int arr[30];
      int N;
      printf("Enter the Number of element");
      scanf("%d",&N);
      printf("Enter the element in the array");
      for(int i=0;i<N;i++){
          scanf("%d",&arr[i]);
     }
      Transverse(arr,N);*/

      //Which Number is Repeating in the array
      /* int n;
     printf("Enter the number of element in an array");
     scanf("%d",&n);
     int x[30];
     printf("Enter the element in an array");
     for(int i=0;i<n;i++){
          scanf("%d",&x[i]);
     }
     MissingNumberNonMissingNumber(x,n);*/


     //Missing Number in the array
    /* int arr[20];
     int n;
     int sum=0;
     printf("Enter the number of element in an array");
     scanf("%d",&n);
     printf("Enter the element in an array");
     for(int i=0;i<n;i++){
          scanf("%d",&arr[i]);
     }
     int Sum_Natural_Number=((n+1)*(n+2))/2;
     for(int i=0;i<n;i++){
       sum=sum+arr[i];
     }

     int MissingNumber=Sum_Natural_Number-sum;
     printf("Missing Number is %d",MissingNumber);*/


     //array Reversal
     /*int arr[20];
     int n;
     printf("Enter the Number of the element in the array");
     scanf("%d",&n);
     printf("Enter the element in the array");
     for(int i=0;i<n;i++){
          scanf("%d ",&arr[i]);
     }
     printf("Reverse of the array:\n");
     for(int i=0;i<n/2;i++){
          int temp=arr[i];
          arr[i]=arr[n-i-1];
          arr[n-i-1]=temp;


     }
     for(int i=0;i<n;i++){
          printf("%d\n",arr[i]);
     }*/









}

