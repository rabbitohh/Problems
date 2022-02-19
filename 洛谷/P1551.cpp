#include<bits/stdc++.h>
using namespace std;
int fa[5001];
int findfarth(int x)
{
    if (fa[x]==x)return x;
    return fa[x]=findfarth(fa[x]);
}
int main()
{
    int n,m,q,x,y;
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++)
        fa[i]=i; 
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        if (findfarth(x)!=findfarth(y)) fa[findfarth(y)]=findfarth(x);
    }
    for(int i=1;i<=q;i++)
    {
        cin>>x>>y;
        if (findfarth(x)==findfarth(y)) cout<<"Yes"<<endl;   
        else cout<<"No"<<endl;
    }
}
