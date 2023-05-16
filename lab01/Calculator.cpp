#include <iostream>
#include <cmath>

int main() {
    // Задаємо значення параметрів
    double a, b, x;

    // Запитуємо ввід значень від користувача
    std::cout << "Enter value for a: ";
    std::cin >> a;

    std::cout << "Enter value for b: ";
    std::cin >> b;

    std::cout << "Enter value for x: ";
    std::cin >> x;

    // Обчислюємо вираз
    double result = pow(x, a) * cos(2 * x) - 1 / exp(b * pow(x, 2));

    // Виводимо результат
    std::cout << "Result: " << result << std::endl;

    return 0;
}