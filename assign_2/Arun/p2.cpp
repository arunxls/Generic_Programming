#include "p2.hpp"
#include <algorithm>
#include <vector>
#include <array>
#include <iostream>
#include <initializer_list>

int main()
{
    std::vector<int> v1 = {9, 8, 7};
    std::vector<int> v2(v1);

    func1(v1.begin(), v1.end());

    std::sort(v2.begin(), v2.end());

    std::cout << (v1 == v2 ? "Equal" : "Not Equal") << std::endl;
}