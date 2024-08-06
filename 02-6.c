//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////指针作函数参数的输入、输出特性
////输入特性： 主调函数分配内存，被调函数使用
//void func(char* p)
//{
//	strcpy(p, "hello world");
//}
//void test1()
//{
//	//分配在栈上
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
//	//分配在堆上
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
////输出特性：在被调函数中分配内存，主调函数使用
//void allocateSpace(char** pp)
//{
//	//被调函数中分配内存
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