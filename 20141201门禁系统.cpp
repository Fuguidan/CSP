#include<iostream> 
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x, a[1001];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; i++)
	{
		cin>>x;
		a[x]++;
		if(i != 0)
			cout<<" ";
		cout<<a[x];
	}
	return 0;
}
