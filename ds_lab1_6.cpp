#include<stdio.h>
#include<string.h>

char reverse (char str[]){
    int i , len;
    len = strlen(str);

    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}
int main(){
    char str[100];
    printf("enter the string : ");
    gets(str);

    reverse(str);
   

}