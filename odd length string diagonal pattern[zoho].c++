/*input: cry
output:
c y
 r
c y
input: tiger
output:
t   r
 i e
  g
 i e
t   r
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        int f=s.length()-i-1;
        for(int j=0;j<s.length();j++){
            if(i==j){
                cout<<s[j];
            }else if(j==f){
                cout<<s[j];
            }else{
                cout<<" ";
            }
        }
        cout<<'\n';
    }
}
