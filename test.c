#define _CRT_SECURE_NO_WARNINGS 1
//����һ����stdio.h���ļ�
//std-��׼ standard input output
#include<stdio.h>
int main()
{
	//δ�����ı�ʶ��
	//����extern�ⲿ���ŵ�
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}

//int main()   //�����������ĺ�
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������ʹ�����뺯��scanf
//	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
//	//c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int num2 = 20;//ȫ�ֱ����������ڴ���飨{}��֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ�����ڲ��ı������ֲ��������ھֲ�֮��ʹ��
//	return 0;
//}

//int main()
//{
//	float weight = 96.1f;
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(int)); 
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int�����͵���˼��mainǰ���int��ʾmain����֮�󷵻�һ������ֵ
//int main()//������-��������-���ҽ���һ��
//{	//�����������
//	printf("hehe\n"); //print�ǿ⺯����c���Ա����ṩ������ʹ�õĺ���
//	//ʹ�ñ��˵Ķ���Ҫ���к�
//	//#include
//	return 0;
//}
//short int ������
//long������    long long���������� 
//float�����ȸ�����  double˫���ȸ�����

//int main()
//{
//	//char ch = 'A'; //�ڴ�
//	//printf("%c\n",ch);//%c--��ӡ�ַ���ʽ������
//	int age = 20;
//	printf("%d\n",age);//%d��ӡ����ʮ���Ƶ�����
//	return 0;
//}
////%f-��ӡ����������-��ӡС��   %p�Ե�ַ����ʽ��ӡ  %x��ӡʮ������