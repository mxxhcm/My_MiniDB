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
	vector<string> Data;
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
	list<rowData> data;
}table;
void input_Command();
void dealWith_Command(string command);
table openTable(string tableName);
void saveTable(table _theSavingTable);
vector<int> dealWith_Where(table theTable, string where_command);

#endif