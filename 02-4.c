//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//空指针和野指针
//void test1()
//{
//	char *p = NULL;
//	//strcpy(p, "1111"); //err
//
//	char *q = 0x1122;
//	//strcpy(q, "2222"); //err		
//}
//
//int* doWork();
//void test2()
//{
//	//指针变量未初始化
//	//int * p;
//	//printf("%d\n",*p);//使用了未初始化的局部变量“p”
//
//	//指针释放后未置空
//	char* str = malloc(100);
//	free(str);
//	//记住释放后 置空，防止野指针出现
//	str = NULL;
//
//	free(str);
//	//空指针可以重复释放、野指针不可以重复释放
//
//	//指针操作超越变量作用域
//	int* p = doWork();
//	printf("%d\n", *p);//10
//	printf("%d\n", *p);//12720655
//}
//
////指针操作超越变量作用域
//int* doWork()
//{
//	int a = 10;
//	int* p = &a;
//	return p;
//}
//
//int main()
//{
//	//test1();
//	test2();
//
//	return 0;
//}