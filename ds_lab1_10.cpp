#include<stdio.h>
int search (int arr[] , int n , int found ){
    int i;
    for(i=0;i<n;i++){
        if (found == arr[i]){
            return i;
        }

    }
}
int main(){
    int n ,i, found;
    printf("Enter the size of array :\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of array :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search: \n");
    scanf("%d",&found);

    printf("element found at index : %d" ,search(arr ,n , found));

    return 0;    
}