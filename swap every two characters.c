/*input: shuttle
output: uhstelt
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    scanf("%s",s);
    int l=strlen(s);
    if(l<=2){
        printf("%s",s);
    }else{
        for(int i=0,j=i+2;i<l,j<l;i+=4,j+=4){
            char t=s[i];
            s[i]=s[j];
            s[j]=t;
        }
        printf("%s",s);
    }
}