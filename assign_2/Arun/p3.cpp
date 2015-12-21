#include "p3.hpp"
#include <algorithm>
#include <vector>
#include <array>
#include <iostream>
#include <initializer_list>

int main()
{
  std::vector<int> v = { 1, 20, 3, 40, 5, 60, 70, 6, 80, 9 };

  dragdrop(v.begin(), v.end(), v.begin()+6, [](int i) { return i >= 10; });

  std::for_each(v.begin(), v.end(), [](int i) { std::cout << i << " "; });
}