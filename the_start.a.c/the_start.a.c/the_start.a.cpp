#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string>
#define MIN 10
extern int g_val;
// ����һ�±���
//int main()
//{
	//1.��ϰʹ��printf
	//printf("the first\n");				
	////printf("%d\n", sizeof(char));		//sizeof -- �����С ,�������ͻ��߱�����Ĵ�Сλ���ֽ�
	//printf("%d\n", 100);			//%d--��ӡ����
	//int age = 10;
	//age = age + 1;
	//printf("%d\n", age);
	//double weight = 68.3;
	//weight = weight + 1;
	//printf("%lf\n", weight);		//lf%--��ӡdouble;%f--��ӡfloat
	 
	
	//2.����һ����ֵ
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//scanf("%d %d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);		//�Լ�������ֵ
	
	
	//printf("%d\n", g_val);


	//constʹ�������Ϊһ��������
	//const int num = 18;   //��num���һ��������
	////num = 20		//����д��;
	//printf("%d\n", num);
	//int num1 = 10;		
	//num1 = 20;		//�����num1����ֵ
	//printf("%d\n", num1);

	////#define�����ʶ������
	//int n = MIN;
	//printf("%d\n", n);
	//#define MAX 10000 
	//int  m = MAX;
	//printf("%d\n", m);


	//return 0;
//}

////enum ö�ٳ���
//enum SEX
//{
//	MALE,	//�����ʱ��male��ֵ��male = 1����ζ����ֵ
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
	//char arr[] = "hello";		//arr��ʾ����--�ַ�����ĩβ������\0�Ľ�����־
	//char arr1[] = "fengle";
	//char arr2[] = { 'f', 'e', 'n', 'g','l', 'e'};
	//char arr3[] = { 'f', 'e', 'n', 'g','l', 'e', '\0'};
	//printf("%s\n", arr);		//%s--��ӡ�ַ���
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%s\n", arr3);
	

	//strlen����Ϊstring lenth �����ַ����ĺ���
	int len = strlen("fengle");
	printf("%d\n", len);

	return 0;
}