#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int pascal[n+1][n+1];
    memset(pascal,0,sizeof(pascal));
    pascal[1][1]={1};
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(pascal[i][j]!=0)
            {
                cout <<left<< setfill(' ') << setw(2) << pascal[i][j] << " ";
            }
        }
        cout<<endl;
    }
}
