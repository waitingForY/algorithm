#include "string.h"
#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
	String str1("wjb");
	String str2=str1;
	str1.display();
	str2.display();
	return 0;
}
