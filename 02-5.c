//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include <stddef.h> //offsetof的头文件

//指针的步长
//void test1()
//{
//	char* p = NULL;
//	printf("%d\n", p);//0
//	printf("%d\n", p + 1);//1
//
//	double* p2 = NULL;
//	printf("%d\n", p2);//0
//	printf("%d\n", p2 + 1);//8
//
//}
//
//void test2()
//{
//	char buf[1024] = { 0 };
//	int a = 1000;
//
//	memcpy(buf, &a, sizeof(int));
//	char* p1 = buf;
//	printf("%d\n", *(int*)(p1));//1000
//
//	memcpy(buf + 1, &a, sizeof(int));
//	char* p2 = buf;
//	printf("%d\n", *(int*)(p2 + 1));//1000
//
//}
//
//
//struct Person
//{
//	char a;     // 0 ~ 3
//	int b;      // 4 ~ 7
//	char buf[64]; // 8 ~ 71
//	int d;     // 72 ~ 75
//};
//
//void test3()
//{
//	struct Person p = { 'a', 10, "hello world", 20 };
//
//	printf("d属性的值为：%d\n", *(int*)((char*)&p + 72));//20
//	printf("d属性的偏移量： %d\n", offsetof(struct Person, d));//72
//	printf("d属性的值为：%d\n", *(int*)((char*)&p + offsetof(struct Person, d)));//20
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