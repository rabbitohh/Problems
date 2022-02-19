/*WA£¬20·Ö*/
#include<bits/stdc++.h>
using namespace std;
int father[151000],mother[151000],j,m,n,x,y,z,p,q;
int getfa(int x)
{
    if (father[x]==x)return x;
    return father[x]=getfa(father[x]);
}
int getmo(int x)
{
    if (mother[x]==x)return x;
    return mother[x]=getmo(mother[x]);
}
int main()
{
    scanf("%d%d%d%d",&n,&m,&p,&q);
    for (int i=1; i<=n; i++)
        father[i]=i;
    for(int i=1;i<=m;i++)
    	mother[i]=i;
    for (int i=1; i<=p; i++)
    {
    	int x,y;
    	scanf("%d%d",&x,&y);
        x=getfa(x);
        y=getfa(y);
        if (x!=y)
            father[y]=x;
    }
    for (int i=1; i<=q; i++)
    {
    	int x,y;
    	scanf("%d%d",&x,&y);
    	x=0-x;
    	y=0-y;
        x=getmo(x);
        y=getmo(y);
        if (x!=y)
            mother[y]=x;
    }
    //cout<<mother[1];
    int cntf=0,cntm=0;
    for(int i=1;i<=n;i++)
    	if(father[i]==1) cntf++;
	for(int i=1;i<=m;i++)
		if(mother[i]==1) cntm++;
	cout<<min(cntf,cntm); 
    return 0;
}
