/******************************************************************************
Write a program to find the length of the string without using in-built function

*******************************************************************************/

#include <stdio.h>

int main()
{
    char ch[30];
    scanf("%[^\n]s",ch);
    int c=0;
    for(int i = 0;ch[i]!='\0';i++)
    c++;
    
    printf("%d",c);

   
}
