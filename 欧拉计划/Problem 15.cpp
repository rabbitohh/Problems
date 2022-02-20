#include<iostream>
#include<cstdio>
#define ull unsigned long long
using namespace std;
int main()
{
	ull ans=1,wher=1;
	for(ull i=1;i<=1000000;i++)
	{
		ull a=i,cnt=1;
		while(a!=1)
		{
			if(a%2) a=3*a+1;
			else a=a/2;
			cnt++;
			//if(cnt>10000) cout<<i<<endl;
		}
		if(cnt>ans)
		{
			ans=cnt;
			wher=i;
		}
		//if(i%100==0) cout<<i<<"\n";
	} 
//	ull a=113383,cnt=1;
//		while(a!=1)
//		{
//			if(a%2) a=3*a+1;
//			else a=a/2;
//			cnt++;
//			cout<<a<<"\n";
//		}
	cout<<wher;
	return 0;
}

