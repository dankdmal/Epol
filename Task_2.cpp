#include <iostream>

template <typename T>
void swap(T num1, T num2) {
    {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }
}

int main()
{
    swap('a', 'b');
    return 0;
}