#include <iostream>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
    double value = 0.0;
    size_t n = weights.size();
    vector<double> value_perweight(n);
    vector<double> value_order;

    for (int i = 0; i < n; i++)
        value_perweight[i] = values[i] * 1.0 / weights[i];

    value_order = value_perweight;

    vector<int> order;

    int max_index;

    for (int i = 0; i < n; i++) {
        double max = value_order[0];
        max_index = 0;
        for(int j = 0; j < n; j++) {
            if (value_order[j] > max) {
                max = value_order[j];
                max_index = j;
            }
        }

        order.push_back(max_index);
        value_order[max_index] = 0;

//        for(int m = 0; m < order.size(); m++)
//                std::cout << order[m] << " ";
//        std::cout << std::endl;

    }


    int i = 0;
    while(capacity > 0) {

        if (capacity < weights[order[i]])
        {
            value += capacity * value_perweight[order[i]];
            return value;
        }

        else{
            value += values[order[i]];
            capacity -= weights[order[i]];
            i++;
        }
    }

    return value;
}

int main() {
    int n;
    int capacity;
    std::cin >> n >> capacity;
    vector<int> values(n);
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        std::cin >> values[i] >> weights[i];
    }

    double optimal_value = get_optimal_value(capacity, weights, values);

    std::cout.precision(10);
    std::cout << optimal_value << std::endl;
    return 0;
}
