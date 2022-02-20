/*好像是抄的老师的（码风是我的，但感觉变量名不是我的风格）*/ 
#include<cstdio>
#include<algorithm>
using namespace std;
struct Node
{
    bool mp[4][4];
    int dis;
};
Node Q[100010],S,T;
int tail,vis[100010],head;
int getid(Node tmp)
{
    int res=0;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            res=res*2+tmp.mp[i][j];
    return res;
}
int main()
{
    for(int i=0;i<4;i++)
    {
    	for(int j=0;j<4;j++)
		{
            int tmp;
            scanf("%1d",&tmp);
            S.mp[i][j]=tmp;
        }
	} 
    for(int i=0;i<4;i++)
    {
    	for(int j=0;j<4;j++)
		{
            int tmp;
            scanf("%1d",&tmp);
            T.mp[i][j]=tmp;
        }
	} 
    Q[++tail]=S;
    vis[getid(S)]=1;
    while(head<tail)
	{
        head++;
        Node tmp=Q[head];
        if(getid(tmp)==getid(T))
		{
            printf("%d\n",tmp.dis);
            break;
        }
        tmp.dis++;
        for(int i=0;i<3;i++)
        {
			for(int j=0;j<4;j++)
			{
                swap(tmp.mp[i][j],tmp.mp[i+1][j]);
                if(vis[getid(tmp)]==0)
				{
                    tail++;
                    Q[tail]=tmp;
                    vis[getid(tmp)]=1;
                }
                swap(tmp.mp[i][j],tmp.mp[i+1][j]);
            }
		}
        for(int i=0;i<4;i++)
        {
			for(int j=0;j<3;j++)
			{
                swap(tmp.mp[i][j],tmp.mp[i][j+1]);
                if(vis[getid(tmp)]==0)
				{
                    tail++;
                    Q[tail]=tmp;
                    vis[getid(tmp)]=1;
                }
                swap(tmp.mp[i][j],tmp.mp[i][j+1]);
            }
		}
    }
}
