#include<iostream> 
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
struct P
{
	int x, y;
	P(const int&x, const int &y):x(x), y(y){}
};
static bool cmp(const P&p1, const P&p2)
{
	return p1.y == p2.y ?p1.x < p2.x :p1.y > p2.y;
}
int main()
{
	int n, t;
	cin>>n;
	int a[1001];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; i++)
	{
		cin>>t;
		a[t]++;
	}
	vector<P> p;
	for(int i = 0; i < 1001; i++)
	{
		if(a[i] > 0)
		{
			p.push_back(P(i, a[i]));
		}
	}
	sort(p.begin(), p.end(), cmp);
	for(int i = 0; i < p.size(); i++)
	{
		cout<<p[i].x<<" "<<p[i].y<<endl;
	}
	return 0;
}
