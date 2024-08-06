//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////变量的修改方式
//void test1()
//{
//	int a = 10;
//	a = 20;
//	printf("a = %d\n", a);//20
//
//
//	int* p = &a;
//	*p = 30;
//	printf("a = %d\n", a);//30
//
//}
//
//struct Person
//{
//	char a; //0 ~ 3
//	int b;  //4 ~ 7
//	char c; //8 ~ 11
//	int d;  //12 ~ 15  共16
//};
//
//void test2()
//{
//	struct Person p = { 'a', 10, 'b', 10 };
//	
//	p.d = 20;
//	printf("p.d = %d\n", p.d);//p.d = 20
//
//	struct Person* pp = &p;
//	pp->d = 30;
//	printf("p.d = %d\n", pp->d);//30
//	//printf("%d\n", pp);//17823512
//	//printf("%d\n", pp+1);//17823528 
//
//	char* aa = &p;
//	//printf("%d\n", aa);//6224764
//	//printf("%d\n", aa+1);//6224765
//	*(int*)(aa + 12) = 40;
//	printf("p.d = %d\n", p.d);//40
//	*(int*)((int*)pp + 3) = 50;
//	printf("p.d = %d\n", p.d);//50
//
//}
//
//int main() 
//{
//	//test1();
//	test2();
//
//	return 0;
//}