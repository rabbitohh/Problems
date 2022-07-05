#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
string a[5];
int main()
{
	cin>>a[1]>>a[2];
	cout<<a[1][0];
	int z=1;
	while(a[1][z]<a[2][0]&&z+1<=a[1].size())
		cout<<a[1][z++];
	cout<<a[2][0];
	return 0;
}

