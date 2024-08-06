//#include "config.h"
//#include "code.h"
//#include <time.h>
//
////文件读写案例
////文件中按照键值对方式 存放了有效的信息需要解析出来
////config.h和 config.c做配置文件读操作
////code.h和code.c 对文件进行加密、解密操作
//
//int main() 
//{
//	//添加随机数种子
//	srand((unsigned int)time(NULL));
//
//	char* filePath = "./config.txt";
//	int len = getFileLines(filePath);
//	printf("文件的有效行数为：%d\n", len);
//
//	struct ConfigInfo* configInfo = NULL;
//	parseFile(filePath, len, &configInfo);
//
//	//测试根据key获取value
//	printf("heroId = %s\n", getInfoByKey("heroId", configInfo, len));
//	printf("heroName = %s\n", getInfoByKey("heroName", configInfo, len));
//	printf("heroAtk = %s\n", getInfoByKey("heroAtk", configInfo, len));
//	printf("heroDef = %s\n", getInfoByKey("heroDef", configInfo, len));
//	printf("heroInfo = %s\n", getInfoByKey("heroInfo", configInfo, len));
//
//	//释放空间
//	freeConfigInfo(configInfo);
//	configInfo = NULL;
//
//	//文件加密
//	codeFile("./config.txt", "./加密文件.txt");
//
//	//文件解密
//	decodeFile("./加密文件.txt", "./解密文件.txt");
//	
//	system("pause");
//	return 0;
//}