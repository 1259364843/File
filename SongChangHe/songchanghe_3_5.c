#include <stdio.h>
int main()
{
	int n,k,s=0;
	printf("������һ��1��3λ������:");
	scanf("%d",&n);
	while(n)
	{k=n%10;
	 s=s+k;
	 n=n/10;}
	printf("��λ���ֺ�= %d",s);
}