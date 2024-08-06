//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//位运算
//void test1()
//{
//	int num1 = 2;
//	// 010 取反   101 源码
//	//计算机用补码方式存数据  110 + 1      =  111
//	printf("~num = %d\n", ~num1); // ~num = -3
//
//	int num2 = 123;
//	if ((num2 & 1) == 1)
//	{
//		printf("num2为奇数\n"); //num2为奇数
//	}
//	else
//	{
//		printf("num2为偶数\n");
//	}
//
//	int num3 = 5;
//	int num4 = 3; //101 011----->111
//	printf("%d\n", num3 | num4);//7
//
//	int num5 = 5;
//	int num6 = 9;
//	num5 = num5 ^ num6; //  3 = 5 ^ 9 
//	num6 = num5 ^ num6; //  5 = 3 ^ 9
//	num5 = num5 ^ num6;//   9 = 3 ^ 5 
//	printf("%d\n", num5);//9
//	printf("%d\n", num6);//5
//
//	int num7 = 20;  // 20 * 2 ^ 2;
//	printf("%d\n", num7 <<= 2);//80
//
//	int num8 = 20;  // 20 / 2
//	printf("%d\n", num8 >>= 1);//10
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}
