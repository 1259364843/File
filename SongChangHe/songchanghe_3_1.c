#include <stdio.h>
int  main()
{
	//int a=25;
	//double d = 4321.123456789012345;
	//char c = 'T';

	//printf("songchanghe_3_1����������\n");		/* ������Ŷ */

	//printf("a = :%f;%5d;%-5d;%+05d!\n",(double)a,a,a,-a);/*%5d  ���5λ�������ÿո�;%-5d �����
				//								 %+05d ��ʾ�����ţ�ǰ��0*/
	//printf("a = :%5x;%o!\n",a,a);/*%5x  ��5λʮ��������� */
	//printf("d = :%d;%15f;%8.3f;%20.15f;%.2f!\n",(int)d,d,d,d,d);
	//printf("c = :%c;%5c;%-5c!\n",c,c,c);


	 /*int a,b,c;
	printf("��������������");
	scanf("%d%d",&a,&b);
	c=a/b;
	printf("\n�����%d\n",c);*/

	int a, b, c = 888;
	int r;
	printf("��������������");
	r = scanf("%d%d", &a, &b);			/* ע������������Сд��L*/
	if (r == 2) {
		if (b !=0)
		{
			c = a / b;
			printf("\n�����%d\n", c);
		}
		else
		{
			printf("��������Ϊ0");
		}
		return 0;//
	}

	else {
		printf("���벻��ȷ");
	}
}