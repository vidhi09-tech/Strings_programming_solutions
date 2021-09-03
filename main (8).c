/******************************************************************************

String functions strrev and other two using gets and puts function
this program only runs in turbo c/c++ not in c-gcc compiler

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char str[20];
    gets(str);
    //reverse string
    printf("\n string: %s",str); 
    printf("\n reversing the string: %s",strrev(str));
    //lowercase
    printf("\n lowering the string: %s",strlwr(str));
    //uppercase
    printf("\n uppercase the string: %s",strupr(str));
    

    return 0;
}
