/*input: apple
output: ab
input: xyz
output: -1
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    scanf("%s",s);
    char r='a';
    int p=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            printf("%c",r);
            r++;
            p=1;
        }
    }
    if(p==0){
        printf("-1");
    }
}