/*
3
-1 2 4
4 2 -1

4
-2 -1 3 4
4 1 -2
*/
#include <iostream>
using namespace std;
int main()
{
	int num, i, flag, max, min;
	double mid;
	cin>>num;
	int a[num];
	for(i = 0; i < num; i++)
	{
		cin>>a[i];
	}
	if(num == 1)
	{
		max = min = a[0];
		mid = a[0];
	}
	else if(a[0] <= a[num-1])
	{
		flag = 1; //increase
		max = a[num-1];
		min = a[0];
		if(num%2 == 0)
			mid = (a[num/2] + a[num/2-1])/2.0;
		else
			mid = a[num/2];
	}
	else
	{
		flag = -1; //decrease
		max = a[num-1];
		min = a[0];
		if(num%2 == 0)
			mid = (a[num/2] + a[num/2-1])/2;
		else
			mid = a[num/2];
	}
	cout<<max<<" "<<mid<<" "<<min;
	 
}
