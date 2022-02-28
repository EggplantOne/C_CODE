#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//strlen函数专用
//int main()
//{
//	int arr[10] = { 0 };//10个整形元素的数组，大小为40
//	int sz = 0;
//	sz=sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//	//int a = 10;
//	//printf("%d\n", sizeof(a));	//结果为4，sizeeof计算的是变量或者类型所占空间大小
//	//return 0;		//sizeof 单位是字节	，等价于sizeof(int),变量a括号可省，后者no
//}

//单目操作符，双目操作符，三目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+双目操作符
//	int a = 101;
//	printf("%d\n", a);
//	printf("%d\n", !a);		//单目操作符，！逻辑反操作   0-假，！0-真
//	return 0;
//}

//int main()	//赋值
//{
//	int a = 10;
//	a = 20;	//赋值
//	a = a + 10;	//a+=10
//	a = a & 2;	//a&=2		复合赋值符号
//	return 0;
//}

//(2进制)位操作符  &按位与   |按位或   ^按位异或,相同为0，相异为1
//int main()
//{
//	int a = 3;			//011
//	int b = 5;			//101
//	int c = a & b;		//001  
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//int a = 5 % 2;	//1
//	
//	//移(2进制)位操作符<<左移		>>右移
//	int a = 1;//整型1占4个字节，32个bit位
//	//序号为000000000000000000000000000000001
//	int b = a << 1;
//	//序号为000000000000000000000000000000010即2
//	//%d输出十进制整型，因此打印时将2进制转化为10进制输出屏幕
//	printf("%d\n", b);
//	return 0;
//}

//int main()    //数组：一组相同类型元素的集合
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
//	int i = 0;
//	while (i < 10)
//	{	printf("%d ", arr[i]);
//		i++; 
//	}
//	//printf("%d\n", arr[4]);
//	//char ch[20]
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//		return z;	//大括号和里边的内容叫函数体
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//
//	}
//	if (line >= 20000)
//		printf("好offer\n");
//	return 0;
//}

int main()    //循环语句
{
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？(1/0)>:");  //>:是提示符
	scanf("%d", &input);//1\0
	if (input == 1)
		printf("好offer\n");
	else
		printf("卖红薯\n");

	return 0;
}


//\ddd表示1-3个8进制数字，\xdd表示2个16进制数字
// //是c++的注释风格，/* */是c语言的注释风格
//int main()
//{
//	printf("%c\n", '\'');  //%c用来打印字符格式的数据
//	//printf("abc");  //\n会转变n的意思，\\可以防止转义，变为普通
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));  //3
//	printf("%d\n", strlen(arr2));  //随机值
//	return 0;
//	//转义字符的意思是把原来的意思转变
//}


//字符串类型-双引号引起的一串字符称为字符串字面值，字符串的结束标志是一个
//\0的转义字符，在计算字符串长度时\0是结束标志，不算作字符串内容
//int main()
//{
	//
	//char arr1[] = "abc";//arr是一个名称，[]是数组，变量一次存一个值，数组可以存多个
	//char arr2[] = { 'a','b','c','\0'};//最后用0也行
	////"abc"--'a''b''c''\0'--'\0'字符串的结束标志
	////'\0'-0,'a'-97,ASCII编码

	//printf("%s\n", arr2);
	//printf("%s\n", arr1);
//	return 0;
//}


//4.枚举常量
//枚举的意思是可以一一列举，枚举关键-enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	/*enum Sex s = MALE;*/
//	printf("%d\n", MALE);//0-都是有值的，且不可被改变
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//
//}

//3.#define定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}
//


//int main()
//{ 
//	int n = 10;  //n是变量，又有常属性，所以说n是常变量
//	int arr[n]  = 0;   //不行，n的位置应当输入常量
//	//int arr{ 10 } = {0};
//	////2.const常属性，const修饰的常变量的值
//	//const int num = 4;
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	////1.3:字面常量
//	return 0;
//}