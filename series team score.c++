/*input: 
3 5 1
3 2 0
output:
7 1
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int a[100],i=0;
    while(scanf("%d ",&a[i])==1){
        i++;
    }
    int l=i,s=0,t=0;
    for(int k=0,j=l/2;k<l/2&&j<l;k++,j++){
        if(a[k]>a[j]){
            s+=3;
        }else if(a[j]>a[k]){
            t+=3;
        }else{
            s++;
            t++;
        }
    }
    printf("%d %d",s,t);
}
