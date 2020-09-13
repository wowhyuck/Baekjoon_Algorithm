#include <iostream>

using namespace std;


int main()
{
	int a, b, size;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}