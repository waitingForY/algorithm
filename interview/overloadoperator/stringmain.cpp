#include "string.h"
#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
	String str1("wjb");
	String str2=str1;
	String str3("xiaomin");
	str3="wo ai xiaomin";
	str1.display();
	str2.display();
	str3.display();
	return 0;
}
