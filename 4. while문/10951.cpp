#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


int main()
{
	char a;
	int b;

	while ((a=getchar())!= EOF)
	{
		cin >> b;

		a -= 48;

		cout << a + b << endl;

		cin.ignore(10, '\n');
	}

	return 0;
}