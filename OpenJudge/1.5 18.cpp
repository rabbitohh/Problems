#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,x,y;
	double xiaolv,xiaolu;
	cin>>n;
	n-=1;
	cin>>x>>y;
	xiaolv=y*1.0/x;
	for(i=1;i<=n;i++)
	{
		cin>>x>>y;
		xiaolu=y*1.0/x;
		if(xiaolu-xiaolv>0.05) cout<<"better"<<endl;
		else if(xiaolv-xiaolu>0.05) cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}
