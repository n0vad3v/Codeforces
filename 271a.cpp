#include <iostream>

using namespace std;

int main()
{
	int data;
	while(cin >> data)
	{
		data += 1;
		for(data+1;data<=9015;data++)
		{
			int data_th = data/1000;
			int data_hun = (data-1000*data_th)/100;
			int data_ten = (data-1000*data_th-100*data_hun)/10;
			int data_last = (data-1000*data_th-100*data_hun-10*data_ten);
			if(data_th != data_hun && 
			   data_th != data_ten &&
			   data_th != data_last &&

			   data_hun != data_ten &&
			   data_hun != data_last &&

			   data_ten != data_last
			   )
				break;
		}
		cout << data << endl;
	}
}
