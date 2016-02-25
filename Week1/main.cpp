#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long max(long a, long b){
    if (a > b)
        return a;
    else
        return b;

}
long long MaxPairwiseProduct(const vector<long>& numbers) {
    long long result = 0;
    int n = numbers.size();
    long max1 = 0;
    long max2 = 0;
    for (int i = 0; i < n; ++i) {
        if (numbers[i] == max(numbers[i], max1) && numbers[i] == max(numbers[i], max2)) {
            max2 = max1;
            max1 = numbers[i];
        }
        else if (numbers[i] == max(numbers[i], max2))
            max2 = numbers[i];
    }
    return max1 * max2;
}

int main() {
    int n;
    cin >> n;
    vector<long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}

