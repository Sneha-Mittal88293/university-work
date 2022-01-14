#include<stdio.h>
int main(){
    int n,arr[n],i;
    scanf("%d",&n);

    for(i=0;i<n;i++){
     printf("%d",arr[i]);
    }
    for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
     arr[i]=arr[i]+arr[i-1];
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    int l,r;
    
    return 0;
    

}