#include<bits/stdc++.h>
using namespace std;
string a[20000];
map<string,int> Map;
int main()
{
	int n;
	cin>>n;
	map<string,int>::iterator iter;
	int t=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		iter=Map.find(a[i]);
		if(iter==Map.end()) 
		{
			Map.insert(pair<string,int>(a[i],t));
			t++;
		}
	}
	cout<<Map.size();
	return 0;	
}
