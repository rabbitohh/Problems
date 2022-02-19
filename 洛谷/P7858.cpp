/*WA£¬15·Ö*/
#include<cstdio>
#include<iostream>
#include<string>
#define jj hdcwhwsj
using namespace std;
string hdcwhwsj[2000];
int bf[30];
int b[30];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>hdcwhwsj[i];
	}
	string hd;
	cin>>hd;
	for(int i=0;i<=hd.size()-1;i++)
	{
		//cout<<hd[i];
		if(hd[i]=='2')
		{
			b[2]++;
		}
		if(hd[i]=='3')
		{
			b[3]++;
		}
		if(hd[i]=='4')
		{
			b[4]++;
		}
		if(hd[i]=='5')
		{
			b[5]++;
		}
		if(hd[i]=='6')
		{
			b[6]++;
		}
		if(hd[i]=='7')
		{
			b[7]++;
		}
		if(hd[i]=='8')
		{
			b[8]++;
		}
		if(hd[i]=='9')
		{
			b[9]++;
		}
	}
	
	for(int i=1;i<=9;i++)
	{
		bf[i]=b[i];
	}
	//cout<<bf[6];
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=hdcwhwsj[i].size()-1;j++)
		{
			int num=0;
			if(jj[i][j]=='a'||jj[i][j]=='b'||jj[i][j]=='c') num=2;
			if(jj[i][j]=='d'||jj[i][j]=='e'||jj[i][j]=='f') num=3;
			if(jj[i][j]=='g'||jj[i][j]=='h'||jj[i][j]=='i') num=4;
			if(jj[i][j]=='j'||jj[i][j]=='k'||jj[i][j]=='l') num=5;
			if(jj[i][j]=='m'||jj[i][j]=='n'||jj[i][j]=='o') num=6;
			if(jj[i][j]=='p'||jj[i][j]=='q'||jj[i][j]=='r'||jj[i][j]=='s') num=7;
			if(jj[i][j]=='t'||jj[i][j]=='u'||jj[i][j]=='v') num=8;
			if(jj[i][j]=='w'||jj[i][j]=='x'||jj[i][j]=='y'||jj[i][j]=='z') num=9;
			if(!bf[num]--) break;
			if(j==hdcwhwsj[i].size()-1) cnt++;
		}
		for(int i=1;i<=9;i++)
		{
			bf[i]=b[i];
		}
	}
	cout<<cnt;
	return 0;
}
