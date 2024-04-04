#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+1];
    set<int>s;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    if(s.size()!=0)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}
