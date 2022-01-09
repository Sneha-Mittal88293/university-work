#include<stdio.h>
int power(int x , int y){

    int e=1;
    for(int i=1; i<=y; i++){
        e = e*x;
        
    }
    return e;
}


int main(){
    int x , y;
    printf("enter the number x and y :");
    scanf("%d %d",&x,&y);
    int f = power(x , y);
    printf("%d",f);
    return 0;
}