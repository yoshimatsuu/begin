#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 1
//1.������ϰ
//#define small 15
//
//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%s\n", arr);
//	printf("ռ���ڴ��С��%d\n", sizeof(arr));
//
//	return 0;
//}




//2.ifѡ��ṹ��ִ��
//int main()
//
//	int input = 0;
//	printf("���߳�ֵ\n");
//	printf("��֧��1ԪǮ\n");
//
//	scanf_s("%d", &input);
//	if (input == 1)
//	{
//		printf("��ֵ�ɹ�\n");
//		printf("��ر�ҳ��\n");
//	}
//	else
//	printf("��ֵʧ��\n");
//
//	return 0;
//
// 





// 3.ѭ���ṹwhile�����ϰ
//int main()
//{
//	int i = 1;
//	int attack = 0;
//	printf("����������ͨ��\n");
//	printf("�Ƿ�ɨ������1ɨ������0����������");
//	scanf_s("%d", &attack);
//	if (attack = 1)
//	{
//		while (i <= 10)
//		{
//			printf("ɨ���ջ��ʯ*10,");
//			printf("��%d��ɨ��\n", i);
//			i += 1;
//		}
//		printf("����ֵ�Ѻľ�\n");
//
//	}
//	else
//		printf("�����˴θ���\n");
//	return 0;
//}







//4.�Զ���MAX������ȡ�������нϴ�ֵ
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
//	printf("�ϴ�ֵΪ��%d", max);
//	return 0;
//}






//5.ѡ���������ϰ 
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







//6. ��ֱ����Բ����������������λС����
//#define pai 3.1415926
//int main()
//{
//	float r;
//	scanf_s("%f",&r);
//	printf("Բ������ǣ�%0.2f",pai*r*r);     **
//	return 0;




//7.�󳤷���ı߳������
// int main()
//{
//	int l, d, S, C;
//	scanf_s("%d%d", &l,&d);    **
//	C = 2 *l + 2 *d;
//	S = l * d;
//	printf("C:%d\nS:%d", C,S);
//	return 0;
//}




//ͨ��ASCII��ֵ����֪��ĸbת��Ϊf
//int main()
//{
//	char c;
//	char a = 'b';
//	c = a + 4;
//	printf("%c", c);����%c���ӡ��ֵ��Ӧ��ĸ��%d���ӡ����ֵ
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
