#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,q,cnt=0;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>q;
    	if(q>m) cnt++;
    	else m-=q;
	}
	cout<<cnt;
	return 0;
}
