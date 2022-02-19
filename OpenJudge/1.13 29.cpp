#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt[27];
	string s1;
	cin>>s1;
	int cnt2=0;
	for(int i=1;i<=26;i++)
	{
		for(int j=1;j<=s1.size();j++)
		{
			if(s1.find('a'+i-1)==-1)
			{
				cnt[i]=cnt2;
				cnt2=0;
   				break;
			}
			else
			{
				s1[s1.find('a'+i-1)]='0';
				cnt2++;
			}
		}
	}
	int max=1;
	for(int i=1;i<=26;i++)
		if(cnt[i]>cnt[max]) max=i;
	cout<<char(max+'a'-1)<<' '<<cnt[max];
	return 0;
}
