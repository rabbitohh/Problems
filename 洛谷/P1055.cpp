#include<bits/stdc++.h>
using namespace std;
char a[20];
int aa[20];
int main()
{
	scanf("%s",&a);
	aa[1]=a[0]-48;
	aa[2]=a[2]-48;
	aa[3]=a[3]-48;
	aa[4]=a[4]-48;
	aa[5]=a[6]-48;
	aa[6]=a[7]-48;
	aa[7]=a[8]-48;
	aa[8]=a[9]-48;
	aa[9]=a[10]-48;
	aa[10]=a[12]-48;
	int ak=0;
	for(int i=1;i<=9;i++)
    {
    	ak+=aa[i]*i;
    }
    ak%=11;
    char x;
    if(ak==10) x='X';
    else x=ak+48;
    if(a[12]==x) cout<<"Right";
    else
    {
    	for(int i=0;i<=11;i++)
    	{
    		cout<<char(a[i]);
		}
		cout<<x;
	}
	return 0;
}

