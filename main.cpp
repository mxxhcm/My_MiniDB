#include "main.h"
#include "HandleData.h"
#include "HandleTable.h"
#include "SelectData.h"
void input_Command()//��������
{
	dealWith_Command("balala");
}
void dealWith_Command(string command)//�������� ��ȡcommand����Ϣ
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
table openTable(string tableName)//�򿪴����еı�
{
	table a;
	return a;
}
void saveTable(table _theSavingTable)//��������еı�
{

}
vector<int> dealWith_Where(table theTable, string where_command)//����where���
{
	vector<int > a;
	return a;
}
int main()
{
	input_Command();
}