/*input: 4
hello StanD TASK Fun
output: 2
input: 5
TIME watch le@p#rd wireS d@olphin
output: 4
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    char s[100];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%s\n",s);
        int c1=0,c2=0,c=0;
        for(int j=0;j<strlen(s);j++){
            if(isalpha(s[j])){
            if(islower(s[j])){
                c1++;
            }
            else if(isupper(s[j])){
                c2++;
            }
            }
            else if(s[j]=='!'||s[j]=='@'||s[j]=='#'||s[j]=='$'||s[j]=='%'||s[j]=='^'||s[j]=='&'||s[j]=='*'||
		s[j]=='('||s[j]==')'||s[j]=='-'||s[j]=='='||s[j]=='+'||s[j]=='/'||s[j]=='?'||s[j]=='`'||s[j]=='<'||s[j]=='>'){
                c++;
            }else if(s[j]>='0'&&s[j]<='9'){
                c++;
            }
        }
        if(c1==strlen(s)-c||c2==strlen(s)-c){
            count++;
        }
    }
    printf("%d",count);
}