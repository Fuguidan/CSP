/*
10
9+3+4x3
5+4x5x5
7-9-9+8
5x6/5x4
3+5+7+9
1x1+9-9
1x9-5/9
8/5+6x9
6x7-3x6
6x4+4/5
Y
N
N
Y
Y
N
N
N
Y
Y 
*/
#include <iostream>
using namespace std;
int main()
{
	int num[4], i, j, k, lop = 3, result, total;
	char op[3];
	cin>>total;
	string r[total];
	for(i = 0; i < total; i++)
	{
		cin>>num[0]>>op[0]>>num[1]>>op[1]>>num[2]>>op[2]>>num[3];
		lop = 3;
		for(j = 0; j < lop; j++)
		{
			if(op[j] == 'x')
			{
				num[j] = num[j]*num[j+1];
				for(k = j+1; k < lop; k++)
				{
					num[k] = num[k+1];
					op[k-1] = op[k];
				}
				lop--;
				j--;
				continue;
			} 
			if(op[j] == '/')
			{
				num[j] = num[j]/num[j+1];
				for(k = j+1; k < lop; k++)
				{
					num[k] = num[k+1];
					op[k-1] = op[k];
				}
				lop--;
				j--;
			} 
		}
		result = num[0];
		for(j = 0; j < lop; j++)
		{
			if(op[j] == '+')
			{
				num[j+1] = num[j]+num[j+1];
			} 
			else
			{
				num[j+1] = num[j]-num[j+1];
			}
			result = num[j+1];
		}
		if(result == 24)
			r[i] = "Yes";
		else
			r[i] = "No";
	}
	for(i = 0; i< total; i++)
		cout<<r[i]<<endl;
}
