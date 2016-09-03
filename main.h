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
	int rowNum;//行号
	string Data[10];
}rowData;
typedef struct{
	int fieldNum;//字段序号
	string fieldName;//字段名称
	dataType theType;//数据类型
	int judgeBound;//约束条件
}fieldType;
typedef struct{
	string fieldName;
	string data;
}pairData;//字段与数据的一组对应
typedef struct{
	vector<fieldType> field;
	vector<rowData> data;
}table;//表的结构
void input_Command();//输入命令
void dealWith_Command(string command);//处理命令 提取command的信息
table openTable(string tableName);//打开磁盘中的表
void saveTable(table _theSavingTable);//保存磁盘中的表
vector<int> dealWith_Where(table theTable, string where_command);//处理where语句

#endif