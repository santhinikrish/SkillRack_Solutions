/*input: pineapple p
output: pqr
input: zandozazzfgq z
output: zabc
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100],a;
    scanf("%s %c",s,&a);
    char c=a;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==a){
            if(c=='z'){
                printf("%c",c);
                c='a';
            }else{
                printf("%c",c);
                c++;
            }
        }
    }
}