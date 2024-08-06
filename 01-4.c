//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////у╩гЬсК╤ягЬ
//char* getString()
//{
//	char str[] = "hello world";
//	return str;
//}
//
//void test1()
//{
//	char* p1 = NULL;
//	p1 = getString();
//	printf("%s\n", p1);//лллллллллллл░Ш?
//}
//
//void allocateSpace(char* pp)
//{
//	char* temp = malloc(100);
//	if (temp != NULL)
//	{
//		memset(temp, 0, 100);
//		strcpy(temp, "hello world");
//		pp = temp;
//	}
//}
//void test2()
//{
//	char* p2 = NULL;
//	allocateSpace(p2);
//	printf("%s\n", p2);//(null)
//	if (p2 != NULL)
//	{
//		free(p2);
//		p2 = NULL;
//	}
//}
//
//void allocateSpace2(char** pp)
//{
//	char* temp = malloc(100);
//	if (temp != NULL)
//	{
//		memset(temp, 0, 100);
//		strcpy(temp, "hello world");
//		*pp = temp;
//	}
//}
//void test3()
//{
//	char* p3 = NULL;
//	allocateSpace2(&p3);
//	printf("%s\n", p3);//hello world
//	if (p3 != NULL)
//	{
//		free(p3);
//		p3 = NULL;
//	}
//}
//
//int main() 
//{
//	//test1();
//	//test2();
//	test3();
//
//	return 0;
//}