#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring> 
using namespace std;
struct stu
{
	int f;
	string name;
	int yw,sx,yy;
	int sum;	
};
bool tmp(stu a,stu b)
{
	if(a.sum==b.sum) return a.f<b.f;
	else return a.sum>b.sum;
}
stu stu[10086];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		stu[i].f=i;
		cin>>stu[i].name;
		cin>>stu[i].yw>>stu[i].sx>>stu[i].yy;
		stu[i].sum=stu[i].yw+stu[i].sx+stu[i].yy;
	}
	sort(stu+1,stu+n+1,tmp);
	cout<<stu[1].name<<' '<<stu[1].yw<<' '<<stu[1].sx<<' '<<stu[1].yy;
	return 0;
}
