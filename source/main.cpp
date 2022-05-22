#include <concepts>
#include <iostream>
template <typename T>
requires std::integral<T> T add(T a, T b) { return a + b; }

int main() {
  std::cout << "Hello from C++ 20 with CMake on Linux/Windows" << '\n';
  std::cout << "The sum is : " << add(5, 7) << '\n';
}