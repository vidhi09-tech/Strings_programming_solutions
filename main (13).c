/******************************************************************************
Write a program to count the number of upper-case characters in a given string

*******************************************************************************/

#include <stdio.h>
void str(){
    char s[20];
    printf("Input a string\n");
    scanf("%[^\n]s\n",s);
    
    int i,c=0;
    for(i=0;s[i]!='\0';i++){
        if((s[i]>=65 && s[i]<=90) )
        c++;
    }
    
    printf("%d",c);
    
}
int main()
{
    str();
    

    return 0;
}
