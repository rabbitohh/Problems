#include<bits/stdc++.h>
using namespace std;
int n,k,aa[25],cnt;
bool ss(int a)
{
    for(int i=2;i*i<=a;i++)
    	if(a%i==0) return 0;
    return 1;
}
void dfs(int a,int b,int c)
{
    if(a==k)
	{
        if(ss(b)==1) cnt++;
        return;
    }
    for(int i=c+1;i<=n;i++)
        dfs(a+1,b+aa[i],i);
    return;
}

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>aa[i];
    dfs(0,0,0);
    cout<<cnt;
    return 0;
}
