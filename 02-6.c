//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////ָ�����������������롢�������
////�������ԣ� �������������ڴ棬��������ʹ��
//void func(char* p)
//{
//	strcpy(p, "hello world");
//}
//void test1()
//{
//	//������ջ��
//	char buf[1024] = { 0 };
//	func(buf);
//	printf("%s\n", buf);//hello world
//}
//
//void printString(char* str)
//{
//	printf("%s\n", str);
//
//}
//void test2()
//{
//	//�����ڶ���
//	char* p = malloc(sizeof(char) * 64);
//	if (p != NULL)
//	{
//		memset(p, 0, 64);
//		strcpy(p, "hello world");
//	}
//	printString(p);//hello world
//	if (p != NULL)
//	{
//		free(p);
//		p = NULL;
//	}
//}
//
////������ԣ��ڱ��������з����ڴ棬��������ʹ��
//void allocateSpace(char** pp)
//{
//	//���������з����ڴ�
//	char* str = malloc(sizeof(char) * 64);
//	if (str != NULL)
//	{
//		memset(str, 0, 64);
//		strcpy(str, "hello world");
//		*pp = str;
//	}
//}
//void test3()
//{
//	char* p = NULL;
//	allocateSpace(&p);
//	printf("%s\n", p);//hello world
//}
//
//int main() 
// {
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}