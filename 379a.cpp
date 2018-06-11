#include <iostream>

using namespace std;

int main()
{
	int a,b;
	while(cin >> a >> b)
	{
		int sum = a;
		int last = 0;
		while(a >= b)
		{
			sum+=a/b;
			last = a%b;
			a/=b;
			a+=last;
		}
		cout << sum << endl;
	}
}
