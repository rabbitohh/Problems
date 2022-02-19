/*https://www.luogu.com.cn/problem/P1025*/
#include<bits/stdc++.h> 
using namespace std;
int n,k,cnt;
void dfs(int last,int a,int sum)
{
    if(a==k+1)
    {
        if(sum==0) cnt++;
        return;
    }
    for(int i=last;i<=sum;i++)
    	dfs(i,a+1,sum-i);
}
int main()
{
    cin>>n>>k;
    dfs(1,1,n);
    cout<<cnt;
}
