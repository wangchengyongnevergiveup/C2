//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//动态链表  建立在堆上 不带头结点
//struct LinkNode
//{
//	int num;
//	struct LinkNode* next;
//};
//
//void test1()
//{
//	//创建节点
//	struct LinkNode* node1 = malloc(sizeof(struct LinkNode));
//	struct LinkNode* node2 = malloc(sizeof(struct LinkNode));
//	struct LinkNode* node3 = malloc(sizeof(struct LinkNode));
//	struct LinkNode* node4 = malloc(sizeof(struct LinkNode));
//	struct LinkNode* node5 = malloc(sizeof(struct LinkNode));
//
//	//给数据域赋值
//	node1->num = 100;
//	node2->num = 200;
//	node3->num = 300;
//	node4->num = 400;
//	node5->num = 500;
//
//	//建立关系
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = node5;
//	node5->next = NULL;
//
//	//遍历链表
//	struct LinkNode* pCurrent = node1;
//	while (pCurrent != NULL)
//	{
//		printf("%d ", pCurrent->num);
//		pCurrent = pCurrent->next;
//	}
//
//	free(node1);
//	free(node2);
//	free(node3);
//	free(node4);
//	free(node5);
//	node1 = NULL;
//	node2 = NULL;
//	node3 = NULL;
//	node4 = NULL;
//	node5 = NULL;
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}