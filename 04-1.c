//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//一维数组

//void printArray(int arr[], int len) 
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	putchar('\n');
//}
//
//void test1()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	printf("%d\n", sizeof(arr));//20
//
//	printf("%d\n", &arr);//13630148
//	printf("%d\n", &arr + 1);//13630168   步长是整个数组长度
//
//	//打印数组
//	int len = sizeof(arr) / sizeof(int);
//	printArray(arr, len);// 1 2 3 4 5 
//
//	//arr数组名  它是一个指针常量 指针的指向不可以修改的，而指针指向的值可以改 int * const a ; 
//	//arr[0] = 1000;
//	//arr = NULL;//error
//
//	//数组索引 可不可以为负数   答案：可以
//	int* p = arr;
//	p = p + 3;
//	printf("%d\n", p[-1]); // 3  给人看的
//	printf("%d\n", *(p - 1)); // 3  给机器看的
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}