#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],c[100],d[100];
int g,n;
void dfs(int m)
{
    if(m>n)
    {
        if(g<=2)
   		{
        	for(int k=1;k<=n;k++)
        		printf("%d ",a[k]);
        	cout<<endl;
    	}
    	g++;
        return;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(b[i]==0&&c[m+i]==0&&d[m-i+n]==0)
            {
                a[m]=i;b[i]=1;c[m+i]=1;d[m-i+n]=1;
                
                dfs(m+1);
                
				a[m]=0;b[i]=0;c[m+i]=0;d[m-i+n]=0;
            }
        }
    }
}
int main()
{    
    cin>>n;
    dfs(1);
    cout<<g;
    return 0;
}
