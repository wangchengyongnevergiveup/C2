//#include "code.h"
//
////�ļ�����
//void codeFile(char* sourceFilePath, char* destFilePath)
//{
//	FILE* fp1 = fopen(sourceFilePath, "r");
//	FILE* fp2 = fopen(destFilePath, "w");
//	if (!fp1 || !fp2)
//	{
//		printf("�ļ���ʧ��\n");
//	}
//
//	char ch;
//	while ((ch = fgetc(fp1)) != EOF)
//	{
//		//# --->35  ��תΪshort    ������4λ
//		short temp = (short)ch;
//		//0000 0000 0010 0011
//		temp = temp << 4;
//		//0000 0010 0011 0000 |
//		//1000 0000 0000 0000
//		//1000 0010 0011 0000
//		temp = temp | 0x8000;
//		//�ټ������
//		//1000 0010 0011 0000 + 0000~1111  0~15
//		temp += rand() % 16;
//		//printf("%d\n", temp);
//
//		//������д
//		fprintf(fp2, "%hd", temp);
//	}
//	fclose(fp1);
//	fclose(fp2);
//}
//
////�ļ�����
//void decodeFile(char* sourceFilePath, char* destFilePath)
//{
//	FILE* fp1 = fopen(sourceFilePath, "r");
//	FILE* fp2 = fopen(destFilePath, "w");
//	if (!fp1 || !fp2)
//	{
//		printf("�ļ���ʧ��\n");
//	}
//
//	//1000 0010 0011 0000 + 0000~1111  0~15
//	//1000 0010 0011 1010
//	//000 0010 0011 10100(<<1)
//	//00000 000 0010 0011(>>5)
//	//0000 0000 0010 0011
//
//	short temp;
//	while (!feof(fp1))
//	{
//		fscanf(fp1, "%hd", &temp);
//		temp = temp << 1;
//		temp = temp >> 5;
//		char ch = (char)temp;
//		fputc(ch, fp2);
//	}
//	fclose(fp1);
//	fclose(fp2);
//}