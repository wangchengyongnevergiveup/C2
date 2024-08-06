//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//数组指针
//void test1()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
// 
//	//1、先定义数组类型，再通过类型定义数组指针
//	typedef int(ARRARY_TYPE)[5];//ARRARY_TYPE 代表存放5个int类型元素的数组的数组类型
//
//	/*ARRARY_TYPE arr2;
//	for (int i = 0; i < 5;i++)
//	{
//		arr2[i] = 1 + i;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);// 1 2 3 4 5
//	}*/
//
//	ARRARY_TYPE* arrP = &arr;
//	// *arrP == arr == 数组名
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", (*arrP)[i]);//1 2 3 4 5
//	}
//	putchar('\n');
//
//	//2、先定义数组指针类型，再通过类型定义数组指针
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	typedef int(*ARRARY_TYPE1)[5];
//	ARRARY_TYPE1 arrP1 = &arr1;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", (*arrP1)[i]);//1 2 3 4 5
//	}
//	putchar('\n');
//
//	//3、直接定义数组指针变量
//
//	int arr2[5] = { 1, 2, 3, 4, 5 };
//	int(*p)[5] = &arr2;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", (*p)[i]);//1 2 3 4 5
//	}
//	putchar('\n');
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}