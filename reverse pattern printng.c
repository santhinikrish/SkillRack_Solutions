/*input:
5
output:
15 10 6 3 1
14 9 5 2
13 8 4
12 7
11*/



#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,t;;
    scanf("%d",&n);
    int f=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        a=n;
        t=f;
        printf("%d ",t);
        for(int j=0;j<n-1-i;j++){
            printf("%d ",t-a);
            t-=a;
            a--;
        }
        f--;
        printf("\n");
    }
}