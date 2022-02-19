#include<bits/stdc++.h>
using namespace std;
struct ac
{
	string name;
	int score1,score2;
	char gb,xb;
	int lw;
	int jj;
};
ac ac[110];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>ac[i].name>>ac[i].score1>>ac[i].score2>>ac[i].gb>>ac[i].xb>>ac[i].lw;
	for(int i=1;i<=n;i++)
	{
		if(ac[i].score1>80&&ac[i].lw>=1) ac[i].jj+=8000;
		if(ac[i].score1>85&&ac[i].score2>80) ac[i].jj+=4000;
		if(ac[i].score1>90) ac[i].jj+=2000;
		if(ac[i].score1>85&&ac[i].xb=='Y') ac[i].jj+=1000;
		if(ac[i].score2>80&&ac[i].gb=='Y') ac[i].jj+=850;
	}
	int max=1;
	for(int i=1;i<=n;i++) if(ac[i].jj>ac[max].jj) max=i;
	int sum=0;
	for(int i=1;i<=n;i++) sum+=ac[i].jj;
	cout<<ac[max].name<<'\n'<<ac[max].jj<<'\n'<<sum;
	return 0;
}

