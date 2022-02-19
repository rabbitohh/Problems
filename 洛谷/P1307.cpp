#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	bool a=0;
	if(s[0]=='-') cout<<'-';
	if(s[0]=='0')
	{
		cout<<'0';
	//	return 0;
	} 
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]=='-') break;
		if(s[i]!='0'||a!=0)
		{
			cout<<s[i];
			a=1;
		}
	}
	return 0;
}

