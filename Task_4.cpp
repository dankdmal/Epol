#include <iostream>

int loop(int n, int a, int b) {
	if ((a % b == 0) || (b % a == 0)) {
		if (a >= b)
			return  n / b;
		if (b >= a)
			return n / a;
	}
	else return n / a + n / b - n / (a * b);
}

int main()
{
	int n, a, b;
	std::cin >> n;
	std::cin >> a;
	std::cin >> b;
	std::cout << loop(n, a, b);
	return 0;
}
