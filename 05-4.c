//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

//�ļ���д�ع�
//void test1()
//{
//	//1�������ַ���д�ļ���fgetc(), fputc()
//	FILE* f_write = fopen("./test01.txt", "w+");
//	if (f_write == NULL)
//	{
//		return;
//	}
//	char buf[] = "this is first test";
//	for (int i = 0; i < strlen(buf); i++)
//	{
//		fputc(buf[i], f_write);
//	}
//	fclose(f_write);
//	FILE* f_read = fopen("./test01.txt", "r");
//	if (f_read == NULL)
//	{
//		return;
//	}
//	char ch;
//	while ((ch = fgetc(f_read)) != EOF)  //EOF�ж��ļ��Ƿ�β
//	{
//		printf("%c", ch);
//	}
//	fclose(f_read);
//}
//
//void test2()
//{
//	//2�������ж�д�ļ���fputs(), fgets()
//	FILE* f_write = fopen("./test02.txt", "w");
//	if (f_write == NULL)
//	{
//		return;
//	}
//	char* buf[] ={"aaa\n","bbb\n","ccc\n","ddd\n",};
//	for (int i = 0; i < 4; i++)
//	{
//		fputs(buf[i], f_write);
//	}
//	fclose(f_write);
//	FILE* f_read = fopen("./test02.txt", "r");
//	if (f_read == NULL)
//	{
//		return;
//	}
//	while (!feof(f_read))//û�ж����ļ�β ѭ��
//	{
//		char buf[1024] = { 0 };
//		fgets(buf, 1024, f_read);
//		printf("%s", buf);
//	}
//	fclose(f_read);
//}
//
//struct Hero
//{
//	char name[64];
//	int age;
//};
//void test3()
//{
//	//3�����տ��д�ļ���fread(), fwirte()
//	FILE* f_write = fopen("./test03.txt", "wb");
//	if (f_write == NULL)
//	{
//		return;
//	}
//	struct Hero heros[4] ={{ "aaa" , 18 },{ "bbb", 28 },{ "ccc", 19 },{ "ddd", 99 },};
//	for (int i = 0; i < 4; i++)
//	{
//		//����1 ���ݵ�ַ  ����2  ���С   ����3  �����   ����4  �ļ�ָ��
//		fwrite(&heros[i], sizeof(struct Hero), 1, f_write);
//	}
//	fclose(f_write);
//	FILE* f_read = fopen("./test03.txt", "rb");  
//	if (f_read == NULL)
//	{
//		return;
//	}
//	struct Hero temp[4];
//	//����1 ���ݵ�ַ  ����2  ���С   ����3  �����   ����4  �ļ�ָ��
//	fread(&temp, sizeof(struct Hero), 4, f_read);
//	for (int i = 0; i < 4; i++)
//	{
//		printf("����:%s  ���䣺%d \n", temp[i].name, temp[i].age);
//	}
//	fclose(f_read);
//}
//
//void test4()
//{
//	//4�����ո�ʽ����д�ļ���fprintf(), fscanf()
//	FILE* f_write = fopen("./test04.txt", "w");
//	if (f_write == NULL)
//	{
//		return;
//	}
//	fprintf(f_write, "hello world %d�� %d�� %d��", 2023, 11, 30);
//	fclose(f_write);
//	FILE* f_read = fopen("./test04.txt", "r");
//	if (f_read == NULL)
//	{
//		return;
//	}
//	char buf[1024] = { 0 };
//	while (!feof(f_read))
//	{
//		fscanf(f_read, "%s", buf);
//		printf("%s ", buf);
//	}
//	printf("\n");
//	fclose(f_read);
//}
//
//void test5()
//{
//	//5���������λ�ö�д�ļ�
//	FILE* f_write = fopen("./test05.txt", "wb");
//	if (f_write == NULL)
//	{
//		return;
//	}
//	struct Hero heros[4] ={{ "aaa", 18 },{ "bbb", 28 },{ "ccc", 19 },{ "ddd", 99 },};
//	for (int i = 0; i < 4; i++)
//	{
//		//����1 ���ݵ�ַ  ����2  ���С   ����3  �����   ����4  �ļ�ָ��
//		fwrite(&heros[i], sizeof(struct Hero), 1, f_write);
//	}
//	fclose(f_write);
//
//	//��ȡ槼�����
//	FILE* f_read = fopen("./test05.txt", "rb");
//	if (f_read == NULL)
//	{
//		perror("�ļ���ʧ��");
//		return;
//	}
//	struct Hero temp;
//	//�ı��ļ����λ��
//	fseek(f_read, sizeof(struct Hero) * 2, SEEK_SET);
//	//fseek(f_read, -(long)sizeof(struct Hero) * 2, SEEK_END);
//	rewind(f_read); //���ļ��������
//	for (int i = 0; i < 4; i++)
//	{
//		fread(&temp, sizeof(struct Hero), 1, f_read);
//		printf("������ %s ���䣺 %d\n", temp.name, temp.age);
//	}
//	fclose(f_read);
//}
//
//int main() 
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	test5();
//	return 0;
//}