#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    int minn=1e6;
    int maxx=-1e6;
    int sum=0;
    int count=0;
    for(auto &x:a)
    {
        cin>>x;
        minn=min(minn,x);
        maxx=max(maxx,x);
        sum+=(x%2==0)?x:0;
        if(x%2==0){continue;}
        else{count++;}
    }
    cout<<maxx<<endl<<minn<<endl<<sum<<endl<<count;
}
