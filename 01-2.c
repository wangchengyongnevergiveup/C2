//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////void��sizeofʹ��
//
//void test1()
//{
//	printf("size of void* = %u\n", sizeof(void *));//4
//	
//	void* p1 = NULL;
//	void* p2 = NULL;
//
//	int* pInt = NULL;
//	char* pChar = NULL;
//	
//	//pChar = p1; 
//	//pInt = p2;
//	p1 = pChar;
//	p2 = pInt;
//}
//
//void test2()
//{
//	if (sizeof(int) - 5 > 0)
//	{
//		printf("����0\n");//����0
//	}
//	else
//	{
//		printf("С��0\n");
//	}
//}
//
////������������������ʱ�򣬻��˻�Ϊָ�룬ָ�������е�һ��Ԫ�ص�λ��
//void calculateArray(int arr[])
//{
//	printf("array length = %d\n", sizeof(arr));//4
//}
//
//void test3()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//
//	calculateArray(arr);
//	printf("array length = %d\n", sizeof(arr));//32
//
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//
//	return 0;
//}