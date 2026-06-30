#ifdef _WIN32
#include <windows.h>
#endif

#include <iostream>
#include <string>

std::string numberToText(int number) {
    if (number == 0) {
        return "ноль";
    }

    std::string result;

    if (number < 0) {
        result = "минус ";
        number = -number;
    }

    if (number < 20) {
        if (number == 1) return result + "один";
        if (number == 2) return result + "два";
        if (number == 3) return result + "три";
        if (number == 4) return result + "четыре";
        if (number == 5) return result + "пять";
        if (number == 6) return result + "шесть";
        if (number == 7) return result + "семь";
        if (number == 8) return result + "восемь";
        if (number == 9) return result + "девять";
        if (number == 10) return result + "десять";
        if (number == 11) return result + "одиннадцать";
        if (number == 12) return result + "двенадцать";
        if (number == 13) return result + "тринадцать";
        if (number == 14) return result + "четырнадцать";
        if (number == 15) return result + "пятнадцать";
        if (number == 16) return result + "шестнадцать";
        if (number == 17) return result + "семнадцать";
        if (number == 18) return result + "восемнадцать";
        if (number == 19) return result + "девятнадцать";
    }

    int tens = number / 10;
    int ones = number % 10;

    if (tens == 2) result += "двадцать";
    if (tens == 3) result += "тридцать";
    if (tens == 4) result += "сорок";
    if (tens == 5) result += "пятьдесят";
    if (tens == 6) result += "шестьдесят";
    if (tens == 7) result += "семьдесят";
    if (tens == 8) result += "восемьдесят";
    if (tens == 9) result += "девяносто";

    if (ones != 0) {
        result += " ";
    }

    if (ones == 1) result += "один";
    if (ones == 2) result += "два";
    if (ones == 3) result += "три";
    if (ones == 4) result += "четыре";
    if (ones == 5) result += "пять";
    if (ones == 6) result += "шесть";
    if (ones == 7) result += "семь";
    if (ones == 8) result += "восемь";
    if (ones == 9) result += "девять";

    return result;
}

int main() {
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#endif

    int firstNumber;
    int secondNumber;

    std::cout << "Введите целое число: ";
    std::cin >> firstNumber;

    std::cout << "Введите целое число: ";
    std::cin >> secondNumber;

    if (firstNumber <= -100 || firstNumber >= 100 || secondNumber <= -100 || secondNumber >= 100) {
        std::cout << "Ошибка! Одно из чисел вне диапазона!\n";
        return 0;
    }

    std::string firstText = numberToText(firstNumber);
    std::string secondText = numberToText(secondNumber);

    if (firstNumber < secondNumber) {
        std::cout << firstText << " меньше чем " << secondText << '\n';
    } else if (firstNumber > secondNumber) {
        std::cout << firstText << " больше чем " << secondText << '\n';
    } else {
        std::cout << firstText << " равно " << secondText << '\n';
    }

    return 0;
}