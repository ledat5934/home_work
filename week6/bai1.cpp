#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<vector<bool>> check;
int n,m;
void generated(int n,int m,int k)
{
    v.resize(n+1, vector<int>(m+1, 0));
    check.resize(n+1, vector<bool>(m+1, false));
    random_device rd;
    mt19937 gen(rd());
    vector<pair<int, int>> positions;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            positions.push_back({i, j});
        }
    }
    shuffle(positions.begin(), positions.end(), gen);
    for (int i = 0; i < min(k, n * m); i++) {
        v[positions[i].first][positions[i].second] = 1;
    }
}
int xi[8]={0,0,1,1,1,-1,-1,-1};
int yi[8]={1,-1,0,1,-1,0,1,-1};
void solve(int x,int y)
{
    if(v[x][y]==1){cout<<"YOU'RE DEAD"<<endl;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(v[i][j]==1){cout<<v[i][j]<<" ";}
                else{cout<<0<<" ";}
            }
            cout<<endl;
        }
    }
    else
    {
    	check[x][y]=true;
        int countt=0;
        for(int i=0;i<8;i++)
        {
            int x2=x+xi[i];
            int y2=y+yi[i];
            if(x2>=1&&x2<=n&&y2>=1&&y2<=m)
            {
                if(v[x2][y2]==1){countt++;}
            }
        }
        v[x][y]=countt;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
            	if(i==0&&j==0){cout<<"  ";}
            	else if(i==0&&j!=0){cout<<j<<" ";}
            	else if(j==0&&i!=0){cout<<i<<" ";}
                else if(check[i][j])
                {
                    cout<<v[i][j]<<" ";
                }
                else
                {
                    cout<<"*"<<" ";
                }
            }
            cout<<endl;
        }

    }
}
int main()
{
	int k;
	cin>>n>>m>>k;
	generated(n,m,k);
	while(true)
	{
		int x,y;
		cin>>x>>y;
		solve(x,y);
	}
}
