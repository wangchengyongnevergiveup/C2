#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//函数调用流程和调用惯例  cdecl   从右到左 ，主调函数管理出栈

//int n = 10;//在main func test1中都可以使用
//
//char* func()
//{
//	char* p = malloc(10); //堆区数据，只要没有释放，都可以使用
//	int c = 10;//在func中可以使用，test01和main不可以使用
//	return p;
//}
//
//void test1()
//{
//
//	int b = 10; // 在test01，func可以使用，在main中不可以用
//	func();
//}
//
//int main()
//{
//	int a = 10; //在test01，func ， main中都可以使用
//	test1();
//	return 0;
//}