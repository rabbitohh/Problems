#include<bits/stdc++.h>
using namespace std;
string a[10];
int ans[10];
map<string,int> Map;
int main()
{
	for(int i=1;i<=6;i++)
	{
		cin>>a[i];
		if(i==1&&a[i][0]<'a') a[i][0]+=('a'-'A');
	}
	int o;
	cin>>o;
	Map.insert(pair<string,int>("one",1));
	Map.insert(pair<string,int>("two",2));
	Map.insert(pair<string,int>("three",3));
	Map.insert(pair<string,int>("four",4));
	Map.insert(pair<string,int>("five",5));
	Map.insert(pair<string,int>("six",6));
	Map.insert(pair<string,int>("seven",7));
	Map.insert(pair<string,int>("eight",8));
	Map.insert(pair<string,int>("nine",9));
	Map.insert(pair<string,int>("ten",10));
	Map.insert(pair<string,int>("eleven",11));
	Map.insert(pair<string,int>("twelve",12));
	Map.insert(pair<string,int>("thirteen",13));
	Map.insert(pair<string,int>("fourteen",14));
	Map.insert(pair<string,int>("fifteen",15));
	Map.insert(pair<string,int>("sixteen",16));
	Map.insert(pair<string,int>("seventeen",17));
	Map.insert(pair<string,int>("eighteen",18));
	Map.insert(pair<string,int>("nineteen",19));
	Map.insert(pair<string,int>("twenty",20));
	Map.insert(pair<string,int>("a",1));
	Map.insert(pair<string,int>("both",2));
	Map.insert(pair<string,int>("another",1));
	Map.insert(pair<string,int>("first",1));
	Map.insert(pair<string,int>("second",2));
	Map.insert(pair<string,int>("third",3));
	map<string,int>::iterator iter;
	for(int i=1;i<=6;i++)
	{
		iter=Map.find(a[i]);
		if(iter!=Map.end()) ans[i]=((iter->second)*(iter->second))%100;
		else ans[i]=0;
	}
	sort(ans+1,ans+6+1);
	int cnt=0;
	//for(int i=1;i<=6;i++) cout<<ans[i]<<endl;
	for(int i=1;i<=6;i++) 
	{
		if(ans[i]&&cnt==0)
		{
			cout<<ans[i];
			cnt=1;
		}	
		else if(ans[i]&&ans[i]<10&&cnt!=0) cout<<'0'<<ans[i];	
		else if(ans[i]) cout<<ans[i];
	}
	if(cnt==0) cout<<0;
	return 0;	
}
