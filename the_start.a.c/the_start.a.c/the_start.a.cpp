#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string>
#define MIN 10
extern int g_val;
// 声明一下变量
//int main()
//{
	//1.练习使用printf
	//printf("the first\n");				
	////printf("%d\n", sizeof(char));		//sizeof -- 计算大小 ,计算类型或者变量间的大小位是字节
	//printf("%d\n", 100);			//%d--打印整型
	//int age = 10;
	//age = age + 1;
	//printf("%d\n", age);
	//double weight = 68.3;
	//weight = weight + 1;
	//printf("%lf\n", weight);		//lf%--打印double;%f--打印float
	 
	
	//2.计算一个和值
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//scanf("%d %d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);		//自己输入数值
	
	
	//printf("%d\n", g_val);


	//const使变量变成为一个常变量
	//const int num = 18;   //令num变成一个常变量
	////num = 20		//错误写法;
	//printf("%d\n", num);
	//int num1 = 10;		
	//num1 = 20;		//令更改num1的数值
	//printf("%d\n", num1);

	////#define定义标识符常量
	//int n = MIN;
	//printf("%d\n", n);
	//#define MAX 10000 
	//int  m = MAX;
	//printf("%d\n", m);


	//return 0;
//}

////enum 枚举常量
//enum SEX
//{
//	MALE,	//如果此时给male赋值：male = 1，意味赋初值
//	FEMALE,
//	SECRET
//	
//};
//int main()
//{
//	enum SEX n = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	printf("%d\n", n);
//	return 0;
//}

#include <string>
int main()
{
	//char arr[] = "hello";		//arr表示数组--字符串在末尾隐藏了\0的结束标志
	//char arr1[] = "fengle";
	//char arr2[] = { 'f', 'e', 'n', 'g','l', 'e'};
	//char arr3[] = { 'f', 'e', 'n', 'g','l', 'e', '\0'};
	//printf("%s\n", arr);		//%s--打印字符串
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%s\n", arr3);
	

	//strlen可意为string lenth 测量字符串的函数
	int len = strlen("fengle");
	printf("%d\n", len);

	return 0;
}