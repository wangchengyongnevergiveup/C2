//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//ָ����������

//��ͨ��������
//void mySort(int arr[], int len);
//void printArray(int arr[], int len);
//void test1()
//{
//	int arr[] = { 2, 5, 1, 3, 4 };
//	int len = sizeof(arr) / sizeof(int);
//	mySort(arr, len);
//	printArray(arr, len);//1 2 3 4 5
//
//}
//
////void selectSort(char ** pArr, int len)
//void selectSort(char* pArr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			//if (pArr[max] < pArr[j])//�ַ����Ƚ�
//			if (strcmp(pArr[max], pArr[j]) == -1)
//			{
//				max = j;
//			}
//		}
//		if (i != max)
//		{
//			char* tmp = pArr[i];
//			pArr[i] = pArr[max];
//			pArr[max] = tmp;
//		}
//	}
//
//}
//
//void printArray2(char** pArr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%s ", pArr[i]);
//	}
//	putchar('\n');
//}
////ָ����������
//void test2()
//{
//	char* pArray[] = { "aaa", "fff", "bbb", "ddd", "ccc", "eee" };
//	int len = sizeof(pArray) / sizeof(char*);
//	selectSort(pArray, len);
//	printArray2(pArray, len);//fff eee ddd ccc bbb aaa
//}
//
//int main() 
//{
//	test1();
//	test2();
//	return 0;
//}
//
//void mySort(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int min = i; //��¼��Сֵ���±�Ϊi
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[min] > arr[j])
//			{
//				//������ʵ��Сֵ�±�
//				min = j;
//			}
//		}
//		//�ж���ʵ��Сֵ�±� �Ƿ��뿪ʼ�϶���i��ȣ�������ȣ�����Ԫ��
//		if (i != min)
//		{
//			int temp = arr[i];
//			arr[i] = arr[min];
//			arr[min] = temp;
//		}
//	}
//
//}
//
//void printArray(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	putchar('\n');
//}