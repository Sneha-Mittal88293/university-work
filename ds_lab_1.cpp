
#include<stdio.h>
int largest(int arr[],int n){
    int i , max;
    max=0;

    for(i=0;i<n;i++)
        if(arr[i]>max)
         max = arr[i];
         return max;
    
}

int main(){

    int arr[]={10,20,30,50,40};
    int n = sizeof(arr)/4;
    printf("largest element of the arr =%d",largest(arr,n));
    return 0;
}