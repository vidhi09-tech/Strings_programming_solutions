/******************************************************************************
Convert the digits of the string into a single number

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[100];
    int c=0;
    scanf("%[^\n]s",s);
    for(int i = 0; s[i]!='\0';i++){
       if(s[i]>=48 && s[i]<=57){
           printf("%c",s[i]);
           c=1;
       }
    }
    if(c==0)
    printf("%d",0);

    
}
