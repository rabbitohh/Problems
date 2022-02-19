#include<bits/stdc++.h>
using namespace std;
struct aa
{
	int d;
	int ans;
};
int flag[100][100];
aa x[200000];
aa y[200000];
char a[100][100];
int main()
{
	int m,n;
	while(true)
	{
		cin>>m>>n;
		if(m==0&&n==0) return 0;
		int lx,ly;//¿ÓÂ–“£ 
		int yx,yy;//œ…“© 
		for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='@')
					lx=i,ly=j;
				if(a[i][j]=='*')
					yx=i,yy=j; 
			}
		int h=0,t=0;
		x[h].d=lx;y[h].d=ly;
		flag[lx][ly]=1;
		int aaaa=0;
		while(t<=h)
		{
			if(flag[x[t].d+1][y[t].d]==0&&x[t].d+1<=m&&(a[x[t].d+1][y[t].d]=='.'||a[x[t].d+1][y[t].d]=='*')) 
				x[++h].d=x[t].d+1,y[h].d=y[t].d,x[h].ans=x[t].ans+1,flag[x[h].d][y[h].d]=1;
			if(x[h].d==yx&&y[h].d==yy)
			{
				cout<<x[h].ans<<endl;aaaa=1;
				break;
			}
			if(flag[x[t].d-1][y[t].d]==0&&x[t].d-1>=1&&(a[x[t].d-1][y[t].d]=='.'||a[x[t].d-1][y[t].d]=='*')) 
				x[++h].d=x[t].d-1,y[h].d=y[t].d,x[h].ans=x[t].ans+1,flag[x[h].d][y[h].d]=1;
			if(x[h].d==yx&&y[h].d==yy)
			{
				cout<<x[h].ans<<endl;aaaa=1;
				break;
			}
			if(flag[x[t].d][y[t].d-1]==0&&y[t].d-1>=1&&(a[x[t].d][y[t].d-1]=='.'||a[x[t].d][y[t].d-1]=='*')) 
				x[++h].d=x[t].d,y[h].d=y[t].d-1,x[h].ans=x[t].ans+1,flag[x[h].d][y[h].d]=1;		
			if(x[h].d==yx&&y[h].d==yy)
			{
				cout<<x[h].ans<<endl;aaaa=1;
				break;
			}
			if(flag[x[t].d][y[t].d+1]==0&&y[t].d+1<=n&&(a[x[t].d][y[t].d+1]=='.'||a[x[t].d][y[t].d+1]=='*')) 
				x[++h].d=x[t].d,y[h].d=y[t].d+1,x[h].ans=x[t].ans+1,flag[x[h].d][y[h].d]=1;	
			if(x[h].d==yx&&y[h].d==yy)
			{
				cout<<x[h].ans<<endl;aaaa=1;
				break;
			}	
			t++;
		}
		if(aaaa==0) cout<<-1<<endl;
		for(int i=1;i<=100;i++)
			for(int j=1;j<=100;j++)
			{
				flag[i][j]=0;
				a[i][j]='\0';
			}
	}
	
	return 0;
} 
