#include <stdio.h>
int main(void)
{
	char c;
	printf("songchanghe_3_2：小写转大写！\n");	  /* 改姓名哦 */
printf("lowercase character:");
	scanf("%c",&c);	/* 键盘输入一个字母存入c*/
	//printf("uppercase character is :%c",c-32);	
	printf("uppercase character is :%c", c - ('a' - 'A'));
}
