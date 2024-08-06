//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include <stddef.h>
//
////结构体偏移量
//struct Teacher
//{
//	char a; //0 ~ 3
//	int b;  //4 ~ 7
//};
//
//void test1()
//{
//	struct Teacher t1;
//	struct Teacher* p = &t1;
//	printf("b的属性偏移量为：%d\n", offsetof(struct Teacher, b));//4
//	printf("b的属性偏移量为：%d\n", (int)&(p->b) - (int)p);//4
//
//	//通过偏移量 操作内存
//	struct Teacher t2 = { 'a', 10 };
//	printf("t1.b = %d\n", *(int*)((char*)&t2 + offsetof(struct Teacher, b)));//t1.b = 10
//	printf("t1.b = %d\n", *(int*)((int*)&t2 + 1));//t1.b = 10
//}
//
////结构体嵌套结构体
//struct Teacher2
//{
//	char a;
//	int b;
//	struct Teacher c;//char a; int b;
//};
//
//void test2()
//{
//	struct Teacher2 t3 = { 'a', 10, 'b', 20 };
//	int offset1 = offsetof(struct Teacher2, c);
//	int offset2 = offsetof(struct Teacher, b);
//	printf("%d\n", *(int*)((char*)&t3 + offset1 + offset2));//20
//	printf("%d\n", ((struct Teacher*)((char*)&t3 + offset1))->b);//20
//
//}
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}