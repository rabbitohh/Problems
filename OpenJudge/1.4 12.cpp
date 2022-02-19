#include<bits/stdc++.h>
using namespace std;
int main()
{
	double lucheng,che,zou;
	cin>>lucheng;
	che=lucheng/3.0+50;
	zou=lucheng/1.2;
	if(che>zou) cout<<"Walk";
	else if(che==zou) cout<<"All";
	else cout<<"Bike";
	return 0;
}
