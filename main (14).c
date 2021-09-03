/******************************************************************************
Write a program to reverse a given string without using in-built functions
*******************************************************************************/

#include <stdio.h>
void str(){
    char s[20];
    printf("Input a string\n");
    scanf("%[^\n]s\n",s);
    
    int i,c=0;
    for(i=0;s[i]!='\0';i++){
        c++;
    }
    for(int j = (c-1);j>=0;j--){
    
    printf("%c",s[j]);
    }
    
}
int main()
{
    str();
    

    return 0;
}
