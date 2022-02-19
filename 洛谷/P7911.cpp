/*原AC，后hack至70，ccf数据AC*/
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
struct cu
{
	string ip;
	bool wha;//1s 0c
};
cu cpt[1001];
bool check(string s)
{
	int sz=s.size();
	int dnt=0,mnt=0;
	if(s[0]=='.'||s[sz-1]==':') return 0;
	for(int i=0;i<=sz-1;i++)
	{
		if(i!=sz-1)
		{
			if((s[i-1]=='.'||s[i-1]==':')&&s[i]=='0'&&s[i+1]!='.'&&s[i+1]!=':')
			{
				return 0;
			}
		}
		if(s[i]=='.')
		{
			if(i!=0&&s[i-1]=='.') return 0;
			dnt++;
		}
		else if(s[i]==':')
		{
			if(s[i-1]=='.') return 0;
			if(dnt!=3) return 0;
			mnt++;
		}
		else if(s[i]>'9'||s[i]<'0') return 0;
	}
	if(dnt!=3||mnt!=1) return 0;
	ull sn[6]={0,0,0,0,0,0};
	int idx=1;
	int uh=0;
	for(int i=0;i<=sz-1;i++)
	{
		if(s[i]=='.'||s[i]==':')
		{
			idx++;
			uh=i+1;
		}
		else
		{
			sn[idx]*=10;
			sn[idx]+=(s[uh++]-'0');
		}
	}
	for(int i=1;i<=4;i++)
	{
		if(sn[i]>255) return 0;
	}
	if(sn[5]>65535) return 0;
	return 1;
}
int main()
{
	//freopen("network.in","r",stdin);
	//freopen("network.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	//cout<<check("192.168.1.1:8080");
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string op;
		cin>>op>>cpt[i].ip;
		if(op=="Server")
		{
			cpt[i].wha=1;
			if(!check(cpt[i].ip))
			{
				cout<<"ERR\n";
				continue;
			}
			int flag=0;
			for(int j=1;j<=i-1;j++)
			{
				if(cpt[j].wha&&cpt[i].ip==cpt[j].ip)
				{
					cout<<"FAIL\n";
					flag=1;
					break;
				}
			}
			if(flag) continue;
			cout<<"OK\n";
		}
		else 
		{
			cpt[i].wha=0;
			if(!check(cpt[i].ip))
			{
				cout<<"ERR\n";
				continue;
			}
			int flag=0;
			for(int j=1;j<=i-1;j++)
			{
				if(cpt[j].wha&&cpt[i].ip==cpt[j].ip)
				{
					cout<<j<<"\n";
					flag=1;
					break;
				}
			}
			if(flag) continue;
			cout<<"FAIL\n";
		}
	}
	return 0;
}
