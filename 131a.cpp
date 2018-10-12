#include <iostream>

using namespace std;

int main()
{
	string s;
	while(cin >> s)
	{
		bool change,upper;
		upper = 1;
		if(s[0] >= 'a')
		{
			change = 1;
		}
		for(int i=0;i<s.size();i++)
		{
			if(s[i] >= 'a')
			{
				upper = 0;
			}
				
		}
		for(int i=1;i<s.size();i++)
		{
			if(s[i] >= 'a')
			{
				change = 0;
				break;
			}
		}

		if(change)
		{
			s[0] = toupper(s[0]);
			for(int i=1;i<s.size();i++)
			{
				s[i] = tolower(s[i]);
			}
			for(int i=0;i<s.size();i++)
				cout << s[i];
		}
		else if(upper){
			for(int i=0;i<s.size();i++)
			{
				s[i] = tolower(s[i]);
				cout << s[i];
			}
		}
		else{
			cout << s;
		}
		cout << endl;
	}		
	return 0;
}
