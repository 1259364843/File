#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	printf("songchanghe_3_3：随机数应用！\n");	/* 改姓名哦 */
	
	/* srand是用随机种子来初始化随机数发生器 */
	/* 以免每次都是同一个随机序列 */
	srand((unsigned)time( NULL ));

	/* 每一个rand()就产生一个随机整数 */
    printf("a random number:%d\n",rand()%900+100);
    printf("a random number:%d\n",rand()%900+100);
    printf("a random number:%d\n",rand()%900+100);
    printf("a random number:%d\n",rand()%900+100);
    printf("a random number:%d\n",rand()%900+100);
    printf("a random number:%d\n",rand()%900+100);
    printf("a random number:%d\n",rand()%900+100);
    printf("a random number:%d\n",rand()%900+100);
    printf("a random number:%d\n",rand()%900+100);
printf("a random number:%d\n",rand()%900+100);
}
