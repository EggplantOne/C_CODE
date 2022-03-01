#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//bit,byte,kb,mb,gb,tb,pb
//如何产生地址，32位地址线/数据线，地址线一旦通电就有正负电（电信号转化为数字信号010
//32位机器可以产生2^32编号，1个空间有一个字节大小
int main()
{
	int a = 10;
	int* p = &a;				//有一种变量是用来存放地址的
	printf("%p\n", &a);		//%p取地址操作符
	printf("%p\n", p);
	*p=20;//-解引用操作符-对p进行解引用，找到他所指向的对象a
	printf("%d\n", a);
	return 0;
}

//#define Max 100	//define定义的标识符常量
//#define可以定义宏-在标识符常量的基础上加上参数
//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define Max(x,y) (x>y?x:y)
//int main()
//{
//	//int a = Max;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("%d\n", max);
//	//宏的方式
//	max = Max(a, b);
//	printf("%d\n", max);
//}


//static修饰全局变量,改变作用域，让静态的全局变量只能在自己所在的静态源文件 内部使用
//static修饰函数也是改变了函数的链接属性,外部连接属性-内部连接属性
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
//	//extern-声明外部符号		extern int g_val;
//	retirn 0;
//}

//void test()		//void一般用于没有返回值的函数，和int同地位
//{
//	static int a = 1;	//a变为静态局部变量，局部变量生命周期边长
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
//	register int a = 10;//建议把a存储到寄存器中
//	//int定义的变量是有符号的，int其实叫signed int，无符号数为unsigned int
//	//union（联合体/共用体））
//	//typedef-类型重定义,unsigned int num=20;太长
//	//typedef unsigned int u_int;
//	return 0;
//}

//int main()
//{
//	auto int a = 10;//局部变量-自动变量（自动创建销毁）-前面省略了一个auto
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
//	//arr[4];//[]-下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-函数调用操作符
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = (a > b ? a : b);	//条件操作符exp1?exp2:exp3
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//&&-逻辑与
//	//||-逻辑或
//	int a = 3;
//	int b = 5;
//	int c=a&& b;		//1
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;	//(类型)强制类型转换
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//(++a)
//	printf("a=%d,b=%d\n", a, b);
//	//a++为后置++，先使用，再++，11，10；前置++，先++，再使用，11，11；--同理
//	return 0;
//}

//只要是整数，内存中存储的都是二进制的补码
// 正数-原码，反码，补码，三码相同，负数存的是补码	
//int main()
//{
//	int a = 0;	//4个字节，32个bit位
//	int b = ~a;	//b是有符号的整型
//	//~-按2进制位取反
//	//000000000000000000000000000000000
//	//111111111111111111111111111111111
//	//原码-符号不变，其他位按位取反-反码-加1-补码
//	//负数在2进制存储的时候，存储的是2进制的补码
//	printf("%d\n", b);//使用打印的是这个数的原码
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);		//这里可以看出sizeof不是函数
//	printf("%d\n", sizeof(arr));	//数组里元素的类型是int.数组是int[6]
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//求最大值-函数求解
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
//{//'\0'ascii值为0，	’0‘为48
////EOF-end of file-文件结束标志-值为-1
////数组的大小由常量来决定，不能n，n是变量
////\0占空间，但不算内容
//	return 0;
//}
