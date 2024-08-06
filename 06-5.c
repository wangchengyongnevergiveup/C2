//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//回调函数实例1

//提供一个函数，实现可以打印任意类型的数组 
//struct Person
//{
//	char name[64];
//	int age;
//};
//
//void printAllArray(void* pArray, int eleSize, int len, void(*myPrint)(void*));
//void myPrintInt(void* data);
//void myPrintperson(void* data);
//
//void test1()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int len1 = sizeof(arr) / sizeof(int);
//	printAllArray(arr, sizeof(int), len1, myPrintInt);// 1 2 3 4 5
//	putchar('\n');
//
//	struct Person personArray[] ={{ "aaa", 10 },{ "bbb", 20 },{ "ccc", 30 },{ "ddd", 40 }};
//	int len2 = sizeof(personArray) / sizeof(struct Person);
//	printAllArray(personArray, sizeof(struct Person), len2, myPrintperson);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//
//void printAllArray(void* pArray, int eleSize, int len, void(*myPrint)(void*))
//{
//	char* p = pArray;
//	for (int i = 0; i < len; i++)
//	{
//		//获取数组中每个元素的首地址
//		char* eleAddr = p + eleSize * i;
//		//printf("%d\n", *(int *)eleAddr);
//		//交还给用户做打印操作
//		myPrint(eleAddr);
//	}
//}
//
//void myPrintInt(void* data)
//{
//	int* num = data;
//	printf("%d ", *num);
//}
//
//void myPrintperson(void* data)
//{
//	struct Person* p = data;
//	printf("姓名：%s  年龄：%d \n", p->name, p->age);
//}
