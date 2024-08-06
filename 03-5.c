//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//二级指针做函数参数，具备输入和输出特性
//输入特性：主调函数分配内存, 被调用函数使用
//void printArray(int** pArray, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *pArray[i]);
//	}
//}
//
//void freeSpace(int** pArray, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		free(pArray[i]);
//		pArray[i] = NULL;
//	}
//}
//
//void test1()
//{
//	//创建在堆区
//	int** pArray = malloc(sizeof(int*) * 5);
//
//	//在栈上创建5个数据
//	int a1 = 1;
//	int a2 = 2;
//	int a3 = 3;
//	int a4 = 4;
//	int a5 = 5;
//
//	pArray[0] = &a1;
//	pArray[1] = &a2;
//	pArray[2] = &a3;
//	pArray[3] = &a4;
//	pArray[4] = &a5;
//
//	//打印数组
//	printArray(pArray, 5);//1 2 3 4 5
//
//	//释放堆区数据
//	if (pArray != NULL)
//	{
//		free(pArray);
//		pArray = NULL;
//	}
//
//}
//
////void test2()
////{
////	//创建在栈区
////	int* pArray[5];
////	for (int i = 0; i < 5; i++)
////	{
////		pArray[i] = malloc(4);
////		*(pArray[i]) = 1 + i;
////	}
////	printArray(pArray, 5);//数组名退化成指针  1 2 3 4 5
////	//释放
////	freeSpace(pArray, 5);//数组在栈区不用释放
////
////}
//
//int main() 
//{
//	test1();
//	//test2();
//	return 0;
//}