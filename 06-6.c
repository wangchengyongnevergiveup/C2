//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////�ص�����ʵ��2
//
////�ṩһ������,ʵ�ֿ��Դ�ӡ�������͵�����,���ûص������ṩ���ҹ���
//struct Person
//{
//	char name[64];
//	int age;
//};
//
//void printAllArray(void* pArray, int eleSize, int len, void(*myPrint)(void*));
//void myPrintperson(void* data);
//int findArrayEle(void* pArray, int eleSize, int len, void* data, int(*myCompare)(void*, void*));
//int myComparePerson(void* data1, void* data2);
//
//void test1()
//{
//	struct Person personArray[] ={{ "aaa", 10 },{ "bbb", 20 },{ "ccc", 30 },{ "ddd", 40 }};
//	int len = sizeof(personArray) / sizeof(struct Person);
//	printAllArray(personArray, sizeof(struct Person), len, myPrintperson);
//
//	//����������ָ����Ԫ���Ƿ����
//	struct Person p = { "ccc", 30 };
//	int ret = findArrayEle(personArray, sizeof(struct Person), len, &p, myComparePerson);
//	if (ret)
//	{
//		printf("�ҵ���Ԫ��\n");
//	}
//	else
//	{
//		printf("δ�ҵ�\n");
//	}
//}
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
//void myPrintperson(void* data)
//{
//	struct Person* p = data;
//	printf("������%s  ���䣺%d \n", p->name, p->age);
//}
//
////���������е�Ԫ���Ƿ����
////����1  �����׵�ַ   ����2  ÿ��Ԫ�صĴ�С  ����3  ����Ԫ�ظ���  ����4 ��������
//int findArrayEle(void* pArray, int eleSize, int len, void* data, int(*myCompare)(void*, void*))
//{
//	char* p = pArray;
//	for (int i = 0; i < len; i++)
//	{
//		//ÿ��Ԫ�ص��׵�ַ
//		char* eleAddr = p + eleSize * i;
//		//if ( �����еı�����Ԫ�� == �û������Ԫ��)
//		if (myCompare(eleAddr, data))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int myComparePerson(void* data1, void* data2)
//{
//	struct Person* p1 = data1;
//	struct Person* p2 = data2;
//	//if ( strcmp( p1->name , p2->name) == 0  &&  p1->age == p2->age)
//	//{
//	//	return 1;
//	//}
//	//return  0;
//	return   strcmp(p1->name, p2->name) == 0 && p1->age == p2->age;
//}
