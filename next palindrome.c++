/*input: 909
output: 919
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    n++;
    for(;;n++){
        int x=n;
        int sum=0;
        while(x>0){
            sum=sum*10+(x%10);
            x/=10;
        }
        if(sum==n){
            cout<<sum;
            break;
        }
    }
}
