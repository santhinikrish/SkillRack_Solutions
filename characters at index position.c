/*input: 4
orange
apple
lemon
lion
output: opmn
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    char s[100];
    for(int i=0;i<n;i++){
        scanf("%s",s);
        for(int j=0;j<strlen(s);j++){
            printf("%c",s[i]);
            break;
        }
    }
}
