#include <iostream>
#include <string>

int main()
{
    double speedValue = 0;
    double totalSpeed = 0;
    do {
        char speed_str[5];
        std::cout << "Speed delta : ";
        std::cin >> speedValue;

        totalSpeed += speedValue;
        if (totalSpeed > 150) {
            totalSpeed = 150;
        }
        sprintf(speed_str, "%.1f", totalSpeed);

        std::cout << "Speed: " << speed_str << "\n";
        if (speedValue >= 0) {
            speedValue = 0;
        }
    } while (totalSpeed >= 0.01);

    return 0;
}