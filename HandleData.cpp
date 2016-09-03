#include "HandleData.h"
void insertData(string tableName, vector<pairData> _dataPair)
{
	openTable(tableName);
	table a;
	saveTable(a);
}
void updateData(string tableName, vector<pairData> updata_data,string where_command)
{
	openTable(tableName);
	table a;
	dealWith_Where(a, where_command);
	saveTable(a);
}
void deleteData(string tableName, string where_command)
{
	openTable(tableName);
	table a;
	dealWith_Where(a, where_command);
	saveTable(a);
}