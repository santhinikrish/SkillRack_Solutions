/*Example Input/Output 1:
Input:
3
2
4 5 9
1 3 5
8 2 4
3 5
2 4
Output:
TRUE
Example Input/Output 2:
Input:
3
2
4 5 9
1 3 5
8 2 4
4 5
1 4
Output:
FALSE
*/




#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d\n%d",&n,&m);
    int a[n][n],b[m][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",&b[i][j]);
        }
    }
    int z=0,p=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==b[0][0]){
                for(int x=i,k=0;x<i+m,k<m;x++,k++){
                    for(int y=j,l=0;y<j+m,l<m;y++,l++){
                        if(a[x][y]==b[k][l]){
                            z++;
                        }
                    }
                }
            }
            if(z==m*m){
                p=1;
            }
            z=0;
        }
    }
    if(p==1){
        printf("TRUE");
    }else{
        printf("FALSE");
    }
}