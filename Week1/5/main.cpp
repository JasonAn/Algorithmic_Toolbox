#include <iostream>
#include <climits>

long long gcd(long long a, long long b) {
  if(a < b) {
      long long temp = a;
      a = b;
      b = temp;
  }
    if (b == 0)
        return a;
    else
        return gcd(a%b, b);
}

int main() {
    long long a, b;
    std::cin>> a >> b;
    std::cout <<a * b/ gcd(a, b)<< std::endl;
    return 0;
}
