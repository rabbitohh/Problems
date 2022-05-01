#include<iostream>
#include<cstdio>
using namespace std;
bool con[10][10];
int cnt[10];
int ans;
string name[10]={"\0","A","B","C","D","A1","B1","C1","D1"};
void dfs(int id,int fro[10],int flag)
{
	fro[++flag]=id;
	if(id==7) 
	{
		for(int i=1;i<flag;i++)
			cout<<name[fro[i]]<<"->";
		cout<<name[fro[flag]];
		cout<<"\n";
		flag=0;
		ans++;
		return;
	}
	if(flag>=6) 
	{
		flag=0;
		return;
	}
	for(int i=1;i<=8;i++)
	{
		if(!con[id][i]) continue;
		//if(cnt[i]>2) continue;
		if(cnt[i]) continue;
		cnt[i]++;
		dfs(i,fro,flag);
		cnt[i]--;
	}
} 
int main()
{
	con[1][2]=con[1][4]=con[1][5]=1;
	con[2][1]=con[2][3]=con[2][6]=1;
	con[3][2]=con[3][4]=con[3][7]=1;
	con[4][1]=con[4][3]=con[4][8]=1;
	con[5][1]=con[5][6]=con[5][8]=1;
	con[6][2]=con[6][5]=con[6][7]=1;
	con[7][3]=con[7][6]=con[7][8]=1;
	con[8][4]=con[8][5]=con[8][7]=1;
	cnt[1]++;
	int a[10];
	dfs(1,a,0);
	cout<<ans;
	return 0;
}
