//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//����ָ���������������߱�������������
//�������ԣ��������������ڴ�, �����ú���ʹ��
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
//	//�����ڶ���
//	int** pArray = malloc(sizeof(int*) * 5);
//
//	//��ջ�ϴ���5������
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
//	//��ӡ����
//	printArray(pArray, 5);//1 2 3 4 5
//
//	//�ͷŶ�������
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
////	//������ջ��
////	int* pArray[5];
////	for (int i = 0; i < 5; i++)
////	{
////		pArray[i] = malloc(4);
////		*(pArray[i]) = 1 + i;
////	}
////	printArray(pArray, 5);//�������˻���ָ��  1 2 3 4 5
////	//�ͷ�
////	freeSpace(pArray, 5);//������ջ�������ͷ�
////
////}
//
//int main() 
//{
//	test1();
//	//test2();
//	return 0;
//}