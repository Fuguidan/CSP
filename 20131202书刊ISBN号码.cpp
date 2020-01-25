#include<iostream> 
#include<cstring>
using namespace std;
int main() 
{
	string s;
	cin>>s;
	int i, count=1, sum=0;
	for(i = 0; i < 12; i++)
	{
		if(s[i]!='-')
		{
			sum += count*(s[i]-'0');
			count++;
		}
	}
	sum = sum%11;
	if((s[12]-'0')==sum)
	{
		cout<<"Right";
	}
	else if(sum==10&&s[12]=='X')
	{
		cout<<"Right";
	}
	else
	{
		if(sum < 10)
			s[12] = sum+'0';
		else
			s[12] = 'X'; 
		cout<<s;
	}
}
 
