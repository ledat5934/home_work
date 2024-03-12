#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;cin>>a;
    string tmp=a;
    reverse(a.begin(),a.end());
    if(tmp==a)
    {
        cout<<"YES";
    }
    else{cout<<"NO";}
}
