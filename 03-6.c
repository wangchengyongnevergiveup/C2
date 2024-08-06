//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//二级指针做函数参数，具备输入和输出特性
//输出特性：被调用函数分配内存,主调函数使用

//void allocateSpace(int** p)
//{
//	int* temp = malloc(sizeof(int) * 10);
//	for (int i = 0; i < 10; i++)
//	{
//		temp[i] = 1 + i;
//	}
//	*p = temp;
//}
//
//void printArray(int** pArray, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", (*pArray)[i]);
//	}
//}
//
//void freeSpace1(int* pArray)
//{
//	if (pArray != NULL)
//	{
//		free(pArray);
//		pArray = NULL;
//	}
//}
//
//void freeSpace(int** pArray)
//{
//	if (*pArray != NULL)
//	{
//		free(*pArray);
//		*pArray = NULL;
//	}
//}
//
//void test1()
//{
//	int* p = NULL;
//	allocateSpace(&p);
//	printArray(&p, 5);
//
//	//同级指针修饰 野指针 只释放掉堆区内容 出错
//	//freeSpace1(&p);
//	//if (p == NULL)
//	//{
//	//	printf("空指针\n");
//	//}
//	//else
//	//{
//	//	printf("野指针\n");
//	//}//野指针 出错
//
//	freeSpace(&p);
//	if (p == NULL)
//	{
//		printf("空指针\n");
//	}
//	else
//	{
//		printf("野指针\n");
//	}//空指针
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}