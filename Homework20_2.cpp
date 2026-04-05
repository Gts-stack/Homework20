#include <iostream>

long long* memo;

long long fibonacci(int n) 
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    if (memo[n] != -1) return memo[n];
    
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
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

    memo = new long long[n + 1];
    for (int i = 0; i <= n; ++i) 
    {
        memo[i] = -1;
    }

    long long result = fibonacci(n);
    std::cout << "F(" << n << ") = " << result << std::endl;

    delete[] memo;
    return 0;
}