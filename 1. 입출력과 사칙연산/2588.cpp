#include <iostream>


int main()
{
	int a, b;

	std::cin >> a >> b;

	int b_digit[3] = { 0, };
	b_digit[0] = b / 100;
	b_digit[1] = (b % 100) / 10;
	b_digit[2] = b % 10;


	int sum[3] = { 0, };
	sum[0] = a * b_digit[0] * 100;
	sum[1] = a * b_digit[1] * 10;
	sum[2] = a * b_digit[2];

	std::cout << sum[2] << std::endl;
	std::cout << sum[1] / 10 << std::endl;
	std::cout << sum[0] / 100 << std::endl;
	std::cout << sum[0] + sum[1] + sum[2] << std::endl;

	return 0;
}