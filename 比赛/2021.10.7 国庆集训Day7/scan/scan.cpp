//caonimalegebide
#include<cstdio>
#include<iostream>
using namespace std;
int a[1001][1001];
int _____[1000001];
int main()
{
	freopen("scan.in","r",stdin);
	freopen("scan.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	int top=0;
	int x=1,y=1;
	for(int i=2;i<=n+1;i++)
	{
		_____[++top]=a[x][y];
		int nx=x,ny=y;
		if(ny>nx)
			while(ny!=x)
				ny--,nx++,_____[++top]=a[nx][ny];
		else if(nx>ny)
			while(ny!=x)
				ny++,nx--,_____[++top]=a[nx][ny];
		//if(i==2) cout<<nx<<' '<<ny<<endl;
		if(nx==ny) ny++;
		else if(nx>ny) nx++;
		else if(ny>nx) ny++;
		//if(i==2) cout<<nx<<' '<<ny<<endl;
		x=nx;
		y=ny;
		//cout<<endl<<x<<' '<<y<<' '<<endl;
	}
	if(x>y) x--,y++;
	else y--,x++;
	//cout<<endl<<x<<' '<<y<<' '<<endl;
	for(int i=n+2;i<=2*n;i++)
	{
		_____[++top]=a[x][y];
		int nx=x,ny=y;
		if(ny>nx)
			while(ny!=x)
				ny--,nx++,_____[++top]=a[nx][ny];
		else if(nx>ny)
			while(ny!=x)
				ny++,nx--,_____[++top]=a[nx][ny];
		//if(i==2) cout<<nx<<' '<<ny<<endl;
		//if(nx==ny) ny++;
		if(nx>ny) ny++;
		else if(ny>nx) nx++;
		//if(i==2) cout<<nx<<' '<<ny<<endl;
		x=nx;
		y=ny;
		//cout<<endl<<x<<' '<<y<<' '<<endl;
	}
	for(int i=1;i<=top;i++)
	{
		cout<<_____[i]<<' ';
	}
	return 0;
}
