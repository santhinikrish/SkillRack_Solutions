/*input: She is happy
output: She Is Happy
*/


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    char s[500];
    scanf("%[^\n]",s);
    for(int i=0;i<strlen(s);i++){
        if(i==0){
            printf("%c",toupper(s[i]));
        }else if(s[i]==' ' && isalpha(s[i+1])){
            printf(" %c",toupper(s[i+1]));
            i++;
        }else{
            printf("%c",s[i]);
        }
    }
}
