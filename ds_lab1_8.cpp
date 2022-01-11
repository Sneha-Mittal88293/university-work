#include<stdio.h>
#include<string.h>
void search(char string[] , char word[])
{
    int m , n ,i ,found,j;
    m = strlen(string);
    n = strlen(word);
    for(i=0;i<m-n;i++)
    {
        found = 1;
        for(j=0;j<n;j++) 
        {
            if(string[i+j] !=word[j])
            {
            found = 0;
            break;
            }
        }
         if(found == 1)
        {
            printf("'%s' found at index: %d \n", word, i);
        }
    }
    
}

int main(){
     char string[60];
     char word[50];
     
     printf("enter the string: \n");
     gets(string);

     printf("enter the word: \n");
     gets(word);
     
     search(string , word );
     return 0;
}