/*WA£¬90·Ö*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=0;
	string s;
	cin>>s;
	bool a=0;
	string s1,s2;
	int c=0;
	if(s.find('.')==-1&&s.find('%')==-1&&s.find('/')==-1)
	{
		if(s[0]=='-') cout<<'-';
		if(s=="0")
		{
			cout<<"0";
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
	a=0;
	}
	else if(s.find('%')==-1&&s.find('/')==-1)
	{
		int l=s.find('.');
		s1=s.substr(0,l);
		if(s1[0]=='-') cout<<'-';
		if(s1=="0")
		{
			cout<<"0";
		//	return 0;
		}
		for(int i=s1.size()-1;i>=0;i--)
		{
			if(s1[i]=='-') break;
			if(s1[i]!='0'||a!=0)
			{
				cout<<s1[i];
				a=1;
			}
		}
		a=0;
		cout<<'.';
		s2=s.substr(l+1,s.size()-l-1);
		if(s2[0]=='-') cout<<'-';
		if(s2=="0")
		{
			cout<<"0";
		//	return 0;
		}
		for(int i=0;i<s2.size();i++)
		{
			if(s2[i]!='0') break;
			c++;
		}
		for(int i=s2.size()-1;i>=c;i--)
		{
			if(s2[i]=='-') break;
			if(s2[i]!='0'||a!=0)
			{
				cout<<s2[i];
				a=1;
			}
		}
		if(c>=s2.size()-1) cout<<'0';
	a=0;
	}
	else if(s.find('%')==-1)
	{
		int l=s.find('/');
		s1=s.substr(0,l);
		if(s1[0]=='-') cout<<'-';
		for(int i=s1.size()-1;i>=0;i--)
		{
			if(s1[i]=='-') break;
			if(s1[i]!='0'||a!=0)
			{
				flag=1;
				cout<<s1[i];
				a=1;
			}
		}
		if(flag==0) cout<<'0';
		a=0;
		cout<<'/';
		s2=s.substr(l+1,s.size()-l-1);
		if(s2[0]=='-') cout<<'-';
		if(s2=="0")
		{
			cout<<"0";
			return 0;
		}
		for(int i=s2.size()-1;i>=0;i--)
		{
			if(s2[i]=='-') break;
			if(s2[i]!='0'||a!=0)
			{
				cout<<s2[i];
				a=1;
			}
		}
	a=0;
	}
	else
	{
		if(s[0]=='-') cout<<'-';
		if(s=="0%")
		{
			cout<<"0";
		//	return 0;
		}
		for(int i=s.size()-2;i>=0;i--)
		{
			if(s[i]=='-') break;
			if(s[i]!='0'||a!=0)
			{
				cout<<s[i];
				a=1;
			}
		}
		cout<<'%';
	}
	return 0;
}
