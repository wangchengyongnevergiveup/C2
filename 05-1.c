//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////结构体嵌套二级指针
//struct Teacher
//{
//	char* name;
//	char** students;
//};
//
//void allocateSpace(struct Teacher*** teachers);
//void printTeachers(struct Teacher** pArray);
//void freeSpace(struct Teacher** pArray);
//
//void test1()
//{
//	struct Teacher** pArray = NULL;
//	//开辟内存
//	allocateSpace(&pArray);
//	//打印数组
//	printTeachers(pArray);
//	//释放数组
//	freeSpace(pArray);
//	pArray = NULL;//同级指针做函数参数
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}
//
//void allocateSpace(struct Teacher*** teachers)
//{
//	if (teachers == NULL)
//	{
//		return;
//	}
//	//开辟内存
//	struct Teacher** ts = malloc(sizeof(struct Teacher*) * 3);
//	//给每个老师分配内存
//	for (int i = 0; i < 3; i++)
//	{
//		ts[i] = malloc(sizeof(struct Teacher));
//		//给老师的姓名分配内存
//		ts[i]->name = malloc(sizeof(char) * 64);
//		//给老师起名称
//		sprintf(ts[i]->name, "Teacher_%d", i + 1);
//		//给学生的数组分配内存
//		ts[i]->students = malloc(sizeof(char*) * 4);
//		//给学生的姓名开辟内存 以及赋值
//		for (int j = 0; j < 4; j++)
//		{
//			ts[i]->students[j] = malloc(sizeof(char) * 64);
//			sprintf(ts[i]->students[j], "%s_Student_%d", ts[i]->name, j + 1);
//		}
//	}
//	*teachers = ts;
//}
//
//void printTeachers(struct Teacher** pArray)
//{
//	if (pArray == NULL)
//	{
//		return;
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s\n", pArray[i]->name);
//		for (int j = 0; j < 4; j++)
//		{
//			printf("      %s\n", pArray[i]->students[j]);
//		}
//	}
//
//}
//
//void freeSpace(struct Teacher** pArray)
//{
//	if (pArray == NULL)
//	{
//		return;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		//先释放老师姓名
//		if (pArray[i]->name != NULL)
//		{
//			free(pArray[i]->name);
//			pArray[i]->name = NULL;
//		}
//		//释放学生姓名
//		for (int j = 0; j < 4; j++)
//		{
//			if (pArray[i]->students[j] != NULL)
//			{
//				free(pArray[i]->students[j]);
//				pArray[i]->students[j] = NULL;
//			}
//		}
//		//释放学生的数组
//		if (pArray[i]->students != NULL)
//		{
//			free(pArray[i]->students);
//			pArray[i]->students = NULL;
//		}
//		//释放老师
//		if (pArray[i] != NULL)
//		{
//			free(pArray[i]);
//			pArray[i] = NULL;
//		}
//
//	}
//	//释放老师数组
//	if (pArray != NULL)
//	{
//		free(pArray);
//		pArray = NULL;
//	}
//}