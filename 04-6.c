//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//结构体深浅拷贝
//
//struct Person
//{
//	char name[64];
//	int age;
//};
//void test1()
//{
//	struct Person p1 = { "Tom", 18 };
//	struct Person p2 = { "Jerry", 20 };
//	p1 = p2;
//	printf("p1的姓名：%s  年龄 ：%d\n", p1.name, p1.age);//p1的姓名：Jerry  年龄 ：20
//	printf("p2的姓名：%s  年龄 ：%d\n", p2.name, p2.age);//p2的姓名：Jerry  年龄 ：20
//}
//
//struct Person2
//{
//	char* name;
//	int age;
//};
//void test2()
//{
//	struct Person2 p1;
//	p1.name = malloc(sizeof(char) * 64);
//	strcpy(p1.name, "Tom");
//	p1.age = 18;
//	struct Person2 p2;
//	p2.name = malloc(sizeof(char) * 128);
//	strcpy(p2.name, "Jerry");
//	p2.age = 20;
//
//	p1 = p2; //系统提供的赋值操作是简单的浅拷贝 ，我们需要做手动赋值，提供深拷贝
//	printf("p1的姓名：%s  年龄 ：%d\n", p1.name, p1.age);
//	printf("p2的姓名：%s  年龄 ：%d\n", p2.name, p2.age);
//	if (p1.name != NULL)
//	{
//		free(p1.name);
//		p1.name = NULL;
//	}
//	if (p2.name != NULL)
//	{
//		free(p2.name);
//		p2.name = NULL;
//	}//程序出错  1.堆区内存重复释放  2.内存泄露  
//
//	手动赋值
//	先释放原来堆区的内容  原堆区空间可能不足
//	if (p1.name != NULL)
//	{
//		free(p1.name);
//		p1.name = NULL;
//	}
//	在堆区创建内存
//	p1.name = malloc(strlen(p2.name) + 1);
//	strcpy(p1.name, p2.name);
//	p1.age = p2.age;
//	printf("p1的姓名：%s  年龄 ：%d\n", p1.name, p1.age);//p1的姓名：Jerry  年龄 ：20
//	printf("p2的姓名：%s  年龄 ：%d\n", p2.name, p2.age);//p2的姓名：Jerry  年龄 ：20
//	if (p1.name != NULL)
//	{
//		free(p1.name);
//		p1.name = NULL;
//	}
//	if (p2.name != NULL)
//	{
//		free(p2.name);
//		p2.name = NULL;
//	}
//}
//
//int main() 
//{
//	test1();
//	test2();
//	return 0;
//}