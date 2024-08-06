//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//sprintf

//拼接字符串
//void test1()
//{
//	char buf[1024];
//	memset(buf, 0, 1024);
//	sprintf(buf, "今天是%d年%d月%d日", 2024, 8, 5);
//	printf("%s\n", buf);//今天是2024年8月5日
//
//	memset(buf, 0, 1024);
//	char str1[] = "hello";
//	char str2[] = "world";
//	int len = sprintf(buf, "%s %s", str1, str2); //返回值是字符串长度 不包含\0
//	printf("buf:%s len:%d\n", buf, len);//buf:hello world len:11
//}
//
//void test2()
//{
//	//数字转字符串
//	char buf[1024];
//	memset(buf, 0, 1024);
//	int num = 100;
//	sprintf(buf, "%d", num);
//	printf("buf:%s\n", buf);//buf:100
//
//	//设置宽度 左对齐 右对齐
//	memset(buf, 0, 1024);
//	sprintf(buf, "%8d", num);
//	printf("buf:%s\n", buf);//buf:     100
//	memset(buf, 0, 1024);
//	sprintf(buf, "%-8d", num);
//	printf("buf:%s\n", buf);//buf:100     
//
//	//转成16进制字符串 8进制字符串
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