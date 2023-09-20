#include <iostream>

// Функція для обчислення числа Фібоначчі за допомогою рекурсії
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    std::cout << "Введіть номер числа Фібоначчі: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Номер має бути не від'ємним." << std::endl;
    } else {
        int result = fibonacci(n);
        std::cout << "Число Фібоначчі #" << n << " дорівнює " << result << std::endl;
    }

    return 0;
}
