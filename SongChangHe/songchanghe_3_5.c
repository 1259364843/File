#include <stdio.h>
int main()
{
	int n,k,s=0;
	printf("请输入一个1到3位的数字:");
	scanf("%d",&n);
	while(n)
	{k=n%10;
	 s=s+k;
	 n=n/10;}
	printf("各位数字和= %d",s);
}