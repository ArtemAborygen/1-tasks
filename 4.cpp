#include <iostream>


int main() {
    double A, B, C;

    std::cout << "Введіть розмір A: ";
    std::cin >> A;

    std::cout << "Введіть розмір B: ";
    std::cin >> B;

    std::cout << "Введіть розмір C: ";
    std::cin >> C;

    double surface = 2 * (A * B + B * C + A * C);
    double results = A * B * C;

    std::cout << "Площа поверхні паралелепіпеда: " << surface << std::endl;
    std::cout << "Об'єм паралелепіпеда: " << results << std::endl;
}
