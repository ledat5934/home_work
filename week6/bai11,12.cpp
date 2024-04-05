#include<bits/stdc++.h>
using namespace std;
void convert(long long i)
{
	if(i==1){cout<<1;return;}
	convert(i/2);
	cout<<i%2;
}
int to_hop(int n,int k)
{
    if (k == 0 || k == n) {
        return 1;
    }
    int h=to_hop(n-1,k);
    int l=to_hop(n-1,k-1);
    return h+l;
}
