#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d;
cin>>a>>b>>c>>d;
a=c-a;
b=d-b;
if(b<0) {
    a--;
    b+=60;
}
cout<<a<<" "<<b;
return 0;
}
