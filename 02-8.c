//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//sprintf

//ƴ���ַ���
//void test1()
//{
//	char buf[1024];
//	memset(buf, 0, 1024);
//	sprintf(buf, "������%d��%d��%d��", 2024, 8, 5);
//	printf("%s\n", buf);//������2024��8��5��
//
//	memset(buf, 0, 1024);
//	char str1[] = "hello";
//	char str2[] = "world";
//	int len = sprintf(buf, "%s %s", str1, str2); //����ֵ���ַ������� ������\0
//	printf("buf:%s len:%d\n", buf, len);//buf:hello world len:11
//}
//
//void test2()
//{
//	//����ת�ַ���
//	char buf[1024];
//	memset(buf, 0, 1024);
//	int num = 100;
//	sprintf(buf, "%d", num);
//	printf("buf:%s\n", buf);//buf:100
//
//	//���ÿ�� ����� �Ҷ���
//	memset(buf, 0, 1024);
//	sprintf(buf, "%8d", num);
//	printf("buf:%s\n", buf);//buf:     100
//	memset(buf, 0, 1024);
//	sprintf(buf, "%-8d", num);
//	printf("buf:%s\n", buf);//buf:100     
//
//	//ת��16�����ַ��� 8�����ַ���
//	memset(buf, 0, 1024);
//	sprintf(buf, "0x%x", num);
//	printf("buf:%s\n", buf);//buf:0x64
//	memset(buf, 0, 1024);
//	sprintf(buf, "0%o", num);
//	printf("buf:%s\n", buf);//buf:0144
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}