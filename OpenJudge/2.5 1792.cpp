/*´ËÎªWrong Answer*/
#include<bits/stdc++.h>
using namespace std;
char a[101][101];
int duih[1001];
int duil[1001];
int head=1,tail=1;
int main()
{
	int k;
	int n;
	scanf("%d",&k);
	getchar();
	int ha,la,hb,lb;
	int h,l;
	for(int i=1;i<=k;i++)
	{
		scanf("%d",&n);
		getchar();
		for(int j=0;j<n;j++)
		{
			for(int jj=0;jj<n;jj++)
				scanf("%c",&a[j][jj]);
			getchar();
		}
		scanf("%d%d%d%d",&ha,&la,&hb,&lb);
		h=ha;
		l=la;
		if(a[ha][la]=='#'||a[hb][lb]=='#')
			printf("NO\n");
		else
			while(head>=tail)
			{
				if(a[h][l]=='.')
				{
					if(h+1=='#')
						if(h-1=='#')
							if(l+1=='#')
								if(l-1=='#')
								{
									printf("NO\n");
									return 0;
								}
					if(h==hb&&l==lb)
					{
						printf("YES\n");
						return 0;
					}
					duil[tail]=l;
					duih[tail]=h;
					tail++;
					a[h][l]='#';
					ha=h;
					la=l;
				}
				h=ha;
				l=la;
				h++;
				if(a[h][l]=='.')
				{
					if(h==hb&&l==lb)
					{
						printf("YES\n");
						return 0;
					}
					duil[tail]=l;
					duih[tail]=h;
					tail++;
					a[h][l]='#';
				}
				h=ha;
				l=la;
				h--;
				if(a[h][l]=='.')
				{
					if(h==hb&&l==lb)
					{
						printf("YES\n");
						return 0;
					}
					duil[tail]=l;
					duih[tail]=h;
					tail++;
					a[h][l]='#';
				}
				h=ha;
				l=la;
				l++;
				if(a[h][l]=='.')
				{
					if(h==hb&&l==lb)
					{
						printf("YES\n");
						return 0;
					}
					duil[tail]=l;
					duih[tail]=h;
					tail++;
					a[h][l]='#';
				}
				h=ha;
				l=la;
				l--;
				if(a[h][l]=='.')
				{
					if(h==hb&&l==lb)
					{
						printf("YES\n");
						return 0;
					}
					duil[tail]=l;
					duih[tail]=h;
					tail++;
					a[h][l]='#';
				}
				ha=duih[head];
				la=duih[head];
				head++;
			}
	}
	return 0;
}
