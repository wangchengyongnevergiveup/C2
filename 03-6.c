//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//����ָ���������������߱�������������
//������ԣ������ú��������ڴ�,��������ʹ��

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
//	//ͬ��ָ������ Ұָ�� ֻ�ͷŵ��������� ����
//	//freeSpace1(&p);
//	//if (p == NULL)
//	//{
//	//	printf("��ָ��\n");
//	//}
//	//else
//	//{
//	//	printf("Ұָ��\n");
//	//}//Ұָ�� ����
//
//	freeSpace(&p);
//	if (p == NULL)
//	{
//		printf("��ָ��\n");
//	}
//	else
//	{
//		printf("Ұָ��\n");
//	}//��ָ��
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}