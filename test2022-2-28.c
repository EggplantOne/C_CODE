#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//bit,byte,kb,mb,gb,tb,pb
//��β�����ַ��32λ��ַ��/�����ߣ���ַ��һ��ͨ����������磨���ź�ת��Ϊ�����ź�010
//32λ�������Բ���2^32��ţ�1���ռ���һ���ֽڴ�С
int main()
{
	int a = 10;
	int* p = &a;				//��һ�ֱ�����������ŵ�ַ��
	printf("%p\n", &a);		//%pȡ��ַ������
	printf("%p\n", p);
	*p=20;//-�����ò�����-��p���н����ã��ҵ�����ָ��Ķ���a
	printf("%d\n", a);
	return 0;
}

//#define Max 100	//define����ı�ʶ������
//#define���Զ����-�ڱ�ʶ�������Ļ����ϼ��ϲ���
//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define Max(x,y) (x>y?x:y)
//int main()
//{
//	//int a = Max;
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("%d\n", max);
//	//��ķ�ʽ
//	max = Max(a, b);
//	printf("%d\n", max);
//}


//static����ȫ�ֱ���,�ı��������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵľ�̬Դ�ļ� �ڲ�ʹ��
//static���κ���Ҳ�Ǹı��˺�������������,�ⲿ��������-�ڲ���������
//extern Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	//extern-�����ⲿ����		extern int g_val;
//	retirn 0;
//}

//void test()		//voidһ������û�з���ֵ�ĺ�������intͬ��λ
//{
//	static int a = 1;	//a��Ϊ��̬�ֲ��������ֲ������������ڱ߳�
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	register int a = 10;//�����a�洢���Ĵ�����
//	//int����ı������з��ŵģ�int��ʵ��signed int���޷�����Ϊunsigned int
//	//union��������/�����壩��
//	//typedef-�����ض���,unsigned int num=20;̫��
//	//typedef unsigned int u_int;
//	return 0;
//}

//int main()
//{
//	auto int a = 10;//�ֲ�����-�Զ��������Զ��������٣�-ǰ��ʡ����һ��auto
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]-�±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-�������ò�����
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = (a > b ? a : b);	//����������exp1?exp2:exp3
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//&&-�߼���
//	//||-�߼���
//	int a = 3;
//	int b = 5;
//	int c=a&& b;		//1
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;	//(����)ǿ������ת��
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//(++a)
//	printf("a=%d,b=%d\n", a, b);
//	//a++Ϊ����++����ʹ�ã���++��11��10��ǰ��++����++����ʹ�ã�11��11��--ͬ��
//	return 0;
//}

//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
// ����-ԭ�룬���룬���룬������ͬ����������ǲ���	
//int main()
//{
//	int a = 0;	//4���ֽڣ�32��bitλ
//	int b = ~a;	//b���з��ŵ�����
//	//~-��2����λȡ��
//	//000000000000000000000000000000000
//	//111111111111111111111111111111111
//	//ԭ��-���Ų��䣬����λ��λȡ��-����-��1-����
//	//������2���ƴ洢��ʱ�򣬴洢����2���ƵĲ���
//	printf("%d\n", b);//ʹ�ô�ӡ�����������ԭ��
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);		//������Կ���sizeof���Ǻ���
//	printf("%d\n", sizeof(arr));	//������Ԫ�ص�������int.������int[6]
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//�����ֵ-�������
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{//'\0'asciiֵΪ0��	��0��Ϊ48
////EOF-end of file-�ļ�������־-ֵΪ-1
////����Ĵ�С�ɳ���������������n��n�Ǳ���
////\0ռ�ռ䣬����������
//	return 0;
//}
