/*input: 1245675
output: d
expla: 1+2+4+5+6+7+5
input: 111
output: c
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0){
        int r=n%10;
        sum+=r;
        n/=10;
    }
    if(sum>26){
        printf("%c",(sum%26)+96);
    }else{
        printf("%c",sum+96);
    }
}
