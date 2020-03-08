#include <iostream>

void swap(int num1, int num2) {
    num2 = num1 + num2;
    num1 = num2 - num1;
    num2 = num2 - num1;
}

int main()
{
    int num1, num2;
    std::cin >> num1;
    std::cin >> num2;
    swap(num1, num2);
    return 0;
}

