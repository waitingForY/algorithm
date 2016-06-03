#ifndef DBHELPER_H
#define DBHELPER_H
#include <iostream>
using namespace std;
class DBHelper
{

	public:
		DBHelper()
		{
			cout<<"constructor..."<<endl;
		}
		~DBHelper()
		{
			cout<<"distructor..."<<endl;
		}
		void open()
		{
			cout<<"open db..."<<endl;
		}
		void close()
		{
			cout<<"close db..."<<endl;
		}
};

#endif //DBHELPER_H
