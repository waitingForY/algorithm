#include <iostream>
#include <vector>
using namespace std;
void tentoeight(int a,int n,vector<int> &output)
{
	int in=a;
	int num=n;
	do
	{
		output.push_back(in%num);
		in/=num;

	}while(in/num);
	output.push_back(in%num);
}
int main(void)
{
	int in,n;
	cout<<"input the num:";
	cin>>in;
	cout<<"input the arynum:";
	cin>>n;
	vector<int> output;
	tentoeight(in,n,output);
	vector<int>::iterator iter;
	for(iter=output.end()-1;iter!=output.begin()-1;--iter)
	  cout<<*iter;
	cout<<endl;
	return 0;

}
