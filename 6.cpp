#include <iostream>


int main() {
    float P, R, I;
    int T;

    std::cout << "Введіть суму P (плаваючого типу): ";
    std::cin >> P;

    std::cout << "Введіть період позики T (ціле число): ";
    std::cin >> T;

    std::cout << "Введіть процентну ставку R (плаваючого типу): ";
    std::cin >> R;

    I = (P * T * R) / 100;

    printf("Відсотки (float): %.2f\n", I);
    std::cout << "Відсотки (int): " << (int)I << std::endl;
}
