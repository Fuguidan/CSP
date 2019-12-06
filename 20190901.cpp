#include <iostream> 
using namespace std;

int main()
{
	int N, M;
	cin>>N>>M;
	int a[N][M+1];
	int leave[N];
	int leave_all = 0, leave_max = 0, leave_maxnum = 0;
	for(int i = 0; i < N; i++)
	{
		leave[i] = 0;
		for(int j = 0; j <= M; j++)
		{
			cin>>a[i][j];
			if(j != 0)
			{
				leave[i] += a[i][j];
			}
		}
		leave[i] = -leave[i];
		leave_all += a[i][0]-leave[i];
		if(leave_maxnum < leave[i])
		{
			leave_maxnum = leave[i];
			leave_max = i + 1;
		}
		
	}
	cout<<leave_all<<" "<<leave_max<<" "<<leave_maxnum;
	 
}
