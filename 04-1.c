//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//һά����

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
//	printf("%d\n", &arr + 1);//13630168   �������������鳤��
//
//	//��ӡ����
//	int len = sizeof(arr) / sizeof(int);
//	printArray(arr, len);// 1 2 3 4 5 
//
//	//arr������  ����һ��ָ�볣�� ָ���ָ�򲻿����޸ĵģ���ָ��ָ���ֵ���Ը� int * const a ; 
//	//arr[0] = 1000;
//	//arr = NULL;//error
//
//	//�������� �ɲ�����Ϊ����   �𰸣�����
//	int* p = arr;
//	p = p + 3;
//	printf("%d\n", p[-1]); // 3  ���˿���
//	printf("%d\n", *(p - 1)); // 3  ����������
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}