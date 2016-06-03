#include "../include/mydb.h"

int main(void)
{
	Mydb db;
	db->open();
	db->close();
	return 0;
}
