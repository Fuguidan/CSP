#include<iostream>
using namespace std;
#define max 10000
int main()
{
	int n;
	cin>>n;
	int a[max], i, min, s, maxcount=0, maxnum=0;
	for(i = 0; i < max; i++)
	{
		a[i]=0;
	}
	for(i = 0; i < n; i++)
	{
		cin>>s;
		a[s]++;
		if(maxcount < a[s])		{
			maxcount=a[s];
			maxnum=s;
		}
		if(maxcount==a[s]&&s < maxnum)
		{
			maxnum=s;
		}
	}
	cout<<maxnum;
}
