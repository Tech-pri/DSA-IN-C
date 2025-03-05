//BINARY SEARCH (WORKS ONLY ON SORTED ARRAY)
#include<stdio.h>
int binarySearch( int arr[],int n,int target){
    int start=0;
    int end= n-1;
    int mid;
    while (start<=end)
    { 
        mid=(start+end)/2;
     if(target>arr[mid])
     {
        start=mid+1;
     }
     else if(target<arr[mid]){
        end=mid-1;
     }
     else{
        return mid;
     }

    }
   return -1;
    
}
int main (void){
    int arr[]= { 1,3,6,7,8,89,90,124,67};
   
    int n= sizeof(arr) / sizeof(arr[0]);
    int target=89;
    int result;
    result= binarySearch(arr,n,target);
    if(result!=-1){
        printf("the ele,emt has found at %d\n",result);
    }
    else{
        printf("The element has not found");
    }
    return 0;
}