#include<stdio.h>
int Insertmet(int arr[],int n,int index,int key,int capacity){
     if(n>=capacity){
          return -1;
     }
     for(int i=n-1;i>=index;i--){
          arr[i+1]=arr[i];
     }
     arr[index]=key;
     n++;
     printf("The New array after Insertion:\n");
     print(arr,n);

     //return 1;
}
/******************************************/

void ArrayDeletion(int arr[],int N,int pos)
{
     for(int i=1;i<N;i++)
     {
          arr[i-1]=arr[i];
     }

     N--;

}

/******************************************/

int PQInsert(int arr[],int N,int key)
{
 int i=0;
     while(i<N && key>=arr[i]){
          i++;
     }
     printf("The position of the insert Element is:%d\n",i);
     Insertmet(arr,5,i,key,100);


}


PQdeletion(int arr[],int N)
{
     int x=arr[0];
     printf("The deleted element is:%d\n",x);
     ArrayDeletion(arr,N,0);
     printf("Array after deletion of the first element:\n");
     print(arr,N);
}
/******************************************/

void print(int arr[],int n){
     for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
     }
}

/******************************************/



void main()
{
     int arr[100]={3,4,5,6,7};
     int n=5;
     int key=5;
     //int N=5;
     PQInsert(arr,n,key);
     PQdeletion(arr,n);



}
