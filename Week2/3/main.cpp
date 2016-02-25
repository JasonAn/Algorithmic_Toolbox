#include <iostream>

long long gcd(long long a, long long b) {
    if (a < b) {
        long long c = a;
        a = b;
        b = c;
    }
    if (b == 0)
        return a;
    else
        return gcd(a%b, b);
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
  return 0;
}