//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////�ڴ����
////#pragma pack(show)	   
//#pragma pack(1)
//
//typedef struct _STUDENT 
//{ 
//						 //����ģ��Ϊ1ʱ
//	int a;    //0 ~ 3      0 ~ 3
//	char b;   //4 ~ 7      4
//	double c; //8 ~ 15     5 ~ 12
//	float d;  //16 ~ 19    13 ~ 16
//}Student;
//
//void test1()
//{
//	printf("sizeof(Student)= %d\n", sizeof(Student));//24   17
//
//}
//
////�ṹ��Ƕ�׽ṹ��ʱ��
////�ӽṹ����ڸýṹ����������� �Ͷ���ģ���� ���������ϼ���
//typedef struct _STUDENT2 {
//	char a;  // 0 ~ 7
//	Student b; // 8  ~ 31  8+24
//	double c;  //32 ~ 39
//}Student2;
//
//void test2()
//{
//	printf("sizeof(Student2)= %d\n", sizeof(Student2));//40   26
//}
//
//int main() 
//{
//	test1();
//	test2();
//	return 0;
//}