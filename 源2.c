#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 1
//1.数组练习
//#define small 15
//
//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%s\n", arr);
//	printf("占用内存大小：%d\n", sizeof(arr));
//
//	return 0;
//}




//2.if选择结构的执行
//int main()
//
//	int input = 0;
//	printf("在线充值\n");
//	printf("请支付1元钱\n");
//
//	scanf_s("%d", &input);
//	if (input == 1)
//	{
//		printf("充值成功\n");
//		printf("请关闭页面\n");
//	}
//	else
//	printf("充值失败\n");
//
//	return 0;
//
// 





// 3.循环结构while语句练习
//int main()
//{
//	int i = 1;
//	int attack = 0;
//	printf("副本已满星通关\n");
//	printf("是否扫荡，输1扫荡，输0结束副本：");
//	scanf_s("%d", &attack);
//	if (attack = 1)
//	{
//		while (i <= 10)
//		{
//			printf("扫荡收获火晶石*10,");
//			printf("第%d次扫荡\n", i);
//			i += 1;
//		}
//		printf("体力值已耗尽\n");
//
//	}
//	else
//		printf("结束此次副本\n");
//	return 0;
//}







//4.自定义MAX函数，取两整型中较大值
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int max;
//	max = MAX(a, b);
//	printf("较大值为：%d", max);
//	return 0;
//}






//5.选择操作符练习 
//int main()
//{
//	int a = 10;
//
//	int b = 20;
//	int MAX = (a > b ? a : b);
//
//	printf("%d", MAX);
//
//
//	return 0;
//}
// 







//6. 给直径求圆的面积（结果保留两位小数）
//#define pai 3.1415926
//int main()
//{
//	float r;
//	scanf_s("%f",&r);
//	printf("圆的面积是：%0.2f",pai*r*r);     **
//	return 0;




//7.求长方体的边长和面积
// int main()
//{
//	int l, d, S, C;
//	scanf_s("%d%d", &l,&d);    **
//	C = 2 *l + 2 *d;
//	S = l * d;
//	printf("C:%d\nS:%d", C,S);
//	return 0;
//}




//通过ASCII码值将已知字母b转化为f
//int main()
//{
//	char c;
//	char a = 'b';
//	c = a + 4;
//	printf("%c", c);——%c会打印数值对应字母，%d会打印其数值
//	return 0;
//}

int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b, a > c)
		printf("%d", a);
	else(b > a, b > c);
		printf("%d", b);
		else
		printf("%d", c);

	return 0;
}
