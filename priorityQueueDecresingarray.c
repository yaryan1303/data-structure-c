#include<stdio.h>
void ArrayReversal(int arr[],int n)
{
     int i=0;
     int j=n-1;
     while(i<j)
     {
          int temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
          i++;
          j--;
     }
     printf("Reversal of array\n");
     print(arr,n);
}

/******************************************/
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



void PQInsertion(int arr[],int N,int key)
{
     int i=0;
     while(i<N && arr[i]>key){
          i++;
     }
     printf("The index of the Insertion %d:\n",i);
     Insertmet(arr,N,i,key,100);
}

/******************************************/
void PQDeletion(int arr[],int n){
     int x=arr[n-1];
     n--;
     printf(" The deleted Element is:%d\n",x);
     printf("Array after deletion\n");
     print(arr,n);
}

void print(int arr[],int n)
{
     for(int i=0;i<n;i++)
     {
          printf("%d ",arr[i]);
     }
     printf("\n\n");
}

void main()
{
     int arr[100]={2,3,4,5,6};
     int n=5;
     int key=3;
     ArrayReversal(arr,n);
     PQInsertion(arr,n,key);
     n++;
     PQDeletion(arr,n);


}
