#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int ans=-1;
	int count;
	cin >> count;
	vector<int> vec;
	for(int i=0;i<count;i++)
	{
		int n;
		cin >> n;
		vec.push_back(n);
	}
	if(count == 1)
	{
		ans = vec[0];
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<count;i++)
	{
		for(int j=i+1;j<count;j++)
		{
			if(vec[j] % vec[i] == 0)
			{
				ans = vec[i];
				goto end;
			}
		}
	}
end:
	cout << ans << endl;

	return 0;
}
