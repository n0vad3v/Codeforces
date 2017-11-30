#include <iostream>

using namespace std;

long long top(long long m,long long n)
{
	if(m%n==0)
		return  m/n;
	else
		return m/n+1;
}
long long calc(long long m,long long n,int a)
{
	//cout << top(m,a) << '\t' << top(n,a);
	return top(m,a)*top(n,a);
}

int main()
{
	long long m,n;
	int a;
	while(cin >> m >> n >>a)
	{
		cout << calc(m,n,a) << endl;
	}
return 0;
}
