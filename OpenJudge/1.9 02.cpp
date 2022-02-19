#include<bits/stdc++.h>
using namespace std;
struct stu
{
	char name[100];
	int s;
};
int main()
{
    int g;
    cin>>g;
    stu stu;
    int max=-1;
    char st[100];
    for(int i=1;i<=g;i++)
    {
    	cin>>stu.s>>stu.name;
    	if(stu.s>max){max=stu.s;strcpy(st,stu.name);}
	}
	cout<<st;
	return 0;
}
