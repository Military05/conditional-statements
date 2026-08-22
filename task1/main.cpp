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
    int numbers[arraySize] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int index = 0; index < arraySize; ++index) {
        std::cout << numbers[index];

        if (index < arraySize - 1) {
            std::cout << ", ";
        }
    }

    std::cout << '\n';

    return 0;
}

