#include<iostream> 
#include<cstring>
using namespace std;
int main()
{
	string ch, s;
	cin>>ch;
	int str[26], out[26];
	string outp[26];
	memset(str, 0, sizeof(str));
	memset(out, 0, sizeof(out));
	int i, j;
	for(i = 0; i < ch.size(); i++)
	{
		str[ch[i]-'a'] = 1;
		if(ch[i+1] == ':')
			str[ch[i]-'a'] = 2;
	}
	int num;
	cin>>num;
	cin.get();
	for(i = 0; i < num; i++) 
	{
		getline(cin, s);
		
		for(j = 0; j < s.size(); j++)
		{
			if(s[j] == '-' && str[s[j+1]-'a'] == 1)
			{
				out[s[j+1]-'a'] = 1;
			}
			else if(s[j] == '-' && str[s[j+1]-'a'] == 2)
			{
				out[s[j+1]-'a'] = 2;
				outp[s[j+1]-'a'] = "";
				for(int k = j+3; s[k] != ' '&& k < s.size(); k++)
				{
					outp[s[j+1]-'a'] += s[k];
				}
			}	
			else if(s[j] == '-' && str[s[j+1]-'a'] == 0)
			{
				break;
			}
			else if(str[s[j]-'a'] == 1 && s[j+2] != '-' && s[j-1] == '-')
			{
				break;
			}
		}
		cout<<"Case "<<i+1<<":";
		for(j = 0; j < 26; j++)
		{
			if(out[j] == 1)
			{
				cout<<" -"<<char(j+'a');
			}
			if(out[j] == 2)
			{ 
				cout<<" -"<<char(j+'a');
				cout<<" "<<outp[j];
			}
		}
		cout<<endl;
		memset(out, 0, sizeof(out));
	}
}
