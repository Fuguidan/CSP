#include<iostream> 
#include<cstring> 
using namespace std;
int main()
{
	int N, k, count = 0;
	cin>>N;
	int a[N];
	short log[1001];
	memset(log, 0, sizeof(log));
	for(int i = 0; i < N; i++)
	{
		cin>>k;
		a[i] = k;
		if(k > 0)
		{
			if(log[k] == 0)
				log[k] = 1;
			if(log[k] == -1)
				log[k] = 2;
		}
		if(k < 0)
		{
			if(log[-k] == 0)
				log[-k] = -1;
			if(log[-k] == 1)
				log[-k] = 2;
		}
	}
	for(int i = 1; i <= 1000; i++)
	{
		if(log[i] == 2) 
			count++;
	}
	cout<<count;
}
