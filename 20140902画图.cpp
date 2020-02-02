#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n, i;
	cin>>n;
	short map[101][101];
	int x1, x2, y1, y2; 
	memset(map, 0, sizeof(map));
	for(i = 0; i < n; i++)
	{
		cin>>x1>>y1>>x2>>y2;
		for(int j = x1; j < x2; j++)
		{
			for(int k = y1; k < y2; k++)
			{
				map[j][k] = 1;
			}
		}
	}
	int count = 0;
	for(int j = 0; j < 101; j++)
	{
		for(int k = 0; k < 101; k++)
		{
			if(map[j][k] == 1)
				count++;
		}
	}
	cout<<count;
}
