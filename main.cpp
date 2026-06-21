#ifdef _WIN32
#include <windows.h>
#endif

#include <iostream>

int main() {
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#endif
    
    std::cout << std::boolalpha;

    bool first = true;
    bool second = true;


    std::cout << "Оператор: ||\n";

    first = true;
    second = true;
    std::cout << first << " " << second << " " << (first || second) << '\n';
    
    first = false;
    second = true;    
    std::cout << first << " " << second << " " << (first || second) << '\n';

    first = true;
    second = false;
    std::cout << first << " " << second << " " << (first || second) << '\n';

    first = false;
    second = false;
    std::cout << first << " " << second << " " << (first || second) << '\n';

    std::cout << "\nОператор: &&\n";

    first = true;
    second = true;
    std::cout << first << " " << second << " " << (first && second) << '\n';

    first = false;
    second = true;
    std::cout << first << " " << second << " " << (first && second) << '\n';

    first = true;
    second = false;
    std::cout << first << " " << second << " " << (first && second) << '\n';

    first = false;
    second = false;
    std::cout << first << " " << second << " " << (first && second) << '\n';


    return 0;
}
