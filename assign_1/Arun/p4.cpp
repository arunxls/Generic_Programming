/*
Arun Krishnakumar Rajagoapalan 623007516
*/

#include <cassert>
#include <string>
#include <iostream>
#include <vector>

#include "p2.hpp"

template <typename T>
void exchange(T& first, T& second) {
    std::cout << "Default exchange called" << std::endl;
    T temp = first;
    first  = second;
    second = temp;
}

template <typename T>
void exchange(std::vector<T>& first, std::vector<T>& second) {
    std::cout << "Vector exchange called" << std::endl;
    first.swap(second);
}

template<>
void exchange(int& x, int& y) {
    std::cout << "Integer exchange called" << std::endl;
    x = x xor y;
    y = x xor y;
    x = x xor y;
}

template <typename T1, typename T2, typename T3>
void exchange_triple(triple<T1, T2, T3>& first, triple<T1, T2, T3>& second) {
    std::cout << "triple exchange called" << std::endl;
    exchange<T1>(first.first, second.first);
    exchange<T2>(first.second, second.second);
    exchange<T3>(first.third, second.third);
}

int main() {
    int int1 = 0;
    int int2 = 10;

    exchange<int>(int1, int2);
    assert(int1 == 10);
    assert(int2 == 0);

    std::vector<int> vec1(4,1);
    std::vector<int> vec2(4,2);
    exchange(vec1, vec2);

    triple<char, int, std::vector<int> > a('a', 1, vec1);
    triple<char, int, std::vector<int> > b('b', 2, vec2);
    exchange_triple(a, b);
}