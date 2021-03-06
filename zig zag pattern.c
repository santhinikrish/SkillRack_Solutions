/*input: 3 3
1 2 3
4 5 6
7 8 9
output:
7 8 9
6 5 4
1 2 3
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int rev=0;
    for(int i=n-1;i>=0;i--){
        int dif=rev ? -1 : 1;
        int j=rev ? m-1 : 0;
        for(int ctr=1;ctr<=m;ctr++){
            printf("%d ",a[i][j]);
            j=j+dif;
        }
        rev=!rev;
        printf("\n");
    }
}
