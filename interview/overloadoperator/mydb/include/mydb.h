#ifndef MYDB_H
#define MYDB_H

#include "dbhelper.h"

class Mydb
{
	public:
		Mydb()
		{
			db_=new DBHelper;

		}
		~Mydb()
		{
			delete db_;
		}
		//重载->运算符
		DBHelper* operator->()
		{
			return db_;
		}
	private:
		DBHelper* db_;
};


#endif //MYDB_H
