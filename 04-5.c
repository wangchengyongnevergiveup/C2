//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////�ṹ��
//typedef struct Person
//{
//	char name[64];
//	int age;
//}myPerson;
//
//void test1()
//{
//	//������ջ��
//	struct Person p = { "aaa", 10 };
//	printf("������%s ���䣺%d\n", p.name, p.age);//������aaa ���䣺10
//	myPerson p1 = { "bbb", 20 };
//	printf("������%s ���䣺%d\n", p1.name, p1.age);//������bbb ���䣺20
//
//	//�����ڶ���
//	struct Person* p2 = malloc(sizeof(struct Person));
//	strcpy(p2->name, "ccc");
//	p2->age = 30;
//	printf("������%s ���䣺%d\n", p2->name, p2->age);//������ccc ���䣺30
//	if (p2 != NULL)
//	{
//		free(p2);
//		p2 = NULL;
//	}
//}
//
//void printArray(struct Person personArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("������%s ���䣺%d\n", personArray[i].name, personArray[i].age);
//	}
//}
////�ṹ��������鴴��
//void test2()
//{
//	//��ջ�Ϸ����ڴ�
//	struct Person persons[] ={{ "aaa", 10 },{ "bbb", 20 },{ "ccc", 30 },{ "ddd", 40 }};
//	int len = sizeof(persons) / sizeof(struct Person);
//	printArray(persons, len);
//
//	//�ڶ��������ڴ�
//	struct Person* pArray = malloc(sizeof(struct Person) * 4);
//	for (int i = 0; i < 4; i++)
//	{
//		sprintf(pArray[i].name, "name_%d", i + 1);
//		pArray[i].age = 18 + i;
//	}
//	printArray(pArray, 4);
//	if (pArray != NULL)
//	{
//		free(pArray);
//		pArray = NULL;
//	}
//
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}