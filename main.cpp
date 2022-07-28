#include<stdio.h>
#include<stdlib.h>
#include "calc.h"

// 声明函数
void type_qkjs();
void type_qkwjjs();

// 主函数
int main() {
	// 起始标头
	system("title Minecraft 区块计算器");
	// 欢迎起始页
	printf("========================================\n");
	printf("我的世界区块计算器\n");
	printf("支持版本：Java 区块为16*16的\n");
	printf("此版本根据 Minecraft 1.18.2 进行开发\n");
	printf("\n");
	printf("作者：筱锋xiao_lfeng\n");
	printf("版本：1.0.0-Beta\n");
	printf("========================================\n");
	// 定义
	int type;
	int m_goto_main = 1;
	while (m_goto_main == 1)
	{
		// 内容
		printf("1.区块坐标    2.区块文件计算    3.区块范围计算    4.区块文件范围计算\n");
		printf("5.史莱姆区块  9.退出程序\n");
		printf("请输入数字以确定选择您所需要查找的内容：");
		// 内容输入
		scanf_s("%d", &type);
		// 条件判断
		if (type == 1) {
			type_qkjs();
		} if (type == 2) {
			type_qkwjjs();
		} if (type == 9) {
			break;
		} else {
			system("cls");
			m_goto_main = 1;
		}
	}

	// 结束语句
	return 0;
}

void type_qkjs() {
	system("cls");
	printf("选择 [区块坐标] 类型（本页面基于 Minecraft 1.18.2 版本进行设计）\n");
	printf("正在加载所需要组件，请稍后......\n");
	// 定义
	int Chunk_X,Chunk_Y,Chunk_Z;
	int m_goto = 1;
	while (m_goto == 1)
	{
		// 内容输入
		printf("\n");
		printf("请输入 [x] 坐标：");
		scanf_s("%d", &Chunk_X);
		printf("请输入 [y] 坐标：");
		scanf_s("%d", &Chunk_Y);
		printf("请输入 [z] 坐标：");
		scanf_s("%d", &Chunk_Z);
		// 结果
		printf("区块坐标为： ");
		calc_qkjs(Chunk_X, Chunk_Y, Chunk_Z);
		printf("\n");
		// 判断
		printf("是否继续计算 [1]是  [2]否\n");
		scanf_s("%d", &m_goto);
		if (m_goto == 2) {
			break;
		}
	} 
}

void type_qkwjjs() {
	system("cls");
	printf("选择 [区块文件计算] 类型（本页面基于 Minecraft 1.18.2 版本进行设计）\n");
	printf("正在加载所需要组件，请稍后......\n");
	// 定义
	int Chunk_X, Chunk_Z;
	int m_goto = 1;
	while (m_goto == 1)
	{
		// 内容输入
		printf("\n");
		printf("请输入 [x] 坐标：");
		scanf_s("%d", &Chunk_X);
		printf("请输入 [z] 坐标：");
		scanf_s("%d", &Chunk_Z);
		// 结果
		printf("区块坐标为： ");
		calc_qkwjjs(Chunk_X, Chunk_Z);
		printf("\n");
		// 判断
		printf("是否继续计算 [1]是  [2]否\n");
		scanf_s("%d", &m_goto);
		if (m_goto == 2) {
			break;
		}
	}
}