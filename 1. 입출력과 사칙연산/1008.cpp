#include <iostream>
#include <iomanip>

int main()
{
	double a, b;
	std::cin >> a >> b;
	if (b != 0)
	{
		std::cout << std::setprecision(12) << a / b << std::endl;
	}
	else
	{
		std::cout << "Cannot divide " << a << " by " << b << std::endl;
	}

	return 0;
}