#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;


int main()
{
	vector<int> menu{};
	menu.resize(5);

	for (int i = 0; i < menu.size(); i++)
	{
		cin >> menu[i];
	}

	int min_burger = numeric_limits<int>::max();
	for (int i = 0; i < 3; i++)
	{
		if (min_burger > menu[i])
			min_burger = menu[i];
	}
	
	int min_soda = numeric_limits<int>::max();;
	for (int i = 3; i < 5; i++)
	{
		if (min_soda > menu[i])
			min_soda = menu[i];
	}

	int price = min_burger + min_soda - 50;

	cout << price << endl;

	return 0;
}