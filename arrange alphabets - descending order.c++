/*input: cake
output: keca
input: innovation
output: vtonia
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]<s[j]){
                char t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]){
            printf("%c",s[i]);
        }
    }
}
