#include<stdio.h>
#include<stdlib.h>
#include "calc.h"

// ��������
void type_qkjs();
void type_qkwjjs();

// ������
int main() {
	// ��ʼ��ͷ
	system("title Minecraft ���������");
	// ��ӭ��ʼҳ
	printf("========================================\n");
	printf("�ҵ��������������\n");
	printf("֧�ְ汾��Java ����Ϊ16*16��\n");
	printf("�˰汾���� Minecraft 1.18.2 ���п���\n");
	printf("\n");
	printf("���ߣ����xiao_lfeng\n");
	printf("�汾��1.0.0-Beta\n");
	printf("========================================\n");
	// ����
	int type;
	int m_goto_main = 1;
	while (m_goto_main == 1)
	{
		// ����
		printf("1.��������    2.�����ļ�����    3.���鷶Χ����    4.�����ļ���Χ����\n");
		printf("5.ʷ��ķ����  9.�˳�����\n");
		printf("������������ȷ��ѡ��������Ҫ���ҵ����ݣ�");
		// ��������
		scanf_s("%d", &type);
		// �����ж�
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

	// �������
	return 0;
}

void type_qkjs() {
	system("cls");
	printf("ѡ�� [��������] ���ͣ���ҳ����� Minecraft 1.18.2 �汾������ƣ�\n");
	printf("���ڼ�������Ҫ��������Ժ�......\n");
	// ����
	int Chunk_X,Chunk_Y,Chunk_Z;
	int m_goto = 1;
	while (m_goto == 1)
	{
		// ��������
		printf("\n");
		printf("������ [x] ���꣺");
		scanf_s("%d", &Chunk_X);
		printf("������ [y] ���꣺");
		scanf_s("%d", &Chunk_Y);
		printf("������ [z] ���꣺");
		scanf_s("%d", &Chunk_Z);
		// ���
		printf("��������Ϊ�� ");
		calc_qkjs(Chunk_X, Chunk_Y, Chunk_Z);
		printf("\n");
		// �ж�
		printf("�Ƿ�������� [1]��  [2]��\n");
		scanf_s("%d", &m_goto);
		if (m_goto == 2) {
			break;
		}
	} 
}

void type_qkwjjs() {
	system("cls");
	printf("ѡ�� [�����ļ�����] ���ͣ���ҳ����� Minecraft 1.18.2 �汾������ƣ�\n");
	printf("���ڼ�������Ҫ��������Ժ�......\n");
	// ����
	int Chunk_X, Chunk_Z;
	int m_goto = 1;
	while (m_goto == 1)
	{
		// ��������
		printf("\n");
		printf("������ [x] ���꣺");
		scanf_s("%d", &Chunk_X);
		printf("������ [z] ���꣺");
		scanf_s("%d", &Chunk_Z);
		// ���
		printf("��������Ϊ�� ");
		calc_qkwjjs(Chunk_X, Chunk_Z);
		printf("\n");
		// �ж�
		printf("�Ƿ�������� [1]��  [2]��\n");
		scanf_s("%d", &m_goto);
		if (m_goto == 2) {
			break;
		}
	}
}