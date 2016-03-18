#include <iostream>


int get_fibonacci_last_digit(long long n) {
    int fiblist[n];
    fiblist[0] = 1;
    fiblist[1] = 1;
    for (long long i = 2 ; i < n; i ++) {
        fiblist[i] = (fiblist[i - 1] + fiblist[i - 2]) % 10;
        //std::cout << fiblist[i] << std::endl;
    }
    return fiblist[n-1];
}

int main() {
    long n;
    std::cin >> n;
    int c = get_fibonacci_last_digit(n);
    std::cout << c << '\n';
}
