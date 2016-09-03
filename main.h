#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <cstring>
#include <vector>
#include <list>
using namespace std;
typedef enum{
	NONE, STRING, INT, DOUBLE, DATE
}dataType;
typedef struct {
	int year;
	int month;
	int day;
}date;
typedef struct{
	int rowNum;//�к�
	string Data[10];
}rowData;
typedef struct{
	int fieldNum;//�ֶ����
	string fieldName;//�ֶ�����
	dataType theType;//��������
	int judgeBound;//Լ������
}fieldType;
typedef struct{
	string fieldName;
	string data;
}pairData;//�ֶ������ݵ�һ���Ӧ
typedef struct{
	vector<fieldType> field;
	vector<rowData> data;
}table;//��Ľṹ
void input_Command();//��������
void dealWith_Command(string command);//�������� ��ȡcommand����Ϣ
table openTable(string tableName);//�򿪴����еı�
void saveTable(table _theSavingTable);//��������еı�
vector<int> dealWith_Where(table theTable, string where_command);//����where���

#endif