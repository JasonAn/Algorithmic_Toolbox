#include <iostream>
#include <climits>


using namespace std;

int fibmod(long long n, long m){
    long *fiblist;
    fiblist = new long[INT32_MAX];
    fiblist[0] = 0;
    fiblist[1] = 1;
    for (long long i = 2; i < n; i++){
        fiblist[i] = (fiblist[i-1] + fiblist[i - 2]) % m;
        //cout << i << "  " << fiblist[i] << endl;
        if(fiblist[i] == 1 && fiblist[i-1] == 0) {
            cout << fiblist[(n % (i - 1))];
            delete[] fiblist;
            return 0;
        }
    }
}


int main() {
    long long n;
    long m;
    cin >> n >> m;
    fibmod(n, m);
    return 0;
}