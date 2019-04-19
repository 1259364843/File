#include <stdio.h>
int main()
{
	double a, b, c, d;
	printf("请输入四门课的成绩:");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	printf("总分:%.2lf\n", a + b + c + d);
	printf("平均分:%.2lf\n", (a + b + c + d) / 4);
}


