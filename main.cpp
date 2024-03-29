#include <iostream>
#include <concepts>

#include "MainConfig.h"

//Use MathFunctions only if set USE_MY_MATH
#ifdef USE_MY_MATH
#include "MathFunctions.h"
#endif

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

  auto res_adder = adder(1.3, 3.0);
  std::cout << "adder = " << res_adder << "\n";

  #ifdef USE_MY_MATH
    auto res_subtracter = mathfunctions::subtracter(3, 1);
    std::cout << "subtracter = " << res_subtracter << "\n";
  #endif
  return 0;
}