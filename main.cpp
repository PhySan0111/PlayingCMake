#include <iostream>
#include <concepts>

#include "MainConfig.h"

template <typename T>
T adder(T a, T b) requires std::is_arithmetic_v<T> && (!std::same_as<T, char>)
{
    return a + b;
}

int main(int argc, char* argv[])
{
  if (argc < 2) {
    // report version
    std::cout << argv[0] << " Version " << MyMain_VERSION_MAJOR << "."
              << MyMain_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
  }

  auto res = adder(1.3, 3.0);
  std::cout << res << "\n";
  return 0;
}