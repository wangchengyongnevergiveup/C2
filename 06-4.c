//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////����ָ��(�ص�����)
//
//void func(int a, char c)
//{
//	printf("hello world\n");
//}
//
//void func1()
//{
//	printf("func1 ������\n");
//}
//void func2()
//{
//	printf("func2 ������\n");
//}
//void func3()
//{
//	printf("func3 ������\n");
//}
//
//void test1()
//{
//	//1���ȶ�����������ͣ���ͨ�����Ͷ��庯��ָ��
//	typedef void(FUNC_TYPE)(int, char);
//	FUNC_TYPE* pFunc = func;
//	pFunc(10, 'a');//hello world
//
//	//2�����������ָ�����ͣ�ͨ�����Ͷ��庯��ָ�����  �������ָ��
//	typedef void(*FUNC_TYPE2)(int, char);
//	FUNC_TYPE2 pFunc2 = func;
//	pFunc2(20, 'b');//hello world
//
//	//3��ֱ�Ӷ��庯��ָ�����
//	void(*pFunc3)(int, char) = func;
//	pFunc3(30, 'c');//hello world
//
//	//����ָ�������
//	void(*pArray[3])();
//	pArray[0] = func1;
//	pArray[1] = func2;
//	pArray[2] = func3;
//	for (int i = 0; i < 3; i++)
//	{
//		pArray[i]();//func1 ������  func2 ������ func3 ������
//	}
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}