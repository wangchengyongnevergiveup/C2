//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////��ά����
//
//void test1()
//{
//	int arr[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//int* p = arr;//error
//	int(*pArray)[3] = arr;
//	//int *p = &arr;//error
//	int(*p)[3][3] = &arr;
//
//	printf("%d\n", arr[1][2]);// 6 ���˿�
//	printf("%d\n", *(*(pArray + 1) + 2)); // 6 ��������
//
//}
//
////void printArray(int (*array)[3], int row, int col)
////void printArray(int array[][3], int row ,int col)
//void printArray(int array[3][3], int row, int col) //array[3][3] �ȼ��� һά����ָ��   int (*array)[3]
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			//printf("%d ", array[i][j]);
//			printf("%d ", *(*(array + i) + j));
//		}
//		printf("\n");
//	}
//}
//
////��ά��������������
//void test2()
//{
//	int arr[3][3] = {{ 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 }};
//	printArray(arr, 3, 3);
//}
//
//int main() 
//{
//	test1();
//	//test2();
//	return 0;
//}