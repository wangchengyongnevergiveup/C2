//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////结构体嵌套一级指针
//struct Person
//{
//	char* name;
//	int age;
//};
//
//struct Person** allocateSpace();
//void printPerson(struct Person** pArray, int len);
//void freeSpace(struct Person** pArray, int len);
//
//void test1()
//{
//	struct Person** pArray = NULL;
//	pArray = allocateSpace();
//	//打印数组
//	printPerson(pArray, 3);
//	//释放内存
//	freeSpace(pArray, 3);
//	pArray = NULL;//同级指针做参数不能修饰pArray；
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//
//struct Person** allocateSpace()
//{
//	struct Person** temp = malloc(sizeof(struct Person*) * 3);
//	for (int i = 0; i < 3; i++)
//	{
//		//创建结构体内存
//		temp[i] = malloc(sizeof(struct Person));
//		//将结构体姓名 创建在堆区 
//		temp[i]->name = malloc(sizeof(char) * 64);
//		//给姓名赋值
//		sprintf(temp[i]->name, "name_%d", i + 1);
//		temp[i]->age = 18 + i;
//	}
//	return temp;
//}
//
//void printPerson(struct Person** pArray, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("姓名： %s 年龄： %d\n", pArray[i]->name, pArray[i]->age);
//	}
//}
//
//void freeSpace(struct Person** pArray, int len)
//{
//	if (pArray == NULL)
//	{
//		return;
//	}
//	if (len <= 0)
//	{
//		return;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		if (pArray[i]->name != NULL)
//		{
//			printf("%s被释放了\n", pArray[i]->name);
//			free(pArray[i]->name);
//			pArray[i]->name = NULL;
//		}
//		free(pArray[i]);
//		pArray[i] = NULL;
//	}
//	free(pArray);
//	pArray = NULL;
//}