//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//calloc��realloc

//void test1()
//{
//	int* p = calloc(10, sizeof(int)); //calloc �����ڶ�������malloc��ͬ���� calloc���ʼ������Ϊ0
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);//10��0
//	}
//	if (p != NULL)
//	{
//		free(p);
//		p = NULL;
//	}
//}
//
//void test2()
//{
//	int* p = malloc(sizeof(int) * 10);
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i+1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//1 2 3 4 5 6 7 8 9 10
//	}
//	putchar('\n');
//	printf("%d\n", p);//14484832
//
//	//������·�����ڴ��ԭ������ô�����ʼ���¿ռ�Ϊ0
//	p = realloc(p, sizeof(int) * 20);
//	printf("%d\n", p);//14503440
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", p[i]);//1 2 3 4 5 6 7 8 9 10 -842150451 -842150451  -842150451 ...
//	}
//	putchar('\n');
//	//������·�����ڴ��ԭ��С����ô�ͷź���ռ䣬ֻ��Ȩ�޲�������Ŀռ�
//	p = realloc(p, sizeof(int) * 5);
//	printf("%d\n", p);//18173456
//	printf("%d\n", p[0]);//1
//	printf("%d\n", p[5]);//-33686019
//}
//
//int main()
//  {
//	//test1();
//	test2();
//	return 0;
//}