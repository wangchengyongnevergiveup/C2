//#include "code.h"
//
////文件加密
//void codeFile(char* sourceFilePath, char* destFilePath)
//{
//	FILE* fp1 = fopen(sourceFilePath, "r");
//	FILE* fp2 = fopen(destFilePath, "w");
//	if (!fp1 || !fp2)
//	{
//		printf("文件打开失败\n");
//	}
//
//	char ch;
//	while ((ch = fgetc(fp1)) != EOF)
//	{
//		//# --->35  先转为short    再左移4位
//		short temp = (short)ch;
//		//0000 0000 0010 0011
//		temp = temp << 4;
//		//0000 0010 0011 0000 |
//		//1000 0000 0000 0000
//		//1000 0010 0011 0000
//		temp = temp | 0x8000;
//		//再加随机数
//		//1000 0010 0011 0000 + 0000~1111  0~15
//		temp += rand() % 16;
//		//printf("%d\n", temp);
//
//		//往里面写
//		fprintf(fp2, "%hd", temp);
//	}
//	fclose(fp1);
//	fclose(fp2);
//}
//
////文件解密
//void decodeFile(char* sourceFilePath, char* destFilePath)
//{
//	FILE* fp1 = fopen(sourceFilePath, "r");
//	FILE* fp2 = fopen(destFilePath, "w");
//	if (!fp1 || !fp2)
//	{
//		printf("文件打开失败\n");
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