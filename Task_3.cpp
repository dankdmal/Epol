#include <iostream>

int loop(int n, int a, int b) {
	int m = 0;
	for (int i = a; i <= n; i+=a ) {
		if (i % a == 0)
		{
			m++;
		}
	}
	for (int i = b; i <= n; i+=b) {
		if ((i % b == 0) && (i % a != 0)) {
			m++;
		}

	}
	std::cout << m;
	return m;
}

int main()
{
	int n, a, b;
	std::cin >> n;
	std::cin >> a;
	std::cin >> b;
	loop(n, a, b);
	return 0;
}
