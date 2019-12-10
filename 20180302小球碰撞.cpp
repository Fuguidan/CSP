/*
样例输入

3 10 5
4 6 8

样例输出

7 9 9

样例输入

10 22 30
14 12 16 6 10 2 8 20 18 4

样例输出

6 6 8 2 4 0 4 12 10 2
*/
#include<iostream> 
using namespace std;
#define N 10000 
struct location
{
	int length;
	int dir;
}lo[N]; 
int main()
{
	int n, l, t;
	cin>>n>>l>>t;
	int i, j;
	location location[n];
	for(i = 0; i < n; i++) 
	{
		cin>>location[i].length;
		location[i].dir = 1;
	}
	for(i = 1; i <= t; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(location[j].dir == 1)
			{
				if(location[j].length == l)
				{
					location[j].dir = -1;
					location[j].length = l-1;
				}
				else if(location[j].length == 0)
				{
					location[j].dir = -1;
					location[j].length = 1;
				}
				else
				{
					location[j].length += 1;
				}	
			}
			else if(location[j].dir == -1)
			{
				if(location[j].length == l)
				{
					location[j].dir = 1;
					location[j].length = l-1;
				}
				else if(location[j].length == 0)
				{
					location[j].dir = 1;
					location[j].length = 1;
				}	
				else
				{
					location[j].length -= 1;
				}
			}
		}
		for(j = 0; j < n; j++)
		{
			for(int k = j+1; k < n; k++)
			{
				if(j != k && location[j].length == location[k].length)
				{
					location[j].dir = -location[j].dir;
					location[k].dir = -location[k].dir;
				}
			}
		}
	}
	for(i = 0; i <n; i++)
	{
		cout<<location[i].length<<" ";
	}
}
