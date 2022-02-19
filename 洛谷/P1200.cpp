#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int l1=s1.size();
	int l2=s2.size();
	int a=1,b=1;
	for(int i=1;i<=l1;i++) a*=s1[i-1]-64;
	for(int i=1;i<=l2;i++) b*=s2[i-1]-64;
	if(a%47==b%47) cout<<"GO";
	else cout<<"STAY";
	return 0;
}

