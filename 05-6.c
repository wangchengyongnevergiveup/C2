//#include "config.h"
//#include "code.h"
//#include <time.h>
//
////�ļ���д����
////�ļ��а��ռ�ֵ�Է�ʽ �������Ч����Ϣ��Ҫ��������
////config.h�� config.c�������ļ�������
////code.h��code.c ���ļ����м��ܡ����ܲ���
//
//int main() 
//{
//	//������������
//	srand((unsigned int)time(NULL));
//
//	char* filePath = "./config.txt";
//	int len = getFileLines(filePath);
//	printf("�ļ�����Ч����Ϊ��%d\n", len);
//
//	struct ConfigInfo* configInfo = NULL;
//	parseFile(filePath, len, &configInfo);
//
//	//���Ը���key��ȡvalue
//	printf("heroId = %s\n", getInfoByKey("heroId", configInfo, len));
//	printf("heroName = %s\n", getInfoByKey("heroName", configInfo, len));
//	printf("heroAtk = %s\n", getInfoByKey("heroAtk", configInfo, len));
//	printf("heroDef = %s\n", getInfoByKey("heroDef", configInfo, len));
//	printf("heroInfo = %s\n", getInfoByKey("heroInfo", configInfo, len));
//
//	//�ͷſռ�
//	freeConfigInfo(configInfo);
//	configInfo = NULL;
//
//	//�ļ�����
//	codeFile("./config.txt", "./�����ļ�.txt");
//
//	//�ļ�����
//	decodeFile("./�����ļ�.txt", "./�����ļ�.txt");
//	
//	system("pause");
//	return 0;
//}