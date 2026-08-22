#ifdef _WIN32
#include <windows.h>
#endif

#include <iostream>

int main() {
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#endif

    constexpr int arraySize = 10;
    int numbers[arraySize] {8, -4, 15, 2, 9, 1, 12, 6, 3, 10};

    int minimum = numbers[0];
    int maximum = numbers[0];

    std::cout << "Массив: ";

    for (int index = 0; index < arraySize; ++index) {
        std::cout << numbers[index];

        if (index < arraySize - 1) {
            std::cout << ' ';
        }

        if (numbers[index] < minimum) {
            minimum = numbers[index];
        }

        if (numbers[index] > maximum) {
            maximum = numbers[index];
        }
    }

    std::cout << "\nМинимальный элемент: " << minimum
              << "\nМаксимальный элемент: " << maximum << '\n';

    return 0;
}

