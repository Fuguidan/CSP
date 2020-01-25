#include<iostream> 
#include<algorithm>
using namespace std;

int a[1001];
int min(int i, int j)
{
	int k, b[j-i+1];
	for(k = i; k <= j; k++)
	{
		b[k-i]= a[k];
	}
	return *min_element(b, b+j-i+1);
}
int main()
{
	int n;
	cin>>n;
	int i, j, result=0, temp;
	for(i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for(i = 0; i < n; i++)
	{
		for(j = i; j < n; j++)
		{
			temp=min(i, j)*(j-i+1);
			if(temp > result)
				result=temp;
		}
	}
	cout<<result;
}
