/*WA，60分*/
#include<bits/stdc++.h>
using namespace std;
long long w[105],val[105];
long long dp[105];//前n个物品使用的最大体积 
int main()
{
    long long t,m,res=-1;
    scanf("%lld%lld",&t,&m);//空间和数量 
    for(long long i=1;i<=m;i++)
    {
        scanf("%lld",&w[i]);//体积
    }
    for(long long i=1;i<=m;i++) 
        for(long long j=t;j>=0;j--)  
        {
            if(dp[i-1]+w[i]<=t)
            {
                dp[i]=max(dp[i-1]+w[i],dp[i-1]);
            }  
            else
            {
                dp[i]=dp[i-1];
            }              
        }
    printf("%lld",t-dp[m]);
    return 0;
}
