/*input: HTHTHTHT
OUTPUT: VALID
input: HTHTTHHT
output: INVALID
input: THT
output: INVALID
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int l=strlen(s),c=0;
    if(l%2!=0){
        printf("INVALID");
        return 0;
    }else{
        for(int i=0,j=i+1;i<strlen(s)-1,j<strlen(s);i+=2,j+=2){
            if(s[i]=='H' && s[j]=='T'){
                c++;
            }
        }
    }
    if(c*2==l){
        printf("VALID");
    }else{
        printf("INVALID");
    }
}