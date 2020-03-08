#include <iostream>
#include <math.h>

void train(int s, double a1, double a2, double v){
    double time1, time2, time;
    time1 = sqrt(s / ((a1 * a1) / (2 * a2) + a1 / 2));
    if (time1 * a1 > v) {
        time2 = (s - (a1 * v / a1 * v / a1 / 2 + a2 * v / a2 * v / a2 / 2)) / v;
        time = v / a1 + v / a2 + time2;
    }
    else {
        time2 = (a1 * time1) / a2;
        v = a1 * time1;
        time = (a1 * time1) / a2 + time1;
    }
    std::cout << "Time: " << time << std::endl;
    std::cout << "Max speed: " << v << std::endl;
}

int main()
{
    double v;
    std::cin >> v;
    train(10, 3, 2, v);
    return 0;
}
