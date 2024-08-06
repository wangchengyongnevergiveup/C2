//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////sscanf
//
//void test1()
//{
//	char* str1 = "12345abcde";
//	char buf1[1024] = { 0 };
//	sscanf(str1, "%*d%s", buf1);
//	printf("%s\n", buf1);//abcde

	//char* str2 = "abcde\t12345"; 
	//char buf2[1024] = { 0 };
	//sscanf(str2, "%*s%s", buf2); //12345
	////sscanf(str2, "%*[a-z]%s", buf2); //12345
	//printf("%s\n", buf2);
 //
	//char* str3 = "12345abcde";
	//char buf3[1024] = { 0 };
	//sscanf(str3, "%6s", buf3);
	//printf("%s\n", buf3);//12345a
 //
	//char* str4 = "12345abcdeaaa";
	//char buf4[1024] = { 0 };
	//sscanf(str4, "%*d%[a-c]", buf4); 
	//printf("%s\n", buf4);//abc
 //
	//char* str5 = "12345abcdeaaa";
	//char buf5[1024] = { 0 };
	//sscanf(str5, "%[0-9]", buf5); 
	//printf("%s\n", buf5);//12345
 //
 //char* str6 = "abcCdef";
	//char buf6[1024] = { 0 };
	//sscanf(str6, "%[abC]", buf6); 
	//printf("%s\n", buf6);//ab
 //
	//char* str7 = "abcCdef";
	//char buf7[1024] = { 0 };
	//sscanf(str7, "%[^C]", buf7);
	//printf("%s\n", buf7);//abc
 //
	//char* str8 = "abcCdef123456";
	//char buf8[1024] = { 0 };
	//sscanf(str8, "%[^0-9]", buf8);
	//printf("%s\n", buf8);//abcCdef
//}

//void test2()
//{
//	char* str1 = "abcdef#zhangtao@123456";//过滤无效信息
//	char buf[1024] = { 0 };
//	sscanf(str1, "%*[^#]#%[^@]", buf);
//	printf("%s\n", buf);//zhangtao
//
//	char* str = "helloworld@itcast.cn";
//	char buf1[1024] = { 0 };
//	char buf2[1024] = { 0 };
//	sscanf(str, "%[a-z]%*[@]%s", buf1, buf2);
//	printf("%s\n", buf1);//helloworld
//	printf("%s\n", buf2);//itcast.cn
//}

//int main()
//  {
//	test1();
//	//test2();
//	return 0;
//}