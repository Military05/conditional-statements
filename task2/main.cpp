#ifdef _WIN32
#include <windows.h>
#endif

#include <iostream>

int main() {   
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#endif

    int firstNumber;
    int secondNumber;
    int thirdNumber;

    std::cout << "Введите первое число:";
    std::cin >> firstNumber;

    std::cout << "Введите второе число:";
    std::cin >> secondNumber;

    std::cout << "Введите третье число:";
    std::cin >> thirdNumber;

    int maxOfFirstTwo = (firstNumber > secondNumber) ? firstNumber : secondNumber;  
    int maxNumber = (maxOfFirstTwo > thirdNumber) ? maxOfFirstTwo : thirdNumber;

    int minOfFirstTwo = (firstNumber < secondNumber) ? firstNumber : secondNumber;
    int minNumber = (minOfFirstTwo < thirdNumber) ? minOfFirstTwo : thirdNumber;


    int middleNumber = firstNumber + secondNumber + thirdNumber - maxNumber - minNumber;

    std::cout <<"\nРезультат: " << maxNumber << ' ' << middleNumber << ' ' << minNumber << '\n';

 
    return 0;
}    