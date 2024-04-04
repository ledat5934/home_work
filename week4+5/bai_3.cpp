#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int count=0;
        for(int i=a;i<=b;i++)
        {

            string h=to_string(i);
            string tmp=h;
            reverse(h.begin(),h.end());
            if(tmp==h)
            {
                count++;
            }

        }
        cout<<count<<endl;
    }

}
