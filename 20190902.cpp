/*
4
4 74 -7 -12 -5
5 73 -8 -6 59 -4
5 76 -5 -10 60 -2
5 80 -6 -15 59 0
222 1 0

5
4 10 0 9 0
4 10 -2 7 0
2 10 0
4 10 -3 5 0
4 10 -1 8 0
39 4 2
*/
#include <iostream>
using namespace std;
int main()
{
	int n, m, total = 0, leave_tree = 0, array = 0;
	int i, j, luo;
	cin>>n;
	int first[n], final[n], leave[n];
	for(i = 0; i < n; i++) 
	{
		cin>>m;
		leave[i] = 0;
		for(j = 0; j < m; j++)
		{
			cin>>luo;
			if(j == 0)
			{
				final[i] = first[i] = luo;
				
			}
			else if(luo <= 0)
			{
				final[i] += luo;
			}
			else if(luo > 0 && luo != final[i])
			{
				final[i] = luo;
				leave[i] = -1;
			}
		}
		total += final[i];
		
	}
	for(i = 0; i < n; i++)
	{
		if(leave[i] == -1 && leave[(i+1)%n] == -1 && leave[(i+2)%n] == -1)
		{
			array++;
		}
		if(leave[i] == -1)
			leave_tree++;
	}
	cout<<total<<" "<<leave_tree<<" "<<array;
}
