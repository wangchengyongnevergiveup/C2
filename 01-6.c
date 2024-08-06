//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////常量区
//
//void test1()
//{
//	const int b = 10; //存放在栈上，通过间接修改是可以成功的
//
//	//b = 20;
//	int* p = &b;
//	*p = 20;
//	printf("%d\n", b);//20
//}
//
//void test2()
//{
//	//不要修改字符串常量
//	char* p1 = "hello world";
//	char* p2 = "hello world";
//	char* p3 = "hello world";
//	printf("%d\n", &"hello world");//3373876
//	printf("%d\n", p1);//3373876
//	printf("%d\n", p2);//3373876
//	printf("%d\n", p3);//3373876
//}
//
//int main() 
//{
//	//test1();
//	test2();
//
//	return 0;
//}