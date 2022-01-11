#include<stdio.h>

    char concat( char *str1 , char *str2 ){
        
      
        while(*str1!= '\0')
        {
            ++str1;
           
        }
        while(*str2!= '\0')
        {
            *str1=*str2;  
            str1++;  
            str2++;  
             
        }
        *str1 = '\0';
           

    }
int main(){
    char string1[20];
    char string2[20];
    
    printf("enter the first string: \n");
    gets(string1);

    printf("enter the second string: \n");
    gets(string2);
    concat(string1 , string2);
    printf("enter the string after concatenation: %s",string1);
    
    return 0;
}