#include <iostream>

long long calc_fib(int n) {
    long long fiblist[n];
    fiblist[0] = 1;
    fiblist[1] = 1;
    for(int i = 2; i < n; i++)
        fiblist[i] = fiblist[i-1] + fiblist[i-2];
    return fiblist[n-1];
}

int main() {
    int n = 0;
    std::cin >> n;

    std::cout << calc_fib(n) << '\n';
    return 0;
}
