#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n+1][n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1)
			{
				a[i][j]=j;
			}
			else
			{
				a[i][j]=(a[i-1][j]+1)%n;
				if(a[i][j]==0){a[i][j]=n;}
			}
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
