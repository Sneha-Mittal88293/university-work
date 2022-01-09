#include<stdio.h>
#include<string.h>
char replace(char str[],char c1, char c2){
    int i=0;
    
    while(str[i]!='\0')
    {
        if(str[i]==c1)
        str[i] = c2;
        i++;  
    }
    printf("%s",str);
    
}
int main(){
   char str[100],c1 ,c2; 
   printf("enter the string :");
   scanf("%s",&str);
    fflush(stdin);
    
    printf("\n Please Enter the Character that you want to replace : ");
    scanf("%c", &c1);
    fflush(stdin);

    printf("\n Please Enter the second Character that you want to replace : ");
    scanf("%c", &c2);
    fflush(stdin);

    replace(str,c1,c2);
return 0;
   
}