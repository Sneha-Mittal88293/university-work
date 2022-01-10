#include<stdio.h>
void func(int choice , int n,int arr[])
{
    int i,temp,j;
    switch(choice)
    {
        case 1:
        {
            for(i=0;i<n;i++ )
            {
                for(j=i+1;j<n;j++)
                {
                    if(arr[i]>arr[j])
                    {
                        temp = arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
            for(i=0;i<n;i++)
            printf("%d",arr[i]);
        }
        break;
        case 2:
        {
          for(i=0;i<n;i++ )
          {
                for(j=i+1;j<n;j++)
                {
                    if(arr[j]>arr[i])
                    {
                        temp = arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }               

                }
           }
          for(i=0;i<n;i++)
          printf("%d",arr[i]);
        }
break;
default:
printf("error");     
}
}


int main()
{
    int arr[50],n,choice,i;
    printf("enter the size of array: \n");
    scanf("%d",&n);
    
    printf("enter the elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("enter the choice \n 1 for ascending order \n 2 for decending order :\n");
    scanf("%d",&choice);
    func(choice , n , arr);
    return 0;
}