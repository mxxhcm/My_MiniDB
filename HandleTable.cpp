#include "HandleTable.h"
void createTable(string tableName, vector<fieldType> field)
{
	openTable(tableName);
	table a;
	saveTable(a);
}
void dropTable(string tableName)
{
	openTable(tableName);
}
void addField(string tableName, fieldType newField)
{
	openTable(tableName);
	table a;
	saveTable(a);
}