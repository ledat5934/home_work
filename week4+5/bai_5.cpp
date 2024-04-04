#include<bits/stdc++.h>
using namespace std;
int mod(int a,int b)
{
	if (a<0){return b+a;}
	return a%b;}
int arr[100][100];
bool visited[100][100];
int n;
int xi[2]={-1,1};
int yj[2]={1,0};
void solve(int i,int j,int num)
{
	arr[i][j]=num;
	visited[i][j]=true;
	if(num==n*n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		exit(0);
	}
	for(int k=0;k<2;k++)
	{
		int x=mod(i+xi[k],n);
		int y=mod(j+yj[k],n);
		if(!visited[x][y])
		{
			solve(x,y,num+1);
			break;
		}
	}
}


int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			visited[i][j]=false;
		}
	}
	solve(0,n/2,1);
}
