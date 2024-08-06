//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////函数指针(回调函数)
//
//void func(int a, char c)
//{
//	printf("hello world\n");
//}
//
//void func1()
//{
//	printf("func1 调用了\n");
//}
//void func2()
//{
//	printf("func2 调用了\n");
//}
//void func3()
//{
//	printf("func3 调用了\n");
//}
//
//void test1()
//{
//	//1、先定义出函数类型，再通过类型定义函数指针
//	typedef void(FUNC_TYPE)(int, char);
//	FUNC_TYPE* pFunc = func;
//	pFunc(10, 'a');//hello world
//
//	//2、定义出函数指针类型，通过类型定义函数指针变量  类比数组指针
//	typedef void(*FUNC_TYPE2)(int, char);
//	FUNC_TYPE2 pFunc2 = func;
//	pFunc2(20, 'b');//hello world
//
//	//3、直接定义函数指针变量
//	void(*pFunc3)(int, char) = func;
//	pFunc3(30, 'c');//hello world
//
//	//函数指针的数组
//	void(*pArray[3])();
//	pArray[0] = func1;
//	pArray[1] = func2;
//	pArray[2] = func3;
//	for (int i = 0; i < 3; i++)
//	{
//		pArray[i]();//func1 调用了  func2 调用了 func3 调用了
//	}
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}