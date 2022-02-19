#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,cnt1=0,cnt5=0,cnt10=0,x,y;
    cin>>y;
    for(i=1;i<=y;i++)
    {
    	cin>>x;
    	if(x==1) cnt1++;
    	if(x==5) cnt5++;
		if(x==10) cnt10++;
	}
	cout<<cnt1<<endl<<cnt5<<endl<<cnt10;
	return 0;
}
