//input:  cricket,  2
//ouput:  etcrick

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[100];
    int n;
    scanf("%s\n%d",s,&n);                      
    int l=strlen(s);                           
    int i,j=0;
    for(i=l-n;l!=j;i++,j++,i%=l){
        printf("%c",s[i]);
    }
}