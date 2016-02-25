#include <iostream>

using namespace std;

long long fibmod(long long n, long long m){
    long long fiblist[n];
    fiblist[0] = 0;
    fiblist[1] = 1;
    for (auto i = 2; i < n; i++)
        fiblist[i] = (fiblist[i-1] + fiblist[i - 2]) % m;

    return fiblist[n-1];
}


int main() {
    long long n, m;
    cin >> n >> m;
    cout << fibmod(n, m)<< endl;
    return 0;
}