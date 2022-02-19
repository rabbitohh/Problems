#include<bits/stdc++.h>
using namespace std;
int n,a[500010],aa[500010];
long long cnt;
void msort(int s,int t)
{
    if(s==t) return;
    int mid=(s+t)/2,i=s,j=mid+1,k=s;
    msort(s,mid);
	msort(mid+1,t);
    while(i<=mid&&j<=t)
    	if(a[i]<=a[j]) aa[k++]=a[i++];
        else aa[k++]=a[j++],cnt+=mid-i+1;
    while(j<=t) aa[k++]=a[j++];        
    while(i<=mid)  aa[k++]=a[i++];
    for(int l=s;l<=t;l++) a[l]=aa[l];
} 
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    msort(1,n);
    cout<<cnt;
    return 0;
}
