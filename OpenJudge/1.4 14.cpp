#include<bits/stdc++.h>
using namespace std;
int main()
{
	int zhongliang,qian;
	char jiaji;
	cin>>zhongliang>>jiaji;
	if(zhongliang<=1000) qian=qian+8;
	else{
		zhongliang=zhongliang-1000;
		if(zhongliang%500==0){
			zhongliang=zhongliang/500;
			zhongliang=zhongliang*4;
		}else{
			zhongliang=zhongliang/500;
			zhongliang=zhongliang*4+4;
		}
		qian=qian+8+zhongliang;
	}
	if(jiaji=='y') qian+=5;
	cout<<qian;
	return 0;
}
