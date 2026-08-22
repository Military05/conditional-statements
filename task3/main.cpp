#ifdef _WIN32
#include <windows.h>
#endif

#include <iostream>

int main() {
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#endif

    constexpr int rowCount = 3;
    constexpr int columnCount = 6;

    int matrix[rowCount][columnCount] {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18}
    };

    int minimum = matrix[0][0];
    int maximum = matrix[0][0];
    int minimumRow = 0;
    int minimumColumn = 0;
    int maximumRow = 0;
    int maximumColumn = 0;

    std::cout << "Массив:\n";

    for (int row = 0; row < rowCount; ++row) {
        for (int column = 0; column < columnCount; ++column) {
            std::cout << matrix[row][column] << '\t';

            if (matrix[row][column] < minimum) {
                minimum = matrix[row][column];
                minimumRow = row;
                minimumColumn = column;
            }

            if (matrix[row][column] > maximum) {
                maximum = matrix[row][column];
                maximumRow = row;
                maximumColumn = column;
            }
        }

        std::cout << '\n';
    }

    std::cout << "Индекс минимального элемента: " << minimumRow << ' ' << minimumColumn
              << "\nИндекс максимального элемента: " << maximumRow << ' ' << maximumColumn
              << '\n';

    return 0;
}

