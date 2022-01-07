#include<stdio.h>

int search(int *pointer, int n , int find){
    int i;
    for(i=0;i<n;i++){
        if (*(pointer+i)==find)
        return i;
    
        

    }
    return -1;
}

int main(){
    int arr[100],i, n ,position,find;
    printf("enter the no. of element in an array: ");
    scanf("%d",&n);

    printf("enter %d elements\n",n);
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);

        }
        printf("enter the element to find ");
        scanf("%d",&find);
        position = search(arr,n,find);

        if(position == -1)
printf("%d element is not present in the array",find);
else
printf("%d element is present in the array at location %d",find,position+1);

return 0;
    }
