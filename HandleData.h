#ifndef HANDLEDATA_H
#define HANDLEDATA_H
#include "main.h"
void insertData(string tableName, vector<pairData> _dataPair);
void dropTable(string tableName);
void addField(string tableName, fieldType newField);
#endif