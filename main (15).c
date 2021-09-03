/******************************************************************************
String reverse except the special character
Write a program to reverse a string except the special characters
code is not correct
*******************************************************************************/

#include<stdio.h>
int main(){
    char str[1000],temp;
    int len,i,j;
    scanf("%[^\n]s",str);
    for(len=0;str[len]!='\0';len++);
    for(i=0,j=len-1;i<j;i++,j--){
        while(!((str[i]>=97 && str[i]<=122)||(str[i]>=65 && str[i]<=90)))
        i++;
        while(!((str[i]>=97 && str[i]<=122)||(str[i]>=65 && str[i]<=90)))
        j--;
        if(i<j){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        
    }
    printf("%s",str);
}