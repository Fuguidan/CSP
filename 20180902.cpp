#include <iostream>
using namespace std;
int main()
{
	int n, i, j, start, end, count = 0;
	cin>>n;
	int a[24], b[24];
	for(i = 0; i < 24; i++)
	{
		a[i] = b[i] = 0;
	}
	for(i = 0; i < n; i++)
	{
		cin>>start>>end;
		for(j = start; j < end; j++)
			a[j] = 1;
	}
	for(i = 0; i < n; i++)
	{
		cin>>start>>end;
		for(j = start; j < end; j++)
			b[j] = 1;
	}
	for(i = 0; i < 24; i++)
	{
		if(a[i] == 1 && b[i] == 1)
			count++;
	}
	cout<<count;
}
