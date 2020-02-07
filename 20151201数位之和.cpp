#include<iostream> 
using namespace std;
int main()
{
	int n, res = 0, temp;
	cin>>n;
	while(n != 0)
	{
		temp = n%10;
		res += temp;
		n = n/10;
	}
	cout<<res; 
}
