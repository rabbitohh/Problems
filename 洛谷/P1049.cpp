/*WA��60��*/
#include<bits/stdc++.h>
using namespace std;
long long w[105],val[105];
long long dp[105];//ǰn����Ʒʹ�õ������� 
int main()
{
    long long t,m,res=-1;
    scanf("%lld%lld",&t,&m);//�ռ������ 
    for(long long i=1;i<=m;i++)
    {
        scanf("%lld",&w[i]);//���
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
