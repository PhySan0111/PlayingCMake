#include <iostream>
#include <concepts>


template <typename T>
T adder(T a, T b) requires std::is_arithmetic_v<T> && (!std::same_as<T, char>)
{
    return a + b;
}

int main()
{
    auto res = adder(1.3, 3.0);
    std::cout << res << "\n";
    return 0;
}