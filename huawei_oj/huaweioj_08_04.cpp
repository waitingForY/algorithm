#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
const int YUAN=10000;
const int MONTH=12;
const int ECHMONTH=1200;

int main(void)
{
    double A,p;
    int n;
    while(cin>>A>>n>>p)
    {
        double x;
		A*=YUAN;
		p/=ECHMONTH;
		n*=MONTH;
        x=(A*p*pow(1+p,n))/(pow(1+p,n)-1);
        int i=1;
        double sum=A;
        double li=sum*p;
		double ben=x-li;
		for(i=1;i<n;i++)
        {
            li=sum*p;
            ben=x-li;
            sum-=ben;
            if(ben>=li)
                break;
        }
        cout<<A/YUAN<<" "<<n/MONTH<<" "<<setiosflags(ios::fixed)<<setprecision(2)<<p*ECHMONTH<<" ";
        if(i>n)
		  cout<<0<<endl;
		else
		  cout<<i<<endl;
    }
}
