#include<iostream>
using namespace std;
int main()
{
	int y, m = 0, d, runnian, days, count = 0;
	cin>>y>>days;
	if((y%400 == 0) || (y%4 == 0 && y%100 != 0))
		runnian = 1;
	else
		runnian = 0;
	int months[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(runnian == 1)
		months[1] = 29;
	while(count < days)
	{
		d = days - count;
		count += months[m];
		m++;
	}
	cout<<m<<endl<<d;
}
