//#define _CRT_SECURE_NO_WARNINGS   
//#include<stdio.h>   
//#include<string.h>  
//#include<stdlib.h> 
//
////typedef使用
//
//struct Person
//{
//	char name[64];
//	int age;
//};
//typedef struct Person  myPerson;
//
//typedef struct Person1
//{
//	char name[64];
//	int age;
//}myPerson1;
//
//
//typedef char* PCHAR;
//typedef int  MYINT;
//
//
//int main()
//{
//	struct Person a1 = { "aaa", 10 };
//	myPerson a2 = { "bbb", 20 };
//	printf("a2.name = %s a2.age = %d\n", a2.name, a2.age);
//
//	struct Person1 b1= { "aaa", 10 };
//	myPerson1 b2 = { "bbb", 20 };
//	printf("b2.name = %s b2.age = %d\n", b2.name, b2.age);
//
//	PCHAR p1, p2;//相当于char* p1  char* p2 不是char* p1，p2(char* p1,char p2)
//	printf("%u\n", sizeof(p2));//4
//
//	MYINT a = 10;
//	MYINT b = 10;
//	printf("%u\n", sizeof(b));//4
//
//	return 0;
//}