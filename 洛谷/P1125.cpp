#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int cnt[200];
bool sz(int a)
{
	if(a==2) return 1;
	if(a<=1) return 0;
	for(int i=2;i*i<=a;i++)
	{
		if(!(a%i)) return 0; 
	}
	return 1;
} 
int main()
{
	string s;
	cin>>s;
	int maxn=-1,minn=100000;
	for(int i=0;i<=s.size()-1;i++)
	{
		cnt[s[i]]++;
	}
	for(int i='a';i<='z';i++)
	{
		maxn=max(maxn,cnt[i]);
		if(cnt[i]==0) cnt[i]=10086;
		minn=min(minn,cnt[i]);
	}
	if(sz(maxn-minn)) cout<<"Lucky Word\n"<<maxn-minn;
	else cout<<"No Answer\n"<<0;
	return 0;
}
