#include <stdio.h>
int  main()
{
	//int a=25;
	//double d = 4321.123456789012345;
	//char c = 'T';

	//printf("songchanghe_3_1：理解输出！\n");		/* 改姓名哦 */

	//printf("a = :%f;%5d;%-5d;%+05d!\n",(double)a,a,a,-a);/*%5d  输出5位，不够用空格补;%-5d 左对齐
				//								 %+05d 显示正负号，前导0*/
	//printf("a = :%5x;%o!\n",a,a);/*%5x  以5位十六进制输出 */
	//printf("d = :%d;%15f;%8.3f;%20.15f;%.2f!\n",(int)d,d,d,d,d);
	//printf("c = :%c;%5c;%-5c!\n",c,c,c);


	 /*int a,b,c;
	printf("请输入两个数：");
	scanf("%d%d",&a,&b);
	c=a/b;
	printf("\n结果：%d\n",c);*/

	int a, b, c = 888;
	int r;
	printf("请输入两个数：");
	r = scanf("%d%d", &a, &b);			/* 注意这里是两个小写的L*/
	if (r == 2) {
		if (b !=0)
		{
			c = a / b;
			printf("\n结果：%d\n", c);
		}
		else
		{
			printf("除数不能为0");
		}
		return 0;//
	}

	else {
		printf("输入不正确");
	}
}