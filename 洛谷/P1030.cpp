/*WA£¬20·Ö*/
 #include<bits/stdc++.h>
using namespace std;
string a;
string b;
void rrr(int n)
{
	cout<<b[n];
	if(n!=b.length()-1)	return;
	rrr(a.find(b[n])-1);
	if(n-1>=0) rrr(n-1);
	
}
int main()
{	
	cin>>a>>b;
	rrr(b.length()-1);
	return 0;
}
