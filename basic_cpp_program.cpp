#include <iostream>
#include <math.h>
int main()
{
	float x;
	std::cout << "Enter a real number: " << std::endl;
	std::cin >> x;
	std::cout << "The square root of " << x << " is: "
		<< sqrt(x) << std::endl;
	return 0;
}
