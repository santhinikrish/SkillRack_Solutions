/*input: everest
output: 2
*/


#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin,s);
    int l=s.length(),fin=0,c;
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(s[i]==s[j]){
                c=0;
                for(int p=i,q=j;p<=j,q>=i;p++,q--){
                    if(s[p]==s[q]){
                        c++;
                    }
                }
                if(c==j-i+1){
                    fin++;
                }
            }
        }
    }
    cout<<fin;
}