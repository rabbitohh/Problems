#include<bits/stdc++.h>
using namespace std;
int a[1000006]; 
int main()
{
    int l,r,mid;
    int k;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    int maxx=0;
    for(int i=1;i<=n;i++)
    	if(a[maxx]<a[i])
    		maxx=i;
	r=maxx;
    for(int i=1;i<=m;i++)
    {
    	cin>>k;
    	int pos=lower_bound(a+1,a+maxx+1,k)-a;
		if(a[pos]==k) cout<<pos<<' ';
		else cout<<-1<<' ';
	}    
}
