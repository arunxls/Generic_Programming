#include "p4.hpp"
#include <list>
#include <forward_list>
#include <sstream>

int main() {

    char a1[10];
    print_category(a1 + 10);

    std::list<int> a2;
    print_category(a2.begin());

    std::forward_list<int> a3;
    print_category(a3.begin());

    std::istringstream a4;
    print_category(std::istream_iterator<int>(a4));

    print_category(std::ostream_iterator<double>(std::cout, " "));
}