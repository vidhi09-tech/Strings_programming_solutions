/******************************************************************************
Write a program to search for a character in a string
*******************************************************************************/

#include <stdio.h>

int main()
{
    char ch[30];
    
    char ch1;
    scanf("%c\n",&ch1);
    scanf("%[^\n]s",ch);
    int c=0;
    for(int i = 0;ch[i]!='\0';i++){
        if(ch[i]==ch1)
        c=1;
        break;
    }
    if(c==1)
    printf("present");
    else 
    printf("not present");
   
}
    
