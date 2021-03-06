/*input: 4 5 9 22 11 2 15
output: 2 5 11 9 15 4 22
*/


#include <bits/stdc++.h>

using namespace std;
bool isprime(int a){
    if(a==2){
        return true;
    }else if(a%2==0){
        return false;
    }
    for(int i=3;i*i<=a;i+=2){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(int argc, char** argv)
{
    int a[20],n;
    int p[20],e[20],o[20],k=0,l=0,m=0;
    while(cin>>n){
        if(isprime(n)){
            p[k++]=n;
        }else if(n%2!=0){
            o[l++]=n;
        }else{
            e[m++]=n;
        }
    }
    for(int s=0;s<k;s++){
        for(int j=s+1;j<k;j++){
            if(p[s]>p[j]){
                int t=p[s];
                p[s]=p[j];
                p[j]=t;
            }
        }
        printf("%d ",p[s]);
    }
    for(int s=0;s<l;s++){
        for(int j=s+1;j<l;j++){
            if(o[s]>o[j]){
                int t=o[s];
                o[s]=o[j];
                o[j]=t;
            }
        }
        printf("%d ",o[s]);
    }
    for(int s=0;s<m;s++){
        for(int j=s+1;j<m;j++){
            if(e[s]>e[j]){
                int t=e[s];
                e[s]=e[j];
                e[j]=t;
            }
        }
        printf("%d ",e[s]);
    }
}
