#include<bits/stdc++.h>
using namespace std;
int top=0;
int a[20000];
int main()
{
	string s;
	cin>>s;
	int num = 0;
	for(int i=0;i<s.length()-1;i++)
	{
		if (s[i]>='0'&&s[i]<='9')
		{
			num=num*10 +s[i]-'0';
			continue;
		}
		if (s[i]=='.')
		{
			a[++top]=num;
			num=0; 
			continue;
		}
		int y=a[top];int x=a[top-1];
		a[top]=0;a[top-1]=0;
		top--;
		if(s[i]=='+')
			a[top]=x+y;
		if(s[i]=='-')
			a[top]=x-y;
		if(s[i]=='*')
			a[top]=x*y;
		if(s[i]=='/')
			a[top]=x/y;
		//cout<<a[top]<<endl; 
		a[top+1] = 0;	
	}
	cout<<a[1];
	return 0;
}
