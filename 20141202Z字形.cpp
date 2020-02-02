#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i, j, a[n][n];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			cin>>a[i][j];
	}
	i = 0; j = 0;
	while(i != n-1 || j != n-1)
	{
		if(i == 0 && j == 0)
			cout<<a[i][j];
		else 
			cout<<" "<<a[i][j];
		if(i == 0 && j < n-1 && j%2 == 0)
		{
			j++;continue;
		}
		else if(i == 0 && j == n-1 && j%2 == 0)
		{
			i++;continue;
		}
		else if(i == 0 &&j <= n-1 && j%2 == 1)
		{
			i++; j--; continue;
		}
		else if(j == 0 && i <= n-1 && i%2 == 0)
		{
			i--; j++; continue;
		}
		else if(j == 0 && i < n-1 && i%2 == 1)
		{
			i++; continue;
		}
		else if(j == 0 && i == n-1 && i%2 == 1)
		{
			j++; continue;
		}
		else if(j == n-1 && i < n-1 && i%2 == n%2) 
		{
			i++; j--; continue;
		}
		else if(j == n-1 && i < n-1 && i%2 != n%2)
		{
			i++; continue;
		}
		else if(i == n-1 && j < n-1 && j%2 == n%2)
		{
			j++; continue;
		}
		else if(i == n-1 && j < n-1 && j%2 != n%2)
		{
			i--; j++; continue;
		}
		else if((i+j)%2 == 0)
		{
			i--; j++; continue;
		}
		else if((i+j)%2 == 1)
		{
			i++; j--; continue;
		}
	}
	cout<<" "<<a[n-1][n-1];
}
/*
4
1 5 2 9
3 7 5 6
9 4 6 4
7 3 1 3
*/
 
