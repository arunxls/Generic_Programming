/*
Arun Krishnakumar Rajagoapalan 623007516
*/

#include<stdio.h>
#include<cassert>
#include<iostream>
#include "p1.hpp"

template <typename T1, typename T2, typename T3>
triple<T1, T2, T3> make_triple(const T1& first, const T2& second, const T3& third) {
    triple<T1, T2, T3> x(first, second, third);
    return x;
}

int main() {
    triple<int, int, char> a;

    triple<int, int, char> b(1, 2, 'a');
    assert(b.first == 1);
    assert(b.second == 2);
    assert(b.third == 'a');

    a = b;
    assert(a.first == 1);
    assert(a.second == 2);
    assert(a.third == 'a');

    triple<int, int, char> c = b;
    assert(c.first == 1);
    assert(c.second == 2);
    assert(c.third == 'a');

    assert(a==b);

    typedef triple<int, int, char>::first_type int_type; // t is int
    int_type test_int = 5;

    assert(b == make_triple(1, 2, 'a'));
    ++b;
    assert(a != b);

    assert(b.first == 2);
    assert(b.second == 3);
    assert(b.third == 'b');

    b++;
    assert(b.first == 3);
    assert(b.second == 4);
    assert(b.third == 'c');
}

