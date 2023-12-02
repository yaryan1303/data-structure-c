#include<stdio.h>
int BinarySearch(int arr[],int l,int h,int target)
{

     if(l<=h)
     {
          int mid=l+(h-l)/2;
          if(arr[mid]==target)
          {
               return mid;
          }
          if(arr[mid]<target)
          {
               return BinarySearch(arr,mid+1, h,target);

          }
          else{
               return BinarySearch(arr,l,mid-1,target);
          }
     }
     return -1;
}
void main()
{
     int arr[]={10,20,30,40,50,60};
     int n=sizeof(arr)/sizeof(arr[0]);
     int target=50;

     int x=BinarySearch(arr,0,n-1,target);
     if(x==-1)
     {
          printf("Element Not Found %d",target);
     }
     else{
          printf("The Element is found at :%d",x);
     }

}
