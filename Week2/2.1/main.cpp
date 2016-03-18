#include <iostream>

int get_change(int n) {
  int i = 0;
  i += n / 10;
  n =  n % 10;

  i += n / 5;
  n = n % 5;

  n = n + i;

  return n;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << get_change(n) << '\n';
}
