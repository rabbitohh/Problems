#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
char c[500];
int main()
{
	int n;
	cin>>n;
	n%=26;
	string s;
	cin>>s;
	for(int i='a';i<='z';i++)
	{
		c[i]=i;
		c[i+26]=i;
	}
	for(int i=0;i<=s.size()-1;i++)
	{
		s[i]=c[s[i]+n];	
	}
	cout<<s;
	return 0;
}
