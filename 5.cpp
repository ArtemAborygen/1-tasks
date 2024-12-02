#include <iostream>


int main() {
    double R;

    std::cout << "Введіть радіус R: ";
    std::cin >> R;

    const double pi = 3.14;
    double area = pi * R * R;
    double circumference = 2 * pi * R;

    printf("Площа круга: %.2f\n", area);
    printf("Довжина кола: %.2f\n", circumference);
}
