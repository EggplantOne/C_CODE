#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//strlen����ר��
//int main()
//{
//	int arr[10] = { 0 };//10������Ԫ�ص����飬��СΪ40
//	int sz = 0;
//	sz=sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//	//int a = 10;
//	//printf("%d\n", sizeof(a));	//���Ϊ4��sizeeof������Ǳ�������������ռ�ռ��С
//	//return 0;		//sizeof ��λ���ֽ�	���ȼ���sizeof(int),����a���ſ�ʡ������no
//}

//��Ŀ��������˫Ŀ����������Ŀ������
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+˫Ŀ������
//	int a = 101;
//	printf("%d\n", a);
//	printf("%d\n", !a);		//��Ŀ�����������߼�������   0-�٣���0-��
//	return 0;
//}

//int main()	//��ֵ
//{
//	int a = 10;
//	a = 20;	//��ֵ
//	a = a + 10;	//a+=10
//	a = a & 2;	//a&=2		���ϸ�ֵ����
//	return 0;
//}

//(2����)λ������  &��λ��   |��λ��   ^��λ���,��ͬΪ0������Ϊ1
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
//	//��(2����)λ������<<����		>>����
//	int a = 1;//����1ռ4���ֽڣ�32��bitλ
//	//���Ϊ000000000000000000000000000000001
//	int b = a << 1;
//	//���Ϊ000000000000000000000000000000010��2
//	//%d���ʮ�������ͣ���˴�ӡʱ��2����ת��Ϊ10���������Ļ
//	printf("%d\n", b);
//	return 0;
//}

//int main()    //���飺һ����ͬ����Ԫ�صļ���
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
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
//		return z;	//�����ź���ߵ����ݽк�����
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
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//
//	}
//	if (line >= 20000)
//		printf("��offer\n");
//	return 0;
//}

int main()    //ѭ�����
{
	int input = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��(1/0)>:");  //>:����ʾ��
	scanf("%d", &input);//1\0
	if (input == 1)
		printf("��offer\n");
	else
		printf("������\n");

	return 0;
}


//\ddd��ʾ1-3��8�������֣�\xdd��ʾ2��16��������
// //��c++��ע�ͷ��/* */��c���Ե�ע�ͷ��
//int main()
//{
//	printf("%c\n", '\'');  //%c������ӡ�ַ���ʽ������
//	//printf("abc");  //\n��ת��n����˼��\\���Է�ֹת�壬��Ϊ��ͨ
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));  //3
//	printf("%d\n", strlen(arr2));  //���ֵ
//	return 0;
//	//ת���ַ�����˼�ǰ�ԭ������˼ת��
//}


//�ַ�������-˫���������һ���ַ���Ϊ�ַ�������ֵ���ַ����Ľ�����־��һ��
//\0��ת���ַ����ڼ����ַ�������ʱ\0�ǽ�����־���������ַ�������
//int main()
//{
	//
	//char arr1[] = "abc";//arr��һ�����ƣ�[]�����飬����һ�δ�һ��ֵ��������Դ���
	//char arr2[] = { 'a','b','c','\0'};//�����0Ҳ��
	////"abc"--'a''b''c''\0'--'\0'�ַ����Ľ�����־
	////'\0'-0,'a'-97,ASCII����

	//printf("%s\n", arr2);
	//printf("%s\n", arr1);
//	return 0;
//}


//4.ö�ٳ���
//ö�ٵ���˼�ǿ���һһ�о٣�ö�ٹؼ�-enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	/*enum Sex s = MALE;*/
//	printf("%d\n", MALE);//0-������ֵ�ģ��Ҳ��ɱ��ı�
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//
//}

//3.#define����ı�ʶ������
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
//	int n = 10;  //n�Ǳ��������г����ԣ�����˵n�ǳ�����
//	int arr[n]  = 0;   //���У�n��λ��Ӧ�����볣��
//	//int arr{ 10 } = {0};
//	////2.const�����ԣ�const���εĳ�������ֵ
//	//const int num = 4;
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	////1.3:���泣��
//	return 0;
//}