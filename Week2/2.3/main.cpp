#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using std::vector;

struct Segment {
    int start, end;
};

vector<int> optimal_points(vector<Segment> &segments) {
    vector<int> points;
    vector<int> sol_final;

    for (size_t i = 0; i < segments.size(); ++i) {
        points.push_back(segments[i].start);
        points.push_back(segments[i].end);
    }

    while(points.size() > 0){
        vector<int> sol;

        for(size_t j = 1; j < points.size(); j = j + 2)
            sol.push_back(points[j]);

        sort(sol.begin(), sol.end());

        bool flag = false;
        int point_current = sol[0];

        for(size_t j = 0; j < points.size(); j = j + 2)
            if (points[j] <= point_current && points[j] > -1) {
                points.erase(points.begin() + j, points.begin() + j + 2);
                j = j - 2;
                flag = true;
            }

        if (flag == true)
            sol_final.push_back(point_current);

//        for(auto i = 0; i < points.size(); i ++)
//            std::cout << points[i] << " ";
//        std::cout << std::endl << std::endl;

    }

    points  = sol_final;

    return points;
}

int main() {
    int n;
    std::cin >> n;
    vector<Segment> segments(n);
    for (size_t i = 0; i < segments.size(); ++i) {
        std::cin >> segments[i].start >> segments[i].end;
    }
    vector<int> points = optimal_points(segments);
    std::cout << points.size() << "\n";
    for (size_t i = 0; i < points.size(); ++i) {
        std::cout << points[i] << " ";
    }
}
