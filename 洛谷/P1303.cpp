/*WA��20�֣���д�˸�3�е�python*/
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char a1[3000],b1[3000];
    int a[3000],b[3000],c[3000],lena,lenb,lenc,i,j,x;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    gets(a1);gets(b1);
    lena=strlen(a1);lenb=strlen(b1);
    if(a1[0]=='0'||b1[0]=='0')
	{
		cout<<0;
		return 0;
	 } 
    for (i=0;i<=lena-1;i++) a[lena-i]=a1[i]-48; 
    for (i=0;i<=lenb-1;i++) b[lenb-i]=b1[i]-48;
    for (i=1;i<=lena;i++)
	{
	     x=0;                                               //���ڴ�Ž�λ
	     for (j=1;j<=lenb;j++)                     //�Գ�����ÿһλ���д���
	     {
		   c[i+j-1]=a[i]*b[j]+x+c[i+j-1]; //��ǰ�˻�+�ϴγ˻���λ+ԭ��	    	   x=c[i+j-1]/10;
		   c[i+j-1] %= 10;
	     }
	     c[i+lenb]=x;                                  //��λ
	}
	lenc=lena+lenb;
	while (c[lenc]==0&&lenc>1)       //ɾ��ǰ��0
		lenc--;
	for (i=lenc;i>=1;i--)
		cout<<c[i];
	return 0;
}
