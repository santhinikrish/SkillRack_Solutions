/*input: 2 3
4 5 9
1 3 5
output: 
1 4
3 5
5 9*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=n-1;j>=0;j--){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}