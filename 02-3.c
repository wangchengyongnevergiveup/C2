//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////ջ������������ڴ��ŷ���(x86)
//
//void test1()
//{
//	int a = 10;//����ջ ջ��  �ߵ�ַ
//	int b = 10;
//	int c = 10;
//	int d = 10;//ջ��  �͵�ַ
//
//	printf("%d\n", &a);//20445124
//	printf("%d\n", &b);//20445112
//	printf("%d\n", &c);//20445100
//	printf("%d\n", &d);//20445088
//}
//
//void test2()
//{
//	int a = 0x11223344;
//	char* p = &a;
//
//	printf("%x\n", *p);    //44  ��λ�ֽ�����  �͵�ַ
//	printf("%x\n", *(p + 1)); //33  ��λ�ֽ�����  �ߵ�ַ
//}
//
//int main()
//{
//	test1();
//	test2();
//
//	return 0;
//}