#include<bits/stdc++.h>
using namespace std;
int xi[8]={0,0,1,1,1,-1,-1,-1};
int yi[8]={1,-1,0,1,-1,0,1,-1};
char bomb[10][10];
char num_bomb[10][10];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cin>>bomb[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(bomb[i][j]!='*')
            {
                num_bomb[i][j]='0';
                for(int k=0;k<8;k++)
                {
                    int x=i+xi[k];
                    int y=j+yi[k];
                    if(x>=0&&x<n&&y>=0&&y<m&&bomb[x][y]=='*')
                    {
                        num_bomb[i][j]+=1;
                    }
                }
            }
            if(bomb[i][j]=='*')cout<<bomb[i][j]<<" ";
            else cout<<num_bomb[i][j]-'0'<<" ";
        }
        cout<<endl;
    }
}
