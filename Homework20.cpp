#include <iostream>

long long fibonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char** argv) 
{
    int n;
    std::cout << "Введите номер числа Фибоначчи: ";
    std::cin >> n;

    if (n < 0) 
    {
        std::cout << "Число должно быть неотрицательным." << std::endl;
        return 1;
    }

    std::cout << "F(" << n << ") = " << fibonacci(n) << std::endl;
    return 0;
}
