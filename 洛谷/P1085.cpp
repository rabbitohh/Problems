#include<bits/stdc++.h>
using namespace std;
int main(){
	char h;
	int a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,f1,f2,j1,j2,a,b,c,d,e,f,j,s;
	cin>>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2>>e1>>e2>>f1>>f2>>j1>>j2;
	a=a1+a2;
	b=b1+b2;
	c=c1+c2;
	d=d1+d2;
	e=e1+e2;
	f=f1+f2;
	j=j1+j2;
	s=a;
	h='1';
	if(b>s){
		s=b;
		h='2';
	}
	if(c>s){
		s=c;
		h='3';
	}
	if(d>s){
		s=d;
		h='4';
	}
	if(e>s){
		s=e;
		h='5';
	}
	if(f>s){
		s=f;
		h='6';
	}
	if(j>s){
		s=j;
		h='7';
	}
	if(s>=8){
		cout<<h;
	}else{
		cout<<0;
	}
	return 0;
}
