//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//�ص�����ʵ��1

//�ṩһ��������ʵ�ֿ��Դ�ӡ�������͵����� 
//struct Person
//{
//	char name[64];
//	int age;
//};
//
//void printAllArray(void* pArray, int eleSize, int len, void(*myPrint)(void*));
//void myPrintInt(void* data);
//void myPrintperson(void* data);
//
//void test1()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int len1 = sizeof(arr) / sizeof(int);
//	printAllArray(arr, sizeof(int), len1, myPrintInt);// 1 2 3 4 5
//	putchar('\n');
//
//	struct Person personArray[] ={{ "aaa", 10 },{ "bbb", 20 },{ "ccc", 30 },{ "ddd", 40 }};
//	int len2 = sizeof(personArray) / sizeof(struct Person);
//	printAllArray(personArray, sizeof(struct Person), len2, myPrintperson);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//
//void printAllArray(void* pArray, int eleSize, int len, void(*myPrint)(void*))
//{
//	char* p = pArray;
//	for (int i = 0; i < len; i++)
//	{
//		//��ȡ������ÿ��Ԫ�ص��׵�ַ
//		char* eleAddr = p + eleSize * i;
//		//printf("%d\n", *(int *)eleAddr);
//		//�������û�����ӡ����
//		myPrint(eleAddr);
//	}
//}
//
//void myPrintInt(void* data)
//{
//	int* num = data;
//	printf("%d ", *num);
//}
//
//void myPrintperson(void* data)
//{
//	struct Person* p = data;
//	printf("������%s  ���䣺%d \n", p->name, p->age);
//}
