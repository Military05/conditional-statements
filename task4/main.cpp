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
    int numbers[arraySize] {10, 3, 4, 1, 8, 9, 7, 2, 6, 5};

    std::cout << "Массив до сортировки: ";

    for (int index = 0; index < arraySize; ++index) {
        std::cout << numbers[index];

        if (index < arraySize - 1) {
            std::cout << ' ';
        }
    }

    bool wasSwapped;
    int sortedStart = 0;

    do {
        wasSwapped = false;

        for (int index = arraySize - 1; index > sortedStart; --index) {
            if (numbers[index - 1] > numbers[index]) {
                int temporary = numbers[index - 1];
                numbers[index - 1] = numbers[index];
                numbers[index] = temporary;
                wasSwapped = true;
            }
        }

        ++sortedStart;
    } while (wasSwapped);

    std::cout << "\nМассив после сортировки: ";

    for (int index = 0; index < arraySize; ++index) {
        std::cout << numbers[index];

        if (index < arraySize - 1) {
            std::cout << ' ';
        }
    }

    std::cout << '\n';

    return 0;
}
