/******************************************************************************
Write a program to accept the string from the user and display the string in the 
 password format without making any change in the input array

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[100];
    scanf("%[^\n]s",s);
    for(int i = 0; s[i]!='\0';i++){
        printf("*");
    }

    return 0;
}
