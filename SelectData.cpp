#include "SelectData.h"
void selectData(string tableName, string where_command)
{
	openTable(tableName);
	table a;
	dealWith_Where(a, where_command);
}