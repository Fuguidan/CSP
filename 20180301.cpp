/*
样例输入

1 1 2 2 2 1 1 2 2 0

样例输出

22
*/
#include<iostream>
using namespace std;

int main()
{
	int n = 30, i, j, action = -1, last_action, last_get, score = 0;
	for(i = 0; i < 30; i++)
	{
		last_action = action;
		cin>>action;
		if(action == 0)
			break;
		if(action == 1)
		{
			score += 1;
			last_get = 1;
		}
		if(action == 2)
		{
			if(last_action == 1 || i == 0)
			{
				score += 2;
				last_get = 2;
			}
			else
			{
				score += (last_get + 2);
				last_get = last_get+2;
			}
		}
	}
	cout<<score;
}
