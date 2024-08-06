//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////结构体
//typedef struct Person
//{
//	char name[64];
//	int age;
//}myPerson;
//
//void test1()
//{
//	//创建在栈上
//	struct Person p = { "aaa", 10 };
//	printf("姓名：%s 年龄：%d\n", p.name, p.age);//姓名：aaa 年龄：10
//	myPerson p1 = { "bbb", 20 };
//	printf("姓名：%s 年龄：%d\n", p1.name, p1.age);//姓名：bbb 年龄：20
//
//	//创建在堆区
//	struct Person* p2 = malloc(sizeof(struct Person));
//	strcpy(p2->name, "ccc");
//	p2->age = 30;
//	printf("姓名：%s 年龄：%d\n", p2->name, p2->age);//姓名：ccc 年龄：30
//	if (p2 != NULL)
//	{
//		free(p2);
//		p2 = NULL;
//	}
//}
//
//void printArray(struct Person personArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("姓名：%s 年龄：%d\n", personArray[i].name, personArray[i].age);
//	}
//}
////结构体变量数组创建
//void test2()
//{
//	//在栈上分配内存
//	struct Person persons[] ={{ "aaa", 10 },{ "bbb", 20 },{ "ccc", 30 },{ "ddd", 40 }};
//	int len = sizeof(persons) / sizeof(struct Person);
//	printArray(persons, len);
//
//	//在堆区分配内存
//	struct Person* pArray = malloc(sizeof(struct Person) * 4);
//	for (int i = 0; i < 4; i++)
//	{
//		sprintf(pArray[i].name, "name_%d", i + 1);
//		pArray[i].age = 18 + i;
//	}
//	printArray(pArray, 4);
//	if (pArray != NULL)
//	{
//		free(pArray);
//		pArray = NULL;
//	}
//
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}