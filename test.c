#define _CRT_SECURE_NO_WARNINGS 1
//包含一个叫stdio.h的文件
//std-标准 standard input output
#include<stdio.h>
int main()
{
	//未声明的标识符
	//声明extern外部符号的
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}

//int main()   //计算两个数的和
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据使用输入函数scanf
//	scanf("%d%d", &num1, &num2);//取地址符号&
//	//c语言语法规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int num2 = 20;//全局变量，定义在代码块（{}）之外的变量
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块内部的变量，局部变量不在局部之外使用
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

//int是整型的意思，main前面的int表示main调用之后返回一个整型值
//int main()//主函数-程序的入口-有且仅有一个
//{	//这里完成任务
//	printf("hehe\n"); //print是库函数，c语言本身提供给我们使用的函数
//	//使用别人的东西要打招呼
//	//#include
//	return 0;
//}
//short int 短整型
//long长整型    long long更长的整型 
//float单精度浮点数  double双精度浮点数

//int main()
//{
//	//char ch = 'A'; //内存
//	//printf("%c\n",ch);//%c--打印字符格式的数据
//	int age = 20;
//	printf("%d\n",age);//%d打印整型十进制的数据
//	return 0;
//}
////%f-打印浮点型数字-打印小数   %p以地址的形式打印  %x打印十六进制