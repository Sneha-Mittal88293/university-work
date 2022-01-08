#include<stdio.h>
int prime(int n){
 int i,count=0;
    for(i=2;i<=n/2;i++)
    {
          if (n%i == 0)
          {
           count = 1;
            break;  
          } 
        } 
     if(n==1)
        count =1;
        return count;
}   

        


int main(){
    int n;
     printf("enter the number: \n");
     scanf("%d",&n);

    int k= prime(n);

     if (k==1)
    printf(" not prime no.");
    else
    printf(" prime no.");

    return 0;
}