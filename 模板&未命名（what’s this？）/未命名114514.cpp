#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
bool su(int a)
{
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0) return 0;
	return 1;
}
int main()
{
	int cnt=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int ne=0;
		string s;
		cin>>s;
		for(int j=0;j<=s.size()-1;j++)
		{
			if(s[j]=='1') ne+=pow(2,s.size()-j-1);
		}
		cout<<ne<<endl;
		if(su(ne)) cnt++; 
	}
	cout<<cnt;
	return 0;	
} 
