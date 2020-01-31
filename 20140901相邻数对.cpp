#include<iostream> 
#include<cstring> 
using namespace std;
int main()
{
	int n, i, t, count = 0;
	cin>>n;
	short a[10001];
	memset(a, 0, sizeof(a));
	for(i = 0; i < n; i++)
	{
		cin>>t;
		a[t] = 1;
	}
	for(i = 1; i < 10001; i++)
	{
		if(a[i] == 1 && a[i-1] == 1)
			count++;
	}
	cout<<count;
	return 0;
}
