//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////�ݹ麯��
////���õݹ�ʵ���ַ����������
//void reversePrint(char* p)
//{
//	if (*p == '\0')
//	{
//		return;
//	}
//	//printf("%c", *p);// abcdefg
//	reversePrint(p + 1);
//	printf("%c ", *p); // hfedcba
//}
//
////쳲���������
//int fibonacci(int pos)
//{
//	if (pos == 1 || pos == 2)
//	{
//		return 1;
//	}
//
//	return fibonacci(pos - 1) + fibonacci(pos - 2);
//}
//void test1()
//{
//	char* str = "abcdefg";
//	reversePrint(str);//g f e d c b a
//	putchar('\n');
//
//	// 1 1 2 3 5 8 13 21  34  55...
//	printf("��9Ϊ����Ϊ��%d\n", fibonacci(9));//34
//	printf("��10Ϊ����Ϊ��%d\n", fibonacci(10));//55
//	printf("��20Ϊ����Ϊ��%d\n", fibonacci(20));//6765
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}