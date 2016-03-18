#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size();
  int mid = (left + right) / 2;


  vector<int> b = {};

  if (x == a[mid]){
    index += mid;
    std::cout << "now "<< x << " " << index << " " << mid << std::endl;
    return index;
  }
  else if (x < a[mid] && mid != left){
      for(auto i = left; i < mid; i++)
        b.push_back(a[i]);
    std::cout << "left" << std::endl;
    binary_search(b, x);
  }
  else if (x > a[mid] && mid != left){
    index += mid;
    for (auto i = mid; i < right; i++)
      b.push_back(a[i]);
    std::cout << "right" << std::endl;
    binary_search(b, x);
  }
  else
    return -1;
}

//int linear_search(const vector<int> &a, int x) {
//  for (size_t i = 0; i < a.size(); ++i) {
//    if (a[i] == x) return i;
//  }
//  return -1;
//}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, 13) << "next!!" << std::endl;
  }
}
