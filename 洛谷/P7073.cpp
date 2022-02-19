/*WA£¬0·Ö*/
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
		if(s[i]=='+')
			a[--top]=a[top]+a[top+1];
		if(s[i]=='-')
			a[--top]=a[top]-a[top+1];
		if(s[i]=='*')
			a[--top]=a[top]*a[top+1];
		if(s[i]=='/')
			a[--top]=a[top]/a[top+1];
		//cout<<a[top]<<endl; 
		a[top+1] = 0;	
	}
	cout<<a[1];
	return 0;
}
