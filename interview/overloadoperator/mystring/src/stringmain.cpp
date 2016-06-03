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
	cout<<"*******************"<<endl;
	cout<<"str1[1]="<<str1[1]<<endl;
	str1[1]='J';
	str1.display();
	cout<<"*******************"<<endl;
	const String str4("xiaomin");
	str4.display();
	cout<<"str4[1]="<<str4[1]<<endl;


	cout<<"******************"<<endl;
	String str5=str1+" ai "+str4;
	str5.display();

	cout<<"******************"<<endl;
	String str6="wo ai ";
	str6+="xiaomin";
	str6.display();
	return 0;
}
