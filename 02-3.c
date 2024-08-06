//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////栈的生长方向和内存存放方向(x86)
//
//void test1()
//{
//	int a = 10;//先入栈 栈底  高地址
//	int b = 10;
//	int c = 10;
//	int d = 10;//栈顶  低地址
//
//	printf("%d\n", &a);//20445124
//	printf("%d\n", &b);//20445112
//	printf("%d\n", &c);//20445100
//	printf("%d\n", &d);//20445088
//}
//
//void test2()
//{
//	int a = 0x11223344;
//	char* p = &a;
//
//	printf("%x\n", *p);    //44  低位字节数据  低地址
//	printf("%x\n", *(p + 1)); //33  高位字节数据  高地址
//}
//
//int main()
//{
//	test1();
//	test2();
//
//	return 0;
//}