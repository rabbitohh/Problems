#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*
    �ܱ�3 5 7���������3,5,7
    �ܱ����������������������С����
    �����ܣ����n
    */
    int a;
    cin>>a;
    if(a%3!=0&&a%5!=0&&a%7!=0) cout<<"n";
	if(a%3==0) cout<<"3 ";
	if(a%5==0) cout<<"5 ";
	if(a%7==0) cout<<"7 ";
	return 0;
}
