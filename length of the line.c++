/*input: 
0 4
3 0
output: 5.00
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int a1,a2,b1,b2;
    cin>>a1>>b1>>a2>>b2;
    float x=float(abs(a1-a2));
    float y=float(abs(b1-b2));
    printf("%.2f",sqrt((x*x)+(y*y)));
}
