#include "main.h"
#include "HandleData.h"
#include "HandleTable.h"
#include "SelectData.h"
void input_Command()//输入命令
{
	dealWith_Command("balala");
}
void dealWith_Command(string command)//处理命令 提取command的信息
{
	vector<fieldType> field;
	fieldType newField;
	vector<pairData> _dataPair;
	createTable("balala", field);
	dropTable("balala");
	addField("balala", newField);
	insertData("balala", _dataPair);
	dropTable("balala");
	addField("balala", newField);
	selectData("balala", "bakaka");
}
table openTable(string tableName)//打开磁盘中的表
{
	table a;
	return a;
}
void saveTable(table _theSavingTable)//保存磁盘中的表
{

}
vector<int> dealWith_Where(table theTable, string where_command)//处理where语句
{
	vector<int > a;
	return a;
}
int main()
{
	input_Command();
}