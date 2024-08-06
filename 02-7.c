//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//字符串与指针

//sizeof和strlen
//void test1()
//{
//	//以字符串初始化，默认尾部添0
//	char str1[] = "hello";
//	printf("%s\n", str1);//hello
//	printf("sizeof str:%d\n", sizeof(str1)); //6
//	printf("strlen str:%d\n", strlen(str1)); //5
//
//	char str2[100] = "hello";
//	printf("sizeof str:%d\n", sizeof(str2));//100
//	printf("strlen str:%d\n", strlen(str2));//5 
//
//	char str3[] = "hello\0world";
//	printf("%s\n", str3);//hello
//	printf("sizeof str5:%d\n", sizeof(str3)); //12
//	printf("strlen str5:%d\n", strlen(str3)); //5
//}

//字符串拷贝实现
//void copyString(char* dest, char* src)
//{
//	/*int len = strlen(src);
//	for (int i = 0; i < len; i++)
//	{
//		dest[i] = src[i];
//	}
//	dest[len] = '\0';
// 
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';*/
// 
//	while (*dest++ = *src++) 
//	{
// 
//	}
//	*dest = '\0';
//}
//void test2()
//{
//	char* str = "hello world";
//	char buf[1024];
//	copyString(buf, str);
//	printf("%s\n", buf);//hello world
//}


//字符串翻转
//void reverseString(char* str)
//{
//	/*int len = strlen(str);
//	int start = 0;
//	int end = len - 1;
//	while (start < end)
//	{
//		char temp = str[start];
//		str[start] = str[end];
//		str[end] = temp;
//		start++;
//		end--;
//	}*/
//	 
//	int len = strlen(str);
//	char* start = str;
//	char* end = str + len - 1;
//	while (start < end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
//void test3()
//{
//	char str[] = "abcdefg";
//	reverseString(str);
//	printf("%s\n", str);//gfedcba
//}
//
//int main() 
// {
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}