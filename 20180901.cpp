/*
样例输入
8
4 1 3 1 6 5 17 9
样例输出
2 2 1 3 4 9 10 13
*/
#include <iostream> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	int first[n], second[n], i;
	for(i = 0; i < n; i++)
	{
		cin>>first[i];
	}
	for(i = 0; i < n; i++)
	{
		if(i == 0)
			second[i] = (first[i] + first[i+1])/2;
		else if(i == n-1)
			second[i] = (first[i] + first[i-1])/2;
		else
			second[i] = (first[i-1] + first[i] + first[i+1])/3;
		cout<<second[i]<<" ";
	}
	
}
