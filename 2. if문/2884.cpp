#include <iostream>

using namespace std;


int main()
{
	int hour, minute;
	cin >> hour >> minute;

	if ((minute - 45) < 0)
	{
		hour -= 1;
		minute += 15;
		if(hour>=0)
			cout << hour << " " << minute << endl;
		else
		{
			hour = 23;
			cout << hour << " " << minute << endl;
		}
	}
	else
	{
		minute -= 45;
		cout << hour << " " << minute << endl;
	}

	return 0;
}