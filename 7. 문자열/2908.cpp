#include <iostream>
#include <string>

using namespace std;

int change_digit(string& num_str)
{
	char temp = num_str[0];
	num_str[0] = num_str[2];
	num_str[2] = temp;

	int num = stoi(num_str);

	return num;
}


int main()
{
	string input_num1, input_num2;
	cin >> input_num1 >> input_num2;

	int num1 = change_digit(input_num1);
	int num2 = change_digit(input_num2);

	if (num1 > num2)
		cout << num1;
	else if(num2 > num1)
		cout << num2;

	return 0;
}