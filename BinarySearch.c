#include<stdio.h>
int Binarysearch(int arr[],int n,int target )
{
     int low=0;
     int high=n-1;
     while(low<=high)
     {
          int mid=low+(high-low)/2;
          if(arr[mid]==target){
               return mid;
          }
          else if(arr[mid]<target){
               low=mid+1;
          }
          else{
               high=mid-1;
          }
     }
     return -1;
}
void main()
{
     int arr[100]={2,3,4,5,6};
     int n=5;
     int target=0;
     int x=Binarysearch(arr,n,target);
     printf("%d",x);
}
