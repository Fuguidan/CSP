#include<iostream>
using namespace std;
int main()
{
	int N, M;
	cin>>N>>M;
	int window[N][5];
	int i, j, k, kk;
	for(i = N-1; i > -1; i--)
	{
		cin>>window[i][1]>>window[i][2]>>window[i][3]>>window[i][4];
		window[i][0] = N-i;
	}
	int click[M][2];
	for(i = 0; i < M; i++)
	{
		cin>>click[i][0]>>click[i][1];
	}
	for(i = 0; i < M; i++)
	{
		int flag = 0;
		for(j = 0; j < N; j++)
		{
			if(click[i][0] >= window[j][1] &&
				click[i][0] <= window[j][3] &&
				click[i][1] >= window[j][2] &&
				click[i][1] <= window[j][4])
			{
				flag = 1;
				cout<<window[j][0]<<endl;
				int x1, x2, y1, y2, num;
				num = window[j][0];
				x1 = window[j][1];
				y1 = window[j][2];
				x2 = window[j][3];
				y2 = window[j][4];
				for(k = j, kk = j-1; kk >= 0; k--, kk--)
				{
					window[k][0] = window[kk][0];
					window[k][1] = window[kk][1];
					window[k][2] = window[kk][2];
					window[k][3] = window[kk][3];
					window[k][4] = window[kk][4];
				}
				window[0][0] = num;
				window[0][1] = x1;
				window[0][2] = y1;
				window[0][3] = x2;
				window[0][4] = y2;
				break;
			}
		}
		if(flag == 0)
			cout<<"IGNORED"<<endl;
	}
}
/*
3 4
0 0 4 4
1 1 5 5
2 2 6 6
1 1
0 0
4 4
0 5
*/
