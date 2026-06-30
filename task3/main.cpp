#ifdef _WIN32
#include <windows.h>
#endif

#include <iostream>
#include <string>

int main() {
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#endif

    std::string gender;
    std::string zodiacSign;
    int age;

    std::cout << "Введите пол: ";
    std::cin >> gender;

    std::cout << "Введите знак зодиака: ";
    std::cin >> zodiacSign;

    std::cout << "Введите возраст: ";
    std::cin >> age;

    bool isMale = (gender == "м");
    bool isFemale = (gender == "ж");

    bool isWaterSign = (zodiacSign == "рак") || (zodiacSign == "скорпион") || (zodiacSign == "рыбы");

    bool isEarthSign = (zodiacSign == "телец") || (zodiacSign == "дева") || (zodiacSign == "козерог");

    std::cout << "Ваше предсказание:\n";

    if (isMale && isWaterSign && age < 40) {
        std::cout << "Сегодня очень плодотворный день. Можно добиться того, "
                     "что прежде казалось почти невозможным.\n";
    } else if (isFemale && isEarthSign && age >= 15 && age <= 30) {
        std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних "
                     "праздников и импровизированных вечеринок.\n";
        std::cout << "Будет не только весело, но и интересно: найдётся дело, "
                     "которое увлечёт всех.\n";
    } else {
        std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)\n";
    }

    return 0;
}